// pkr6.c by konn
inherit ROOM;

void create()
{
        set("short","��һ�����");
        set("long", @LONG



LONG);
        set("exits", ([ /* sizeof == 3 */
            "north" : __DIR__"pkr3",
            "west"  : __DIR__"pkr5",
            "south" : __DIR__"pkr9",
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        setup();
}

