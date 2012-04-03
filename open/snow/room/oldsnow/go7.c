#include <room.h>
#include <ansi.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","�����");
  set ("long", @LONG
������ѩ��ɽ�е�һ��ʥ������Ϊ������塱
�ڴ�Զ�����£��������ﾡ�����У�
���˲��⻳���Լ��Ƿ������˼��ɾ���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/snow/room/oldsnow/room4",
]));


   set("light_up",1);


  setup();
}
void init()
{
}
int do_abandon( string arg )
{
 object me = this_player();
	if( !arg || arg != "seckee" ) return 0;
	me->delete("sec_kee");
	me->delete("max_s_kee");
	return notify_fail("������������ϵ�������\n");
}
int do_use( string arg )
{
	object ob;
 object me = this_player();
	if( !arg || arg != "de" ) return 0;
	if( !(ob=present("de",this_player())) ) return 0;
	message_vision("$N�����ﴵ��������֮�� .......\n",this_player());
	if( me->query("sec_kee") ) 
		return notify_fail("��������Ѿ���һ�������ˣ������������ܽӽ�������Ҫ����������(destruct seckee)��\n");
	message_vision(HIG "ͻȻ������յ��Ƽ��дܳ���һ����������������ֱ�ӱ���$N�����ڣ��γ�������֮����\n",this_player());
	me->set("quests/dragon-kee",1);
	me->set("sec_kee","dragon");
	me->set("max_s_kee",20);
	me->set("s_kee",20);
	destruct(ob);
	return 1;
}
