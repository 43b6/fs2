//open/prayer/room/tangi/tangi1-10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","ʯ��");
        set("long",
"������ڲ���ʯ�Σ���Ҫ���ǽ���һЩ���˽̹����ͽ����ȻҲ����һЩ�������Լ�
������ץ�������ɵļ�ϸ������������һλ�Ǵ���ԭ������ʿ����Ϊ���������Ա�
ץ������ ��\n");
        set("exits", ([ /* sizeof() == 1 */
        "north":"/open/prayer/room/tangi/tangi1-9",		//����
        ]) );
       set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/criminal" : 1,		//�˷�
]));

   setup();
}
