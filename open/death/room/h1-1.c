// Room: /open/death/room/h1-1
inherit ROOM;

void create ()
{
  set ("short", "第一殿--正厅");
  set ("long", @LONG
这里是第一殿，由秦广明王管辖，居中而坐的便是秦广明王，大厅
右边墙上写着‘若要来离此关，需要急早行善’，左边墙上写着‘轮回
分六道，转世变三生’，你看了不禁恐慌起来..........
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"h1-6",
]));
  set("light_up", 1);

  setup();
}
