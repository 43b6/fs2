//open/prayer/room/zhenche/17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡����������������������������ͦ��. ԭ������
        Ϊ��������˯��ͷ��, ���Ա��ܽ�ͷ����! ������һ����
        ����, ����Ҳ������! ������ͨ�����ܹ��鷿������.

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"16",             
        "south":__DIR__"21",            //���䳡
        "west":__DIR__"18",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1" : 1,              //����
  "/open/prayer/npc/trainee4" : 1,              //����
                
]));
     
  setup();
}
