//u/r/rence/room/tanshun/27.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡�����Ͻ�, �������������ڽ���������ĵ�. ��
        ���ǽ��ý����ζ������, �����Ѿ���������ļ��. ��
        ��ʥ����ϳ��书�����ô��������?

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"21",            
        "east":__DIR__"26",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //����
        "/open/prayer/npc/trainee3" : 1,                //����
                
]));
     
  setup();
}
