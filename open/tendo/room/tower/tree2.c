inherit ROOM;
#include <ansi.h>
void create()
{
set("short", "����");
set("long", @LONG
���ڴ˴������ߴ�ï�ܣ����������ⶼ�ڸ�ס�ˣ��ƺ����˾���
�������������˵ض������˼�������ظУ�������ľ�����ڶ����ƺ�
���ڽ��˲�Ҫ�ټ���ǰ����
LONG
);
set("exits",([ /* sizeof() == 2*/
"down" : __DIR__"tree1.c",
"up" : __DIR__"tree3.c", 
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
set("outdoors",1);
setup();
}


