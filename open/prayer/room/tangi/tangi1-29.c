//open/prayer/room/tangi/tangi1-29.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",@LONG
�˴������̷ֲ�֮һ������ŵ�����,�����Ͽɼ��������������͵��Ĵ�����. 
�ϱ��ǳ���.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-36",		//����
	"north":"/open/prayer/room/tangi/tangi1-24",		//����
       
        ]) );
     
  setup();
}
