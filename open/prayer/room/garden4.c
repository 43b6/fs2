//open/prayer/room/garden4.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    ��֪������������Ũ��ֻ������������
	���ܲ�ʱ����Ұ�޵Ľ�����Զ�����Կ���һ��
	���񣬲�����ΪŨ��̫���ˣ����ܹ�����ط�
	�����������Ŀ!! 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden8",		//��԰
        "east":"/open/prayer/room/garden3",		// "
        "west":"/open/prayer/room/garden5",		// "
        ]) );
   setup();
}
