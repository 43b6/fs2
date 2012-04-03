//room:/u/e/eva/village/room/room-38.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","魔界村民房");
    set("long","
    一间用砖瓦砌成的普通民房, 屋内放置一些简单的家具摆\设, 是
魔界村中的一间民房, 屋内竟有一个熔炉, 四周摆\满了工具, 这里住
户一定是一名铸剑师!\n\n");
    set("objects",([
        V_NPC"lee" : 1,
        ]));
    set("exits",([
        "east" : __DIR__"room-03",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
