#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "山庄大门");
	set ("long", @LONG
庄严宏伟的大门，正竖立在你的眼前，大门的守卫并非一般的平
常人，竟然是两只奇型怪状的兽人，若非是特别允许进入山庄的人，
大门的守卫是会将你拦下来的。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor40",
	"south"	: __DIR__"manor50",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
