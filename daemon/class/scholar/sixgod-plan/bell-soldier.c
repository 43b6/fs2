//By sueplan 提升杀气50点 - 振军计
//DELAY TIME 60秒 
#include <ansi.h>
inherit SSERVER;
 int delup(object me);
int perform(object me, object target)
{
        int bell=me->query("bellicosity");
        if( target != me)
                return notify_fail("此计只能对自己用。\n");
        if(me->query("force")<1000)
                return notify_fail("你的内力不够。\n");
        if(me->query("bellicosity")>2000)
                return notify_fail("你已经无法在提升你的杀气了。\n");
        if( me->query("family/family_name") != "儒门")
        return notify_fail("你并非儒门的人，不给你用咧！！^_^\n");
        if( me->query_temp("bellup"))
        return notify_fail("军心已经振奋了, 短时间内是无法再振奋军心的。\n");
        message_vision(
        HIY "$N熟知‘六韬奇略’中领兵之道在于气，提起心中好战的意志!!\n" NOR,me);
        me->add("bellicosity",50);
        me->set_temp("bellup",1);
        me->add("force",-500);
         call_out("delup",20,me);
        return 1;
}
 int delup(object me)
{
        if(me) {
        me->delete_temp("bellup");
        }
        return 1;
}


