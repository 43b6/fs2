//open/prayer/room/youkoun/7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

        �����������Ÿ������İ칫��. ������Ů������æ�ŵ���
        ���ĸ���������Ŀ. �����Ǹ��������鷿, ��������ͨ��
        ���䳡.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"6",             //��������
        "south":__DIR__"8",             //��������
        "west":__DIR__"9",              //����
        "east":__DIR__"5",              //��������
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //����
        "/open/prayer/npc/trainee3" : 1,                //����
                
]));
     
  setup();
}

