//open/prayer/room/westarea/road5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
�������Գ�һ��Ľֵ�,��ͨ�˴�,��������.�����ǰ׻�������ڴ�.�ϱ����ǵ���
�����.�˴���һ�������!!�����ڶ�,�ò�����.LONG);

        	set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        	"north":"/open/prayer/room/westarea/road7",		//�ֵ�
	"south":"/open/prayer/room/westarea/road10",	//�ֵ�
	"west":"/open/prayer/room/westarea/road3",		//�ֵ�
 
        ]) );
          set("objects", ([ /* sizeof() == 1 */
          "/open/prayer/npc/vendor" : 1,
        ]) );
        
        set("no_fight", 0);
    setup();
}
