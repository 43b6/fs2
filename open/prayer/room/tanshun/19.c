//open/prayer/room/tanshun/19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡�Ķ���, ����һ���еı���, ����������������
        ѡ�������������ϰ. ���������ϰ���, ���񶼻�û����
        ��ϲ����, �������Խ�..

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"15",            //���䳡
        "south":__DIR__"25",            //���䳡
        "west":__DIR__"20",             //���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,              //����
  "/open/prayer/npc/trainee3" : 1,              //����
                
]));
     
  setup();
}
