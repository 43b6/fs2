//open/prayer/room/youkoun/22.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܵ�");
        set("long",@LONG

        ԭ��������һ���ܵ�, �ܵ�����һ�ɺ���ֵĳ�ζֱ�˱�
        ����, �ܵ��ڵƹ�谵�쳣, ʵ�ڲ�����һ����ݻ���֮
        ��Ľ���Ӧ�е��龰!!�ܵ��й�Ӱ����, �㻹�ǲ�Ҫð��
        Σ��ǿ�н���ȽϺ�!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"23",    
        "east":__DIR__"3",      
 
        ]) );
        set("no_fight", 0);
                
  setup();
}
