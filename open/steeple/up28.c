inherit ROOM;
#include <ansi.h>
void create()
{
set("short","试炼塔二十八楼");
set("long",@LONG

机器运转的声音隆隆作响，每一次转动的声响都让你身心不自主的
鼓动起来，看来这里的强度已经不再是一般人所能轻易通过了，没
有一定的强度以上，或许只能在这附近徘徊不进吧。

LONG);
set("exits",([
"up":__DIR__"busy_room29",
"south":__DIR__"busy_room28",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot28":1,
]));
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<29)
{
tell_object(me,HIR"系统：你的晶片资料不足以通往楼上。\n"NOR);
return 0;
}
{
message_vision(HIW"系统：读取"+me->query("name")+"□晶片，通过。\n"NOR,me);
return 1;
}
}
if(dir=="south")
return 1;
}