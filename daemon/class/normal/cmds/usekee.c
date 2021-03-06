// fight.c

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
	object obj, old_target;
        seteuid(getuid());
	if(!me->is_fighting())
            return notify_fail("只有战斗中才能用。\n");
          if(!me->query("sec_kee"))
                return notify_fail("你的身上没有灵气。\n");
	if( !wizardp(me) && environment(me)->query("no_fight") )
		return notify_fail("这里禁止战斗。\n");

	if(!arg || !objectp(obj = present(arg, environment(me))))
		return notify_fail("你想攻击谁？\n");

	if( !obj->is_character() )
		return notify_fail("看清楚一点，那并不是生物。\n");


	if(wizardp(me)&&!wizardp(obj)&&wizhood(me)!="(manager)"&&wizhood(me)!="(admin)"&&wizhood(me)!="(arch)")
		return notify_fail("巫师不能对玩者使用灵气。\n");

	if(obj==me)	return notify_fail("你不能攻击自己。\n");
	SEC_KEE_D(me->query("sec_kee"))->kee_out(me,obj);
	return 1;
}
 
int help(object me)
{
   write(@HELP
 
指令格式：usekee <目标物>
 
说明：用这个指令可以让你使用灵气的战斗功能。
 
HELP
   );
   return 1;
}
