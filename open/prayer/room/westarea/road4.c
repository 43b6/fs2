//open/prayer/room/westarea/road4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG

	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ����
	��"������"�����䴦, ���滷ɽ, ��������, �Ǹ���
	�����ص�ս�Եص�.

LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road6",		//�ֵ�
	"south":__DIR__"road8",		//�ֵ�
	"west":__DIR__"road2",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/youkoun-woman" : 1,		
        ]) );
        
  setup();
}
