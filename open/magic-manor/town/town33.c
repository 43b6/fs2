inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "蔬菜摊");
        set ("long", @LONG
菜摊小贩正叫卖着各类的新鲜蔬菜，只见蔬菜色泽饱满，青脆爽
口，价钱也合理公道，吸引了不少镇民在挑选购买。而这也是镇上的
居民赖以为生的一家蔬菜摊。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town27",
	]));

        setup();
}