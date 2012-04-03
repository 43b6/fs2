// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","阅\武场");
  set ("long", @LONG
这里是一片极大的广场 . 你看到数千人打着赤膊 , 顶着烈
日 , 面对着大海辛勤的操练着 . 动作整齐一致 , 喝声响彻云
霄 . 据说就算处于枫林闹市 , 也能清楚的听到士兵们的呼喝声
 . 现在身临现场 , 更是让人闻之丧胆 . 北边是军营 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/gblade/navy/room/d1-4.c",
	"east" : "/open/gblade/navy/room/d1-7.c",
]));
	set("objects",([
	"/open/gblade/navy/npc/soldier":2,
	]));

  setup();
}
