// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","���᷿");
	set("long", @LONG
�������й��������᷿��ס�Ķ���һЩ��Ϊ����ĵ��ӣ���
�����Ƕ������ᣬ��ʵ�����ڴ�ס�˺�һ��ʱ���ˣ��뵱Ȼ�����ǵĸ���
�ض���ǳ�������Ҷ����ǣ�û���൱��ʵ�������»���������֮
�ء�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"rin1",
]));
	set("objects",([
	COLD_NPC"trainee9":1,
	]));
	setup();
	replace_program(ROOM);
}
