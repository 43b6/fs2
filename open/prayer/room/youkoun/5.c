//open/prayer/room/youkoun/5.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�������鷿");
        set("long",@LONG

        �����������Ÿ��������鷿, �и�Ů�������ڴ�ɨ����.
        �������һ���ŵ���, ����������Ҳ�Ǹ�����ʫ��֮��.
        ����һֱ�߳�ȥ�������䳡.

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"6",         //��������
        "southwest":__DIR__"8",         //��������
        "west":__DIR__"7",              
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/trainee4" : 1,                //����
                
]));
     
  setup();
}
