///open/prayer/room/kiyan/7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	�˴��ǿ����ų�Ա������������ڣ��������ǿ����ŵ�����(open 
	door)����ȥ��������ǿ����ŵ����䳡���������ǵ������ı���
	������վ�����ϸ߽׵ĸɲ����������ޱ���!

LONG );
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"4",		//����
        "south":__DIR__"1-door",		//����
        "east":__DIR__"6",			//������
        "west":__DIR__"8",			//������
        ]) );

        set("light_up", 1);
        create_door("south","ʥ�����ľ����", "north",DOOR_CLOSED);
   setup();
}
