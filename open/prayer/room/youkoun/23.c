//open/prayer/room/youkoun/23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܵ�");
        set("long",@LONG

        ���ܵ����Ӱ����, �ڲ�����ʱ������ֵ�����, ������
        ���������˵Ľ���!!������??�����Ų��ǽ�ֹ���Խ�����
        ??��ô�������˵Ľ���??

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"24",    
        "south":__DIR__"22",    
 
        ]) );
        set("no_fight", 0);
                
  setup();
}
