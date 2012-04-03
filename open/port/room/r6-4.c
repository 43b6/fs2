// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","守卫队休息室");
  set ("long", @LONG
这里是守卫队队员休息的地方 . 小小的房间里摆着几张木制
的桌椅 , 两三个值勤完毕的守卫正在此泡茶 , 下棋 , 享受着难
得的清闲 .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r6-3",
]));
	set("objects",([
	"/open/port/npc/guard2":3,
	]));

  setup();
}
