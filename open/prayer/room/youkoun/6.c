//open/prayer/room/youkoun/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

        �ڰ칫���ı���ɢ����һ�ص��ļ�, ������Ů������æ��
        ��������������. �����ǽ��ŵ�����, ��������������
        ����, �ⲻ������һ������.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"7",             //��������
        "southeast":__DIR__"5",         
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //����
        "/open/prayer/npc/trainee3" : 1,                //����
                
]));
     
  setup();
}

