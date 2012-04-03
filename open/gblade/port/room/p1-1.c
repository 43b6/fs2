// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","枫林港北门");
  set ("long", @LONG
这是一栋刚建好不久的城门 , 几个守卫在此看着来来往往的
旅客 , 由于商业的繁荣 , 枫林港吸引了来自大陆各地的商人到
此交易 , 相对的 , 这里的犯罪率也是全国最高 , 你最好先看紧
自己的荷包 , 以免钱丢的不明不白 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"north": "/open/main/room/s38",
  "south" : __DIR__"p1-2.c",
]));
	set("objects",([
	"/open/gblade/port/npc/guard":2,
	]));

  setup();
}
