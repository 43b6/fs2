//open/prayer/room/westarea/road41.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ������ͨ��Ʈ����
	��֮ĩ��"��ȸ��". 
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 1 */
        	"north":__DIR__"road39",		//�ֵ�

        ]) );
        set("no_fight", 0);
        
  setup();
}
