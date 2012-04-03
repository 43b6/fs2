#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"幽冥道"NOR"岩壁");
        set("long",@LONG
周遭都被类似岩壁的东西给封住了, 你似乎
找不到路可以继续前进...
LONG);
        set("exits",([
        "south":__DIR__"g-r11",
        ]));
        set("no_transmit",1);
        setup();
}

void init()
{
add_action("do_search","search");
}

int do_search()
{
object me=this_player();
tell_object(me,"你突然发现了地上有一个地道!!\n");
set("exits/jump",__DIR__"g-s01");
return 1;
}

int valid_leave(object me,string dir)
{
if(dir=="jump")
message_vision(HIY"$N猛然跳下了地道!!\n"NOR,me);
delete("exits/jump");
return 1;
}