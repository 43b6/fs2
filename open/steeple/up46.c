inherit ROOM;
#include <ansi.h>
void create()
{
set("short","试炼塔四十六楼");
set("long",@LONG

异于往常的宁静，周遭也无任何打斗的痕迹，令你开始怀疑
这里是属于试炼塔的一部份吗？过没多久，一股极大的气流
突然缠住了你，看来，这一次你有危险了！！

LONG);
set("exits",([
"up":__DIR__"busy_room47",
"south":__DIR__"busy_room46",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot46":1,
]));
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<47)
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