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
		"south":__DIR__"water4",
		"west":__DIR__"water6",
      ]));
	set("objects",([SNOW_NPC"sec_anm2":1]));
        setup();
}
