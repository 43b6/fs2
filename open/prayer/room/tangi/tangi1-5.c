//open/prayer/room/tangi/tangi1-5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","ʯ��");
        set("long",
"�˴������̷ֲ�֮һ��������ڲ���ʯ��. �Ĵ�Ѫ���߰�,һ����֮ǰ���������˷���
����������.....\n");
        set("exits", ([ /* sizeof() == 1 */
        "south":"/open/prayer/room/tangi/tangi1-6",		//����
        ]) );

   setup();
}
