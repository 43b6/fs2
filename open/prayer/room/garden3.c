//open/prayer/room/garden3.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    �˴���ʥ�����̳�Ļ�԰��Ҳ���ռ�����
	Ұ�޵ĵط�����Ȼ������û�������ֹ���ڽ�
	���˵أ�����Ϊ�������������ȫ��İ���ĵ�
	�����ǲ�Ҫ�Ҵ��ĺ�ѽ!!��ǰ����ֻ��������
	����צ������������!!
 
LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden7",		//��԰
        "south":"/open/prayer/room/garden1",		//  "
        "east":"/open/prayer/room/garden2",		// "
        "west":"/open/prayer/room/garden4",		// "
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/crab-ox" : 1,		
]));
   create_door("south","ľ��դ��","north",DOOR_CLOSED);
   setup();
}
