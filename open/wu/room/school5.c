// Room: /u/d/devils/school5.c

inherit ROOM;

void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
你看到两位武师在此拆招,武师甲喊到:看我的"毁天灭地无极神拳",
武师乙大喝一声:我用"天崩地裂无影神风脚"破你绝招!..........
正当你惊讶于世上竟有如此武功之时,一条大狼狗突然冲向武师,两位武
师吓得落荒而逃,只剩你愣在当场.......
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"school2",
  "east" : __DIR__"school6",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/trainee" : 2,
]));

  set("outdoors", "/open/wu");
  setup();
}
