#include <ansi.h>
#include <combat.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me, string arg)
{
        object obj,ob;
        object target;
        string st1, st2, po;
        if(!arg)
        return notify_fail("指令格式：throw <毒> to <人>\n");
        if(sscanf(arg,"%s to %s",st2, st1) != 2)
        return notify_fail("指令格式：throw <毒> to <人>\n");
        if(!ob=present(st2,me))
        return notify_fail("你的身上没有这种东西。\n");
        if(!ob->query("can_throw"))
        return notify_fail("这种东西不能这样使用。\n");
 if(environment(me)->query("no_fight")==1)
 return notify_fail("这里禁止战斗。\n");
 if(me->query("class") != "poisoner")
 return notify_fail("只有魔教徒能用。\n");
        if(!objectp( obj = present(st1, environment(me))))
        return notify_fail("你想攻击谁？\n");
if(obj->query_temp("throw-poison")==3)
return notify_fail("对特定敌人只能用三次。\n");
    if( obj->query("no_poison") )
        return notify_fail("这家伙你不能动就是不能动。\n");
        if( !obj->is_character() )
        return notify_fail("看清楚一点，那并不是生物。\n");
if( obj->query_temp("netdead") )
return notify_fail("敌人断线中，不能洒毒。\n");
  if(!living(obj)) return notify_fail("看清楚一点，那并不是生物。\n");
        if(obj==me) return notify_fail("你不能攻击自己。\n");
if(userp(obj)&&obj->query("age")<16) return notify_fail("不能对玩者用。\n");
        if( me->is_fighting() ) me->start_busy(1);
        message_vision(
        HIG "$N从袖口拿出一包"+ob->name()+"往$n撒去！\n" NOR,me,obj);
        if(50>random(100))
        {
        message_vision(
        GRN "$n闪躲不及，被"+ob->name()+"撒中！\n" NOR,me,obj);
        po = ob->query("poison_type");
        obj->apply_condition(po,obj->query_condition(po)+ob->query("poison_power"));
if(obj->query("id")=="degu sa") obj->add_temp("throw-poison",1);
obj->set("suck",me->query("functions/suck/level"));
obj->set("five",me->query("functions/five/level"));
        }
        else
        {
          message_vision(
          GRN "$n急忙中一闪，有惊无险的避了开去，并对$N开始展开攻击。\n" NOR,me,obj);
          obj->kill_ob(me);
        }
        ob->add_amount(-1);        
        return 1;
}

int help(object me)
{
   write(@HELP

指令格式：throw <毒> to <目标物>

说明：这个指令可以让你在战斗中对敌方用毒。

HELP
   );
   return 1;
}
