inherit ROOM;
#include <ansi.h>
void create()
{
        set("short", "��ͤ");
        set("long", @LONG
��ͤ�����ڳ����ε�ˮ���ϣ����ܹ������ϸ����ߣ�ͤ�����ٿ�
һ�����ͻ����ı������������ǰ�ʯ̨�ף����˵��ƾ�����ֻ������
ͤ������Ը��ܵ����ߵ�Ʒζ�뽳�ġ�
LONG
);
set("exits", ([ /* sizeof() == 2 */ 
"north" : "/open/tendo/room/tower/water2.c", 
"west" : "/open/tendo/room/tower/tomb.c",
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
      set("outdoors",1);
	setup();

}


