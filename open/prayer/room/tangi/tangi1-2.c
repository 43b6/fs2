//open/prayer/room/tangi/tangi1-2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����Ŵ���");
        set("long",
"����������װ����˳���ׯ��֮�⣬�ر���һ��������ʿ����Ϣ�������Ĵ��ɼ�
���͵���ī������������Ʒζ�����ںϣ�������վ����������ŵ��һ������һ�����
��������ŵĵ���!\n");
        set("exits", ([ /* sizeof() == 2 */
        "east":"/open/prayer/room/tangi/tangi1-4",		//����
        "west":"/open/prayer/room/tangi/tangi1",			//����
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/right2" : 1,		//�һ���
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(dir=="up"&&present("hu-fa right",environment(me)))
return notify_fail("�һ���˫��ֱ������ ,˵��:�������,Ҫ�����ܹ�ͬ�����!\n");
        return ::valid_leave(me,dir);
}
