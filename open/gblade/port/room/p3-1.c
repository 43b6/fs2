// Room: /open/gblade/port/room/p3-1.c
inherit ROOM;

void create ()
{
  set ("short", "中央大道");
  set ("long", @LONG
宽广的石板路 , 崭新的建筑 , 繁荣的街景 , 这里真是个
希望之都啊 . 道路往南衔接港口 , 路上多的是来自各大陆的
人 , 有些人鼻子高高的 , 头发是金黄色的 , 真像猴子 , 也
有些来自冥魔岛的人 , 你最好少惹他们 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"p3-2.c",
  "north" : __DIR__"p1-3",
]));
	set("objects",([
	"/open/gblade/port/npc/traveller":1,
	]));

  setup();
}
