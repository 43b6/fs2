//open/prayer/room/garden10.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    Ѫ��ɫ��Ũ��Ʈ���������й���ζ!!����
	����ʶ����ģ��......�ڲ�Զ�ĵط�ʱ������
	����ħ�������������������û�������̽��
	�������!! 

LONG);
        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden14",		//��԰
        "south":"/open/prayer/room/garden6",			// "
        "west":"/open/prayer/room/garden11",			// "
        ]) );
  set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/crab-ox" : 1,
        ]) );
   setup();
}
