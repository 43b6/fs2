// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","魔界村外");
        set ("long","
这里是魔界村北村口之外，往北走就可以直达天邪峰了，从这里可以
看到不远处积雪的天邪峰了，长年不融。由此可见天邪峰气温之低，
光站在这里就感受了有阵阵的冷意不断传来。往东为冷泉湖。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north"  : __DIR__"room1",
                "east"   :  __DIR__"water",
            "south"  : __DIR__"c",
      ]));

       

        setup();
}
