inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
���Ե�ɳ����ʣ�����һ�ֿ���Ϣ��ѹ�ȸС���ǰ��һ�����Ѷ�
�ö��ɵ����ӣ����ݶ��������׻����ϵ�ð�ź��̣��о���ʮ�ֵĹ�
�졣
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-06",
"enter":__DIR__"a-31",
]));
	setup();
}

 