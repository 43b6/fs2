//open/prayer/room/zhenche/21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡������, ����������������ü����ȥ! ԭ������
        ԭ����һ�Է���, ����Ϊ��Ľʥ����书����, �����Э
        ������������ϰ��.

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"17",            //���䳡
        "south":__DIR__"27",            //���䳡
        "east":__DIR__"20",             //���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,              //����
  "/open/prayer/npc/trainee3" : 1,              //����
                
]));
     
  setup();
}
