#include <room.h>

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
		"out":__DIR__"water",
		"north":__DIR__"water4",
        ]) );
	set("light_up",1);
        setup();
}
