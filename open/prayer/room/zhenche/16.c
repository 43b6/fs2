//open/prayer/room/zhenche/16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        ���������̷ֲ�֮һ"������"�����䳡, ���䳡���ܽ�ͷ
        ��������ָ����������Ŭ����ϰ. ����������ŵ�����,
        ����������Ƿֱ�ͨ���ܹ��븱�����İ칫��.

LONG);
        set("outdoors", "/open/prayer/room");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1-door",                //����
        "south":__DIR__"20",            //���䳡
        "east":__DIR__"15",             //����
        "west":__DIR__"17",             //����
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,               //�ܽ�ͷ
                
]));
        
          setup();
}
