
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","七色回路");
        set ("long","一步踏入此地, 立觉阴冷刺骨, 此处乃是妖魔古堡中最阴最寒之地. 尽管
两边的墙壁上挂着两列烛台, 却不透一丝丝暖意, 冷光落壁, 邪氲雰雰, 
魔气呼啸, 掠影幢幢, 你顿时发现听觉与视觉已经不能作出正确的判断. 
突来阵阵杀气掀起了紫黑色的火线, 血腥的战斗将随时发生. 
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east"  : __DIR__"room90",
            "west"  : __DIR__"room88",
      ]));
        setup();
}
