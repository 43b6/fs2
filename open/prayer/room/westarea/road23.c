//open/prayer/room/westarea/road23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������������ߵ�����·��. �������������, �ϱ�������
	����. �������ߵ�����ɽ��ǰҲ�и�����, �������ں�����
	����ȥ��...........
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road18",	//�ֵ�
	"south":__DIR__"road26",	//�ֵ�
	"east":__DIR__"road22",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
