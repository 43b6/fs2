// Room: /open/gsword/room/g4-15.c
inherit ROOM;

void create ()
{
  set ("short", "太和殿");
  set ("long", @LONG
一间宽广的大殿，地上铺着大红毛毯，北首摆了八张大椅，应该是辈
分较高者之座倚，当掌门有要事公布，往往会集结众弟到太和殿，而一年
一度的派内比武大会，也是在此举行。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g6-1.c",
  "east" : "/open/gsword/room/g4-11.c",
]));

  set("objects", ([ /* sizeof() == 1 */
         "/daemon/class/swordsman/cutegirl" :1,
]));

  set("light_up", 1);

  setup();
}
