#include <room.h>

 inherit ROOM;

 void create()
{

        set("short", "小径");
        set("long", @LONG
这是一条满布青苔的小路，由地上的痕迹看来，这似乎鲜少有人经过
，两旁的巨石足足有十尺高，看的你不禁连连咋舌，到了小径尽头，发现
一道石门在你面前，不知要如何开启它。
 
LONG
        );

        set("exits", ([
        "southeast":__DIR__"h-2.c",
        ]) );
	set("outdoors" ,"/open/gsword/room");
        
setup();

}

void init()
{
    add_action("do_enter","enter");
}

int do_enter(string str)
{
   object me = this_player();
   if( me->query("family/family_name")=="仙剑派" && 
me->query_skill("shasword",1)==100 && me->query_skill("sha-steps",1)==100 && me->query("get_sha_sp",1))
   me->move("/open/gsword/room/h-1.c");
   return 1;
}   
