#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "高山森林");
        set("long", @LONG
这是一片无尽的树海，在浓密的树叶遮挡下，只有少数的光线能从隙缝中
透出，树林中偶有飞禽走兽穿梭，高山的低温加上缺乏阳光的温暖，使你
感到一阵阵的寒意涌上心头。\n
LONG
        );

        set("exits", ([
"east":__DIR__"forest",
                "north":"/u/b/bigcat/room/forest3"       
        ]) );
setup();

}
