///open/prayer/room/youkoun/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	�˴��������ų�Ա������������ڣ���������������
	�����أ���ȥ��������������ŵ����䳡����������
	�������ı���������վ�����߽׵ĸɲ�����������
	����!

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"2",		//����
        "south":__DIR__"10",		//���䳡
        "northeast":__DIR__"1",			
        "northwest":__DIR__"3",			
        ]) );

        set("light_up", 1);
   setup();
}
