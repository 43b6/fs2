// Room: /open/main/room/r29.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
	��·���⿪ʼת�򱱷����죬ңԶ�ı����ƺ�����ɭ�֣�
	�Ϸ��Ǹߵ����������أ���������һƬ����Ĳ�ԭ����
	˵���������ĸߵ�������ѩ��ɽ�������ߵķ�Դ�أ�����
	��û��·������ȥ��


LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "southup" : __DIR__"m18",
  "west" : __DIR__"r28",
  "north" : __DIR__"r20",
  "east" : __DIR__"s19",
]));

  setup();
}
