//open/prayer/room/youkoun/19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡�Ķ��Ϸ�, һ�������ŵ�Ů�����������ʦ���
        ���ϵ�����. ����������ϰ�߹����������, ����������
        ������ "һ��Ҫʹ������" Ҳ����������..

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"16",            
        "west":__DIR__"20",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //����
        "/open/prayer/npc/trainee4" : 1,                //����
                
]));
     
  setup();
}
