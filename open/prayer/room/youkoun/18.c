//open/prayer/room/youkoun/18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡������, ������Ů����������������, ׼����ʱ
        �³�ʾ����һ�εĶ���. ��������Ӧ��Ҳ�����Ŷ�! ����
        ���������������н���һ��..

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"11",            //���䳡
        "south":__DIR__"21",            //���䳡
        "east":__DIR__"17",             //���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee4" : 1,                //����
        "/open/prayer/npc/trainee4" : 1,                //����
                
]));
     
  setup();
}
