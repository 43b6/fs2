// trap.c by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIM"陷阱包"NOR, ({ "trap bag", "trap", "bag" }) );
	set( "long", "起毛球用来制作(setup)机关陷阱的神秘工具包。" );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 5000 );
		set( "unit", "包" );
                set( "value", 1000000 );
                set( "use/1", 10 ); // 毒蒺菱
	}
	setup();
}

string long()
{
	string long, list, type;
        int i, n, o;

	list = "";
	long = "    起毛球用来制作(setup)机关陷阱的神秘工具包。\n";

	for( i=1; i<2; i++ )
		if( o = query( "use/" + i ) ) {
			switch(i) {
				case 1: type = "毒蒺菱"; break;
			}
			n++;
			list += "\t" + CHINESE_D->chinese_number(o) + "组" + type + "\n";
		}

	if(n)
		return long + "里面装有" + CHINESE_D->chinese_number(n) + "种机关陷阱 -\n" + list;
	else
		return long + "里面空无一物。\n";
}

void init()
{
	add_action( "do_use", "setup" );
}

int do_use( string arg )
{
	object	trap, me, ob, env;
	int	type;

	if( !arg || sscanf( arg, "%d", type ) != 1 || type < 1 || type > 1 ) {
		write( @TRAP
	[1] 毒蒺菱
	[2] 未知
	[3] 未知
	[4] 未知
	[5] 未知
TRAP);
		return 1;
	}

	me = this_player();
	ob = this_object();
	env = environment(me);
	
	if( me->query("age") < 18 )
		return notify_fail( "未成年不得使用。\n" );

	if( me->query("gin") > 200 )
		me->add( "gin", -random(100)-100 );
	else
		return notify_fail( "你的精力不足了, 休息一下吧。\n" );
	if( me->query("force") > 200 )
		me->add( "force", -random(100)-100 );
	else
		return notify_fail( "你的内力不足了, 休息一下吧。\n" );
	trap = new( "/open/clan/area/home/trap_" + type );
	if( !query( "use/" + type ) )
		return notify_fail( trap->short() + "已被用光了。\n" );
	message_vision( HIY"$N小心翼翼地将" + name() + HIY"里的" + trap->name() + HIY"拿出来安装于" + env->short() + HIY"。\n"NOR, me );
	call_out( "do_use_2", 10, me, trap, env );
	add( "use/" + type, -1 );
	return 1;
}

void do_use_2( object me, object trap, object env )
{
	if( env != environment(me) ) {
		message_vision( HIY"$N安装" + trap->name() + HIY"失败。\n"NOR, me );
		destruct(trap);
		return;
	}
	message_vision( HIY"$N成功地将" + trap->name() + HIY"安装于" + env->short() + HIY"。\n"NOR, me );
	trap->move(environment(me));
	trap->set( "name", me->short() + "装设的" + trap->name() );
	trap->set( "setup", 1 );
	trap->set( "maker", me->name() + "(" + me->query("id") + ")" );
	me->start_busy(5);
}

