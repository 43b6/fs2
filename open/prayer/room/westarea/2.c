//open/prayer/room/westarea/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��ϼ��");
        set("long",@LONG

	����ɽ�ϵ�һ��Сɽ��, ��ǰ������һЩ���ӵ�é
	��, ����Щ�������Ĵ��ҷ�����!!ϼ������, ��һ
	��������Դ֮��Ϣ!!����ֱ���һλ����������,
	��������һλ����Ц�ݵ�����!!

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"5",	
        "south":__DIR__"1",	
        "east":__DIR__"4",	
        "west":__DIR__"3",	
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
//        set("objects",([ /* sizeof() == 1 */
//  "/open/prayer/npc/high-man" : 1,		
//]));
  setup();
}
