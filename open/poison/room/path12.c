// Room: /open/poison/room/path12
inherit ROOM;

void create ()
{
  set ("short", "石洞");
  set ("long", @LONG
从这里可听到由东方传来的阵阵哀嚎声，阵阵哀嚎惨叫
声令人浑身不舒服，想来此地便是魔教囚监刑犯之处，此地
竟是如此隐密，其内不知有何重要囚犯。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"path11",
  "eastdown" : __DIR__"path13",
]));

  setup();
}
