// Room: /open/main/room/s19.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/butterfly" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"m19",
  "north" : __DIR__"s15",
  "west" : __DIR__"r29",
  "east" : __DIR__"s20",
]));

  setup();
}
