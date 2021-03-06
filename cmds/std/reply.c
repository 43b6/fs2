// reply.c

#include <ansi.h>
#include <net/dns.h>

inherit F_CLEAN_UP;

int help(object me);

void create() {seteuid(getuid());}

int main(object me, string arg)
{
	string target, mud;
	object obj;

	if( !arg || arg=="" )
		return notify_fail("你要回答什么？\n");

	if( !stringp(target = me->query_temp("reply")) )
		return notify_fail("刚才没有人和你说过话。\n");

        target = lower_case (target);
	if( sscanf(target, "%s@%s", target, mud)==2 ) {
                write ("[test]: "+ target + "@" + mud + ": " + arg + "\n");
		GTELL->send_gtell(mud, target, me, arg);
		write("网路讯息已送出，可能要稍候才能得到回应。\n");
		return 1;
	}

	obj = find_player(target);
	if( !obj )
		return notify_fail("刚才和你说话的人现在无法听见你，或者已经离开游戏了。\n");
    if(target=="cgy"&&obj->query("env/no_tell"))
	    return notify_fail("刚才和你说话的人现在无法听见你，或者已经离开游戏了。\n");
     if ((obj->gage(me) || obj->query("env/no_tell")) && wiz_level(obj) > wiz_level(me))
                return notify_fail(obj->name()+"现在不想受打扰。\n");

	write( HBRED "你用千里传音回答" + obj->name(1) + "：" + arg + "\n" NOR);
	tell_object(obj, sprintf( HBRED"%s用千里传音回答你：%s\n"NOR,
		me->name(1), arg ));

	obj->set_temp("reply", me->query("id"));
	return 1;
}

int help(object me)
{
	write(@HELP
指令格式 : reply <讯息>
指令说明 :
           这个指令用来回答刚才用 tell 和你说话的使用者。
其他指令 :
           tell，say
HELP
	);
	return 1;
}
