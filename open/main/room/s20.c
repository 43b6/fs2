// Room: /open/main/room/s20.c

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
  "north" : __DIR__"s16",
  "south" : __DIR__"m20",
  "west" : __DIR__"s19",
  "east" : __DIR__"s21",
]));

  setup();
}
