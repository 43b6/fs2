// ԭ code �����Ӵ�, ���� by ACKY

inherit NPC;

#include <ansi.h>

string ans1();

void create ()
{
	set_name( "λ�ù�����", ({ "local master", "master", "local" }) );
	set( "long", "
    ����һ���ɻ�������������ɵ�λ�ù�������ˣ������Ϊ���й���
��������λ�á����͵����⡣\n");
	set( "age", 200 );
	set( "gender", "����" );
	set( "title", "������" );
	set( "inquiry", ([
		"λ��" : (: ans1 :)
		]) );
	setup();
}

string ans1()
{
	command( "hmm" );
	command( "say �һ������������������ϴ���, �����ѡ���͵ĵط�����ʽ( move [number] )\n" );
	command( "say ��Ҫ��������ϲ����Ե���������Ҫ��λ��, ����Ҳû�취�...\n" );
	command( "shrug" );
	return "�ٸ����˵һ��... ������˶���ǿ�!\n";
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
		tell_object( me, HIY"λ�ù�����˵��: ��˵ʲô? ��������...\n"NOR );
		return 1;
	}
	if( me->query("quest/start_game") <= move ) {
		tell_object( me, HIY"λ�ù�����˵��: ��Ǹ��... ��ĵȼ�������ͨ���ô���\n"NOR );
		return 1;
	}
	message_vision( HIY"λ�ù�����˵��: ���Ϸ���, ��ʼ������ս��"HIW + me->query("name") + HIY"��\n"NOR, me );
	me->move( __DIR__"busy_room" + ( move < 10 ? "0" + move : "" + move ) );
	message_vision( HIW"$N�������������\n"NOR, me );
	return 1;
}

