#include <ansi.h>
inherit ROOM;
void create()
{
        set("short", "�ٲ�");
	set("long",@LONG
һ���ٲ������ϸ�����£�������һ������������ٲ����γ���
һ���ʺ磬ˮ���ں��в������Ļ�������ɽ�ȼ�Ļ��죬�������ޱ
�ڵ�һ����ۣ�εΪ׳�ۡ�
LONG
	);
set("exits", ([ /* sizeof() == 2 */ 
"south" : "/open/tendo/room/tower/water.c",
"north" : "/open/tendo/room/tower/cave.c", 
]));
        set("outdoors",1);
	setup();
}



