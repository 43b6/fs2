inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "有情天");
        set ("long", @LONG
登上有情天，有一尊石像站立在最高点，你走近一看，竟然是一
尊女子石像，冷冷的空气中伴随着的是一种孤独的感觉，有情的天地
之中，独有这样的痴情，竟化成无情的等待，时间的流逝，岁月的刻
画，美丽的女子石像也禁不住这样无情的摧残。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "down"    : __DIR__"mon40",
]));
        set("objects",([
        __DIR__ "obj/statue.c":1,
]));
        setup();
}

void init()
{
        add_action("turn_statue","turn");
}
int turn_statue(string arg)
{
        object me = this_player();
        object room = this_object();
        object soul = present("die soul",room);
        
        if(me->query_temp("icestorm/ice_spell")==4)
        {
        if(!arg || arg != "statue")
                return notify_fail("你想转动什么？\n");
                message_vision("
$N"HIR"用尽全身的力气，将雕像给硬生生的转了一圈。"HIY"\n
忽然从地面传来「隆隆”几声，竟出现了一个直径三尺多的大洞。\n
"NOR,me);
                message_vision(HIC"蝶魂忽然说道：嗯...接下来$N就只能靠自己了，奴家该走了...\n"NOR,me);
                room->add("exits/enter","/open/mon/hole");
                me->set_temp("icestorm/ice_spell",5);
                call_out("del_exit",30,me);
                destruct(soul);
                return 1;
        }
}
int valid_leave(object me, string dir)
{
        object guard;
        object ob = this_object();

        if(dir == "enter" && !me->query_temp("icestorm/ice_spell")==5)
                return notify_fail("蝶魂将你拦下，并说道：您并非有能力帮助奴家之人，请恕奴家无礼...\n");
                return ::valid_leave(me,dir);
}
int del_exit(object me)
{
        object ob = this_object();
        
        tell_room(me,HIR"忽然「口匡！”的一声，洞口又关了起来...\n"NOR);
        ob->delete("exits/enter");
}
