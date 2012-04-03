// Room: /open/main/room/s2.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һ���޼ʵĴ��ԭ�������в���Ұ�޵��㼣
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/blackhorse" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"s5",
  "west" : __DIR__"s1",
  "east" : __DIR__"s3",
]));

  setup();
}
