//open/prayer/room/tanshun/21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡������, ���������������������ʥ����ڷ���
        ������. ����ϸһ��, ԭ�����и��书��ǿ��ʦ����ʱ��
        ��ȥ��. �����ǽ��ÿ�ĭ���, Ҳ�����������Ǽ�..

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
