//open/prayer/room/westarea/road19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西武林自成一格的街道, 四通八达, 处处繁华. 北边是往天权门
	, 南边是往开阳门. 东边则是"破邪洞窟". 传闻里面有许多的奇
	异怪兽, 至于如何的奇异, 那你要去问生还者才会知道了.
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
       	"north":__DIR__"road16",	//街道
	"south":__DIR__"road24",	//街道
	"west":__DIR__"road20",		//街道
	"east":"/open/prayer/room/hole/1",	//洞窟
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
