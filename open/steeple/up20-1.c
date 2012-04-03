inherit ROOM;
#include <ansi.h>
string moveout();
void create()
{
set("short","试炼塔中继站");
set("long",@LONG

你可以看到许多挑战者正在此休息、聊天，每个人的脸上都看不出来刚刚
打打杀杀的疲惫感，反倒是露出了十分轻松的笑容，看来能来到这里的人
都已经有了一些最基本的功力了。

在房间的正中央有个透明的玻璃柱状物(glass pillar)。
LONG);
set("exits",([
"up":__DIR__"busy_room21",
]));
set("no_die_room",1);
set("item_desc",([
"glass pillar":(:moveout:),
"pillar":(:moveout:),
]));
set("no_fight",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<21)
{
tell_object(me,HIR"系统：你的晶片资料不足以通往楼上。\n"NOR);
return 0;
}
{
message_vision(HIW"系统：读取"+me->query("name")+"□晶片，通过。\n"NOR,me);
return 1;
}
}
}

string moveout()
{
object me;
me=this_player();
tell_object(me,HIW"
这是一个玻璃柱状的空柱，旁边有一些按钮(button)，你可以按下去。\n"NOR);
return "\n";
}

void init()
{
add_action("do_push","push");
}

int do_push(string arg)
{
object me=this_player();
if(!arg)
return 0;
if(arg!="button")
{
tell_object(me,"你伸长ㄌ手，却不找不到要按下的东西。\n");
return 1;
}
else
{
message_vision(HIW"$N缓缓走进了玻璃柱状内。\n"NOR,me);
me->move(__DIR__"moveroom");
return 1;
}
}