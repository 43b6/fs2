//open/prayer/room/tanshun/12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

        һ����칫��, ���Ժ��Եظ��ܵ�һ�ɽ���æµ������.
        �������������������ļ�, ׼���͸���������Ŀ. �����
        ����ֱ�︱�����鷿, �����������ȵķ���.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"11",            //��������
        "south":__DIR__"13",            //��������
        "west":__DIR__"14",             //����
        "east":__DIR__"10",             //��������
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee1" : 1,             //����
   "/open/prayer/npc/trainee3" : 1,             //����
                
]));
     
  setup();
}
