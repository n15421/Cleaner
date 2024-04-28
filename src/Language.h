#pragma once
#include "Global.h"

std::string en_US = R"({
    cleaner.info.prefix=§e§l[Cleaner] §r
    cleaner.command.cleaner=Cleaner admin command.
    cleaner.command.despawnSuccess=Successfully despawned %1$s entities.
    cleaner.command.error.noTarget=No targets matched the selector.
    cleaner.command.error.playerOnly=This command can only be executed by players!
    cleaner.command.tps.output=Current server real-time TPS %1$s §r, average TPS %2$s.
    cleaner.command.mspt.output=Current server MSPT %1$s.
    cleaner.command.clean.output=Clean task successfully initiated!
    cleaner.command.voteclean=Initiate entity clean vote.
    cleaner.command.despawntime=Despawn time for items set to %1$s game ticks.
    cleaner.output.count1=The system will automatically clean server entities in %1$s seconds!
    cleaner.output.count2=Attention! The system will automatically clean server entities in %1$s seconds!
    cleaner.output.finish=Cleaning complete! A total of %1$s entities have been cleaned this time.
    cleaner.output.opClean=Admin has enabled server entity cleaning.
    cleaner.output.reload=Cleaner plugin reloaded. Some configurations may require a server restart to take effect.
    cleaner.output.triggerAutoCleanCount=Too many server entities detected! There are %1$s cleanable entities currently on the server. Auto-clean program has been activated.
    cleaner.output.triggerAutoCleanTps=Low TPS detected! Server average TPS %1$s\nClean program has been initiated.
    cleaner.vote.cooldown=Vote cleaning cooldown...
    cleaner.vote.cancel=Vote canceled!
    cleaner.vote.confirmNo=Think again
    cleaner.vote.confirmOk=Initiate vote
    cleaner.vote.confirmTubtitle=Do you want to initiate a clean vote?
    cleaner.vote.accept=You have agreed to entity cleaning.
    cleaner.vote.deny=You have declined entity cleaning.
    cleaner.vote.no=Deny
    cleaner.vote.ok=Agree
    cleaner.vote.subtitle=%1$s lunched a clean vote.\n\n Do you agree to clean server entities now?
    cleaner.vote.timeout=Vote has expired!
    cleaner.vote.succeed=Vote cleaning successful!
    cleaner.vote.failed=Vote cleaning did not passed!
    cleaner.vote.title=Vote Cleaning
    cleaner.vote.voted=You have been voted!
    cleaner.vote.voteMessage=%1$s lunched a clean vote. If you agree cleaning entities but did not received a form, please type command /voteclean to vote.
})";

std::string zh_CN = R"({
    cleaner.info.prefix=§e§l[Cleaner] §r
    cleaner.command.cleaner=Cleaner管理员命令。
    cleaner.command.despawnSuccess=已成功清除了 %1$s 个实体
    cleaner.command.error.noTarget=没有与选择器匹配的目标
    cleaner.command.error.playerOnly=该命令只能由玩家执行！
    cleaner.command.tps.output=当前服务器实时TPS %1$s §r，平均TPS %2$s
    cleaner.command.mspt.output=当前服务器实MSPT %1$s
    cleaner.command.clean.output=已成功启动清理任务！
    cleaner.command.voteclean=发起实体清理投票。
    cleaner.command.despawntime" : "已成功将物品消失时间设置为 %1$s 游戏刻
    cleaner.output.count1=系统将在 %1$s 秒后自动清理服务器实体！
    cleaner.output.count2=请注意！系统将在 %1$s 秒后自动清理服务器实体！
    cleaner.output.finish=清理完成！本次总共清理了 %1$s 个实体。
    cleaner.output.opClean=管理员启用了服务器实体清理。
    cleaner.output.reload=已重载Cleaner插件，部分配置可能需要重启服务器才能生效。
    cleaner.output.triggerAutoCleanCount=检测到服务器实体过多！！当前服务器存在 %1$s 个可清理实体，已启动自动清理程序。
    cleaner.output.triggerAutoCleanTps=当前服务器TPS过低！！服务器平均TPS %1$s\n系统已启动清理程序。
    cleaner.vote.cooldown=投票清理正在冷却...
    cleaner.vote.cancel=投票已取消！
    cleaner.vote.confirmNo=我再想想
    cleaner.vote.confirmOk=发起投票
    cleaner.vote.confirmTubtitle=你是否要发起投票清理？
    cleaner.vote.accept=你已同意实体清理。
    cleaner.vote.deny=你已拒绝实体清理。
    cleaner.vote.no=拒绝
    cleaner.vote.ok=同意
    cleaner.vote.subtitle=%1$s 发起了服务器实体清理投票！\n\n你是否同意现在清理服务器实体？
    cleaner.vote.timeout=投票已过期！
    cleaner.vote.succeed=投票清理成功！
    cleaner.vote.failed=投票清理未通过。
    cleaner.vote.title=投票清理
    cleaner.vote.voted=你已经投过票了！
    cleaner.vote.voteMessage=%1$s 发起了服务器实体清理投票！如果同意清理但是未收到表单，请输入命令 /voteclean 投票。拒绝清理请忽略此信息。
})";