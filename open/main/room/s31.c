// Room: /open/main/room/s31.c

inherit ROOM;

void create()
{
	set("short","道路");
	set("long",
"这是一条青石板铺成的道路 , 似乎刚铺好不久似的 , 道路向
南北延伸 , 连接着中央驿站和大陆唯一的港口 -- 枫林港 . 你看到
络抑不绝的旅客和商队行走于路上 ,一片欣欣向荣 .

");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"s27",
	"south" : __DIR__"s38",
  "west" : __DIR__"s30",
  "east" : __DIR__"s32",
]) );

  set("outdoors", "/open/main" );

  setup();
}
