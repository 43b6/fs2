//open/prayer/room/tanshun/26.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        һ���������, ����ӳ����������һ��Ƭ�����䳡!
        ���䳡�ϵĵ���һ��������ĥ���Լ�������, һ��ϣ��
        �ܹ���һ��߱���ϰ����Ǭ�������ʸ�!!

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"20",            //���䳡
        "south":__DIR__"2-door",        //���䳡
        "west":__DIR__"27",             //���䳡
        "east":__DIR__"25",             //���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee2" : 1,                //����
        "/open/prayer/npc/trainee1" : 1,                //����
                
]));
        create_door("south","ʥ����ƾ��ִ���", "north",DOOR_CLOSED);     
     
  setup();
}
