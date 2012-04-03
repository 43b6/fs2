// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
	set ("short", "道路");
	set( "build", 21 );
  set ("long", @LONG
走到这里,你已渐渐远离人迹,走在宽广的蜀州盆地上,却让
你有一种苍茫的感觉,道路在此通向北方或南方。南方是蜀中城
而西北方则是道家的发源地昆仑。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
"north" : "/open/tendo/m2",
"south" : "/open/gsword/room/froad3",
]));

  setup();
}
