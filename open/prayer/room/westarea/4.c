//open/prayer/room/westarea/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��ϼ��");
        set("long",@LONG

	����ɽ�ϵ�һ��Сɽ��, ��ǰ������һЩ���ӵ�é
	��, ����Щ�������Ĵ��ҷ�����!!ϼ������, ��һ
	��������Դ֮��Ϣ!!��ǰ��λ���������˵ĵڶ�λ
	ͽ��, �����ڻ��������еı���, �������ı޷���
	���ظ�����!!

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "west":__DIR__"2",	
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/high-man2" : 1,		
        ]));
  setup();
}
