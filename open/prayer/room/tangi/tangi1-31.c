//open/prayer/room/tangi/tangi1-31.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",
"�˴������̷ֲ�֮һ������ŵ����䳡,���䳡�ϵĵ����������������ѧ--
����Ǭ�����Ļ�������.����������ŵĴ���,������������ŵĴ���(open door). \n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/tangi/tangi1-26",		//���䳡
	"south":"/open/prayer/room/tangi/tangi1-34",		//���䳡
	"east":"/open/prayer/room/tangi/tangi1-32",		//���䳡
        "west":"/open/prayer/room/tangi/tangi1-30",		//���䳡
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4.c" : 2,		//����
   		
]));
     set("light_up", 1);
     create_door("south","ʥ����ƾ��ִ���","north",DOOR_CLOSED);
  setup();
}
