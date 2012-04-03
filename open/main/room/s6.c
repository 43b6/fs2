// Room: /open/main/room/s6.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
�����Ǵ��ԭ�Ķ���, ������ȥ, �ǳ�����������ɳĮ
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/brownhorse" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"s3",
  "west" : __DIR__"s5",
  "south" : __DIR__"s8",
  "east" : __DIR__"d8",
]));

  setup();
}
