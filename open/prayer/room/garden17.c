//open/prayer/room/garden17.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    �����԰�Ĵ������������϶���ŨŨ��
	������������԰������һ��˵�����Ĺ�������
	��ʱ������Ұ��������������ʱ���ŵ�Ũ���
	Ѫ��ζ�����㲻��������

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/garden21",		//��԰
        "south":"/open/prayer/room/garden13",			// "
        "east":"/open/prayer/room/garden16",			// "
        ]) );
  set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/ditail-snake2" : 1,
        ]) );

   setup();
}
