// Room: /open/main/room/s18.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/blackhorse" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r16",
  "south" : __DIR__"s22",
  "west" : __DIR__"s17",
]));

  setup();
}
