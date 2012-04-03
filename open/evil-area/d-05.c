inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",YEL"森林"NOR);
        set("long",@LONG
四周已经被数木呈凹字形给阻隔住了, 除了你来时的路以外, 在
你的正前方, 站立着一个木像，木像由于受到风、雨水的侵袭，已经
变的有点斑黄老旧，树林中，偶尔会传来阵阵的吼叫声，看来这里似
乎有着不友善的动物...
LONG);
        set("item_desc",([
"木像":"你仔细的注视着木像, 发觉到雕像似乎缺少着一的部分...\n",
]));
        set("exits",([
"south":__DIR__"d-04",
]));
        set("objects",([
__DIR__"npc/wood-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        set("wood-area",1);
        setup();
}

void init()
{
add_action("do_search","search");
}

int do_search(string arg)
{
object me=this_player();
        if(!arg || arg!="木像")
                return 0;
        tell_object(me,"
你发现木像缺失了一只左手。\n");
        me->set_temp("evil/king/statue_search_wood",1);
        return 1;
}

