#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) return 0;
tell_object(me , HIB "你的毒劲发作，迅速漫延全身。\n" NOR);
message("vision",HIB+me->name()+"脸色发黑，似乎中了剧毒。\n"NOR,environment(me),me);
        me->receive_wound("kee",600);
        me->receive_wound("sen",300);
        me->receive_wound("gin",300);
        me->add("force",-1000);
        me->start_busy(1);
        if( me->query("force") < 0 ) me->set("force",0);
        me->apply_condition("u-stial",duration-1);
 if (duration < 1) return 0;
        return 1;
}
