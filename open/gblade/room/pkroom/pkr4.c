// pkr4.c by konn
inherit ROOM;

void create()
{
        set("short", "��һ�����");
        set("long", @LONG




LONG);
        set("exits", ([ /* sizeof == 3 */
            "north" : __DIR__"pkr1",
            "east"  : __DIR__"pkr5",
            "south" : __DIR__"pkr7",
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        setup();
}

