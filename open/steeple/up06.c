inherit ROOM;
#include <ansi.h>
void create()
{
set("short","试炼塔七楼");
set("long",@LONG

看来这里的强度似乎比以往来的强许多，可是这种程度的敌手，
实在是让你提不太起劲来对付，看来这里也能轻松通过。

LONG);
set("exits",([
"up":__DIR__"busy_room07",
"south":__DIR__"busy_room06",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot07":1,
]));
setup();
}

int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<=7)
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