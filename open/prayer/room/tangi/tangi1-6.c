//open/prayer/room/tangi/tangi1-6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����ŵ���");
        set("long","�˴������̷ֲ�֮һ������ŵ��ε��ڲ�.�����ǵ��εĳ���(open door). \n");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-5",		//ʯ�η�
        "south":"/open/prayer/room/tangi/tangi1-7",		//ʯ�η�
        "east":"/open/prayer/room/tangi/tangi1-9",		//����
        "west":"/open/prayer/room/tangi/tangi1-4",		//������
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/picket" : 1,		//����Ѳ��
]));
	create_door("west", "��������", "east", DOOR_CLOSED);
  setup();
}
