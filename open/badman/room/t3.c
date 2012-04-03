// Room: /open/badman/room/t3.c

#include <../badman.h>

inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG
�ص��е�����һֱ���ӵ����������ľ��ˣ���ע�⵽��һ
������(rattan)�����ƺ��ر���ܡ�ǰ����Ȼ��һƬ�ڰ�����֪��
����ʲô���Ķ����ڵ�����....

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "rattan" : "����������ƺ������ر��ï�ܣ��ܵ���ȫ�ڸ�\ס��ɽ�ڡ�
",
]));

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/badman/room/t2",
  "east" : "/open/badman/room/t7",
]));

  set("search_desc", ([ /* sizeof() == 1 */
  "rattan" : "�㲦����������Ȼ���ֺ��澹Ȼ�и�ͨ�������������ȴ��ȫ����������
��������ͨ��(pass)����
",
]));


  setup();
}

void init()
{
	add_action("do_pass", "pass");
}

int do_pass(string arg)
{
	object who;
	who = this_player();

	if( !arg || arg!="rattan" )
		return notify_fail("��Ҫͨ��ʲô��\n");
	tell_object(who,"�����ֲ���������������ͨ�����˽�ȥ��\n");
	who->move(B_ROOM"t4");
	tell_room(this_object(),"�㿴��"+who->query("name")+"������������ȥ����Ȼ�Ͳ�����Ӱ�ˡ�\n");
	return 1;
}
