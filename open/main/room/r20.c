// Room: /open/main/room/r20.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
	������·ֱ���ϱ����죬�������Ĳ�ԭ��ȥ
	���Կ���һ����ǣ����������߱�̨�������
	����Լ�Ŀ�����̨�����ƺ�����ɽ��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r29",
  "north" : __DIR__"r13",
  "east" : __DIR__"s15",
]));

  set("outdoors", "/open/main");

  setup();
}
