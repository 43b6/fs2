// pkr9.c by konn
inherit ROOM;

void create()
{
        set("short","��һ�����");
	set( "build", 22 );
        set("long", @LONG



LONG);
        set("exits", ([ /* sizeof == 2 */
            "north" : __DIR__"pkr6",
            "west"  : __DIR__"pkr8",
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        setup();
}

