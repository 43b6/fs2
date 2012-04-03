#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me)
{
        string type,name,ob_name;
        object ob;
        seteuid(getuid());
        if(!me->query_temp("usesunsword")) return notify_fail("你不需要散劲。\n");
        if(me->is_fighting() ) return notify_fail("战斗中无法散气。\n");
        message_vision(HIC"$N运起身上仙剑内功...瞬间数道光芒由$N身上散出。\n"NOR,me);

        me->delete_temp("usesunsword");
        return 1;
}

int help (object me)
{
        write(@HELP
仙剑武者在战斗中因吸进太多连阳气劲而产生不适时,可用天阳散劲将体内多余的剑气散出体外
指令格式：cmd delsunkee
HELP
        );
        return 1;
}
