///open/prayer/room/tanchun/8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	��������Ȩ�ŵ���������������������, ����Դ�ľ����(open 
	 door)��������ȥ������Ȩ�ŵ����䳡���������ǵ������ı�����
	����վ������ͷ�����ϵĸɲ����������ޱ���! 

LONG );
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"5",		//������
        "south":__DIR__"1-door",	//����
        "east":__DIR__"7",		//������
        "west":__DIR__"9",		//������
        ]) );

        set("light_up", 1);
        create_door("south","ʥ�����ľ����", "north",DOOR_CLOSED);
   setup();
}
