#include <room.h>

 inherit ROOM;

 void create()
{

        set("short", "小径");
        set("long", @LONG
这是一条满布青苔的小路，由地上的痕迹看来，这似乎鲜少有人经过
，两旁的巨石足足有十尺高，看的你不禁连连咋舌，小径往西北方向爬升
，通往仙剑后山及思过崖。
 
LONG
        );
	set("outdoors" ,"/open/gsword/room");

        set("exits", ([
		"westup":__DIR__"g6-2",
		"east":__DIR__"g4-15",
        ]) );
        
setup();

}
