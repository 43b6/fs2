// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","魔界村外");
        set ("long","这里是已经靠近妖魔古城了，在这近距离的情况下，你发现这栋古
堡相当庞大，上空不断闪着魔电，外表阴阴蓝蓝的，乱诡异的。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east"  : __DIR__"b",
            "south"  : __DIR__"d",
      ]));

       

        setup();
}
