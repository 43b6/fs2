// 原 code 过于庞大, 精简 by ACKY

inherit NPC;

#include <ansi.h>

string ans1();

void create ()
{
	set_name( "位置管理者", ({ "local master", "master", "local" }) );
	set( "long", "
    他是一个由火神舞所制造而成的位置管理机器人，你可以为他有关于
试炼塔‘位置’传送的问题。\n");
	set( "age", 200 );
	set( "gender", "男性" );
	set( "title", "试炼塔" );
	set( "inquiry", ([
		"位置" : (: ans1 :)
		]) );
	setup();
}

string ans1()
{
	command( "hmm" );
	command( "say 我会依照你试炼塔的资料传送, 你可以选择传送的地方。格式( move [number] )\n" );
	command( "say 但要是你的资料不足以到达你所想要的位置, 那我也没办法喔...\n" );
	command( "shrug" );
	return "再跟你多说一点... 里面的人都很强喔!\n";
}

void init()
{
	add_action( "do_move", "move" );
}

int do_move( string str )
{
	int	move;
	object	me = this_player();
	if( !str || sscanf( str, "%d", move )!=1 || move > 50 || move < 1 ) {
		tell_object( me, HIY"位置管理者说道: 你说什么? 我听不懂...\n"NOR );
		return 1;
	}
	if( me->query("quest/start_game") <= move ) {
		tell_object( me, HIY"位置管理者说道: 抱歉啰... 你的等级不足以通往该处。\n"NOR );
		return 1;
	}
	message_vision( HIY"位置管理者说道: 资料符合, 开始传送挑战者"HIW + me->query("name") + HIY"。\n"NOR, me );
	me->move( __DIR__"busy_room" + ( move < 10 ? "0" + move : "" + move ) );
	message_vision( HIW"$N缓缓从天而降。\n"NOR, me );
	return 1;
}

