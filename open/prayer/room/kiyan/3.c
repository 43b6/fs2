//open/prayer/room/kiyan/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�����Ŵ���");
        set("long",@LONG

	����������װ����˳���ׯ��֮�⣬�ر���һ��������ʿ����
	Ϣ�������Ĵ��ɼ����͵���ī������������Ʒζ�����ںϣ�����
	��վ�����ǿ����ŵ��һ�����

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"6",	//����
        "east":__DIR__"2",		//�鷿
        "west":__DIR__"4",		//����
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/right" : 1,		//�һ���
]));
  setup();
}

int valid_leave(object me, string dir)
{
        if(dir=="east"&&present("hu-fa right",environment(me)))
return notify_fail("�һ���΢Ц˵��:����鷿����ѽ!�úü���ѽ!!\n");
        return ::valid_leave(me,dir);
}
