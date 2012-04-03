//open/prayer/room/2elder6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ִ�����Ϸ�");
  set ("long", @LONG

	    �㼺������ִ�����ϵĴ����ˣ���������
	�ǳ��ϵİ칫�ң������߼����߶��д�������
	���䶷��������ʥ��̵ĵ����ǵĹ���Ӧ��
	����

LONG);

  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/open/prayer/room/train1-9",		//`����
	"north" : "/open/prayer/room/2elder5",		//`���Ϸ�
	"south" : "/open/prayer/room/2elder7",		//`���Ϸ�
	"west" : "/open/prayer/room/2elder3",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}

// ���� tin by ACKY
void init()
{
	object me;
	me = this_player();
	remove_call_out("check");
	if( me->query_temp("elder2") > 3 ) {
		tell_room( this_object(), "ʥ��̵��Ӽ�æ��" + me->query("name") + "���˹�ȥ��\n", me );
		if( random(2) ) me->move("/open/prayer/room/2elder7");
		else            me->move("/open/prayer/room/2elder5");
		me->delete_temp("elder2");
		me->start_busy(2);
		message_vision( HIY"����˵��: ��Ż����ŵ��Ҵ�, �������ִ������ִ���ĵط�ࡡ�\n"NOR, me );
	}
	else {
		me->add_temp( "elder2", 1 );
		call_out( "check", 300, me );
	}
}

int check( object me )
{
    if(me)
	me->delete_temp("elder2");
	return 1;
}
