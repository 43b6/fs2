//open/prayer/room/zhenche/25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡�Ķ��Ͻ�, ������������������. ���߽�һ��,
        ԭ�����ڽ����������ķ�������! �����ǽ��ý����ζ
        , �ѵ������������Ǹ�����֮����?

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"19",            
        "west":__DIR__"26",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //����
        "/open/prayer/npc/trainee4" : 1,                //����
                
]));
     
  setup();
}
