//open/prayer/room/tangi/tangi1-3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����Ŵ���");
        set("long",
"����������װ����˳���ׯ��֮�⣬�ر���һ��������ʿ����Ϣ�������Ĵ��ɼ�
���͵���ī������������Ʒζ�����ںϣ�������վ����������ŵ��󻤷���������һ
�����ţ����ǲ�֪����ͨ���δ�?\n");
        set("exits", ([ /* sizeof() == 2 */
        "east":"/open/prayer/room/tangi/tangi1",		//����
        "west":"/open/prayer/room/garden4",      
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/left" : 1,		//�󻤷�
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(dir=="west"&&present("hu-fa left",environment(me)))
return notify_fail("�󻤷������ȵ�:û������������,�����߽�һ��!\n");
        return ::valid_leave(me,dir);
}
