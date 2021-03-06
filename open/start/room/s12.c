// Room: /open/start/room/s12.c

#include <../start.h>

inherit ROOM;

void create ()
{
	set ("short", "房舍");
	set ("long", @LONG
这里是凌云村村长的住屋，由于不想让外地来的人干扰到
村人们的生活，所以要借宿只能在这儿。
    西面那间房舍就是专门让人借宿用的，如果你想借宿暂时
休息一下，你可以问问村长。
    另外村长也兼作小贩的生意。

LONG );

	set("exits", ([ /* sizeof() == 2 */
	"west" : __DIR__"s13",
	"south" : __DIR__"s11",
	]));

	set("objects", ([ /* sizeof() == 1 */
	S_NPC"sheik" : 1,
   "/open/start/npc/test" : 1,
	]));

	set("light_up", 1);

	setup();
}

int valid_leave(object who, string dir)
{
	if( dir=="west" && !who->query_temp("sleep") )
		return notify_fail("你还没问过村长呢！\n");
	return ::valid_leave(who, dir);
}
