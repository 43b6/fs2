#include <room.h>

inherit ROOM;

void create()
{
	set("short","����");
          set("long",@LONG
������һ�����ң�һƬ������ģ������������
 
 
LONG);
        set("exits", ([
		"out":__DIR__"room3",
        ]) );
	set("light_up",1);
	set("objects",([
	"/open/snow/obj/snow_token":1,]));
        setup();
}
