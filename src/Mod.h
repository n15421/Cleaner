#pragma once

#include "Config.h"
#include "GMLIB/Files/Language/I18n/JsonI18n.h"
#include "Global.h"
#include <ll/api/mod/NativeMod.h>

namespace Cleaner {

using namespace GMLIB::Files::I18n;

class Entry {

public:
    static Entry& getInstance();

    Entry() : mSelf(*ll::mod::NativeMod::current()) {}

    [[nodiscard]] ll::mod::NativeMod& getSelf() const { return mSelf; }

    /// @return True if the mod is loaded successfully.
    bool load();

    /// @return True if the mod is enabled successfully.
    bool enable();

    /// @return True if the mod is disabled successfully.
    bool disable();

    // TODO: Implement this method if you need to unload the mod.
    // /// @return True if the mod is unloaded successfully.
    // bool unload();

    Config& getConfig();

    JsonI18n& getI18n();
    
    void saveConfig();

private:
    ll::mod::NativeMod&   mSelf;
    std::optional<Config> mConfig;
    std::optional<JsonI18n> mI18n;
};

} // namespace Cleaner
