//open/prayer/room/garden5.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    �����԰�Ĵ�������������ŨŨ������
	��������԰������һ��˵�����Ĺ������գ�ʱ
	ʱ������Ұ��������������ʱ���ŵ�Ũ���Ѫ
	��ζ�������㲻������������!!������ֻ����
	ѽ!!

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/garden9",		//��԰
        "east":"/open/prayer/room/garden4",			// "
        ]) );
  set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/bird" : 1,
        ]) );
   setup();
}
