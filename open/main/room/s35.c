// Room: /open/main/room/s35.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
LONG);

set("no_clean_up", 0);
  set("objects", ([ /* sizeof() == 1 */
//  "/open/main/npc/gao-shion.c" : 1,
// "/open/main/npc/secret_man.c" : 1, ����С���ص�
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"s34",
  "north" : __DIR__"L25",
  "east" : __DIR__"s36",
]));

  setup();
  replace_program(ROOM);
}
