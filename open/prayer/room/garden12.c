//open/prayer/room/garden12.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    ͻȻ���������ζ������ԭ�����Ϸ���ȥ
	    ʥ�����̳�Ļ�԰���������ľ��������
	�ι�״�ģ����������ɶ����������ͷ��!!��
	���˴����Ȼ�����Ĵ�а�����������˵�ë
	�׶��е�����������........... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden16",		//��԰
        "south":"/open/prayer/room/garden8",		//��԰
        "east":"/open/prayer/room/garden11",		// "
        "west":"/open/prayer/room/garden13",			// "
        ]) );
        set("objects", ([ /* sizeof() == 1 */
        "/open/prayer/npc/lion" :1,		
        ]) );
   setup();
}
