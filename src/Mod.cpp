#include "Mod.h"
#include "Features/Cleaner.h"
#include "Global.h"
#include "Language.h"

namespace Cleaner {

Entry& Entry::getInstance() {
    static Entry instance;
    return instance;
}

bool Entry::load() { return true; }

bool Entry::enable() {
    mConfig.emplace();
    ll::config::loadConfig(*mConfig, getSelf().getConfigDir() / "config.json");
    saveConfig();
    mI18n.emplace(getSelf().getLangDir(), mConfig->language);
    mI18n->updateOrCreateLanguage("en_US", en_US);
    mI18n->updateOrCreateLanguage("zh_CN", zh_CN);
    mI18n->loadAllLanguages();
    mI18n->chooseLanguage(mConfig->language); // maybe
    Cleaner::ListenEvents();
    RegisterCommands();
    Cleaner::loadCleaner();
    getSelf().getLogger().info("Cleaner Loaded!");
    getSelf().getLogger().info("Author: GroupMountain");
    getSelf().getLogger().info("Repository: https://github.com/GroupMountain/Cleaner");
    return true;
}

bool Entry::disable() {
    mConfig.reset();
    Cleaner::unloadCleaner();
    return true;
}

Config& Entry::getConfig() { return mConfig.value(); }

void Entry::saveConfig() { ll::config::saveConfig(*mConfig, getSelf().getConfigDir() / "config.json"); }

JsonI18n& Entry::getI18n() { return mI18n.value(); }

} // namespace Cleaner

LL_REGISTER_MOD(Cleaner::Entry, Cleaner::Entry::getInstance());

std::string tr(std::string const& key, std::vector<std::string> const& params) {
    return Cleaner::Entry::getInstance().getI18n().get(key, params);
}
