//open/prayer/room/westarea/road5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �����ǰ׻�����
	��ڴ�. �ϱ����ǵ��������. �˴���һ�������!!�����ڶ�, 
	�ò�����.
LONG);

       	set("outdoors", "/open/prayer/room");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road7",		//�ֵ�
	"south":__DIR__"road10",	//�ֵ�
           "east":__DIR__"road3",
        ]) );
        set("objects",([ /* sizeof() ==  1*/
  "/open/prayer/npc/vendor" : 1,		
        ]) );
        setup();
}
