#include <room.h>
#include "/open/open.h"
inherit ROOM;
void do_west();
void create()
{
          set("short","ѩȪ����");
        set("long",@LONG
������ѩȪ���ڣ������ǳ����ʯ�ڣ���������������ˮ��
��ʥ�޵Ŀ��������˵ʥˮ���ڶ��ڣ�����ʥ�ޱ���������
�������¡�
LONG);
        set("exits", ([
		"south":__DIR__"water3",
		"north":__DIR__"water5",
        ]) );
	set("objects",([
	SNOW_NPC"sec_anm":1,
	]));
        setup();
}
