// pkr7.c by konn
inherit ROOM;

void create()
{
        set("short", "��һ�����");
	set( "build", 43 );
        set("long", @LONG



LONG);
        set("exits", ([ /* sizeof == 2 */
            "north" : __DIR__"pkr4",
            "east"  : __DIR__"pkr8",
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        setup();
}

