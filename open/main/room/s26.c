// Room: /open/main/room/s26.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/brownhorse" : 1,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s30",
  "north" : __DIR__"f21",
  "east" : __DIR__"s27",
]));

  setup();
}
