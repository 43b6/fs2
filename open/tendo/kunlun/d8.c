//七星阵
// by airke

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "森林");
	set("long", @LONG
这附近都是高耸入云的树木，偶而会有几只小鹿打从这儿走过。眺望
远方似乎有座高塔矗立在那，上面覆满了白色的积雪，已看不出原来建筑
的色彩为何。前方有条道路，应该是通往高塔的。

LONG
	);
	
	set("exits", ([ /* sizeof() == 3 */
"north":__DIR__"g1.c",
        "pass" : __DIR__"c1",
]));
	set("outdoors", "1");

	setup();
}


