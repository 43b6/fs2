#include <room.h>

inherit ROOM;
void do_west();
void create()
{
            set("short","ѩȪ");
      set("long",@LONG
������ѩ��ɽ��ɽ�ţ�����ͨ��ѩȪ���ഫѩȪ�е�ѩȪʥˮ
�������ħ����������ѩȪ���д�˵�е��ػ�ʥ�ް����ţ���
��ʥˮ��λ�õ������ǣ�Ҳ��һ�����⣬����Ӣ�ۺ��ܣ�����
ѩȪ���޹�������
LONG);
        set("exits", ([
		"east":__DIR__"room3",
		"west":__DIR__"water",
        ]) );
	set("light_up",1);
        setup();
}
