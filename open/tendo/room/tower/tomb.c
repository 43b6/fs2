inherit ROOM;
#include <ansi.h>
void create()
{
	set("short", "�ὣͤ");
	set("long", @LONG
����������һ��ɽ������ɽ����ͤ�ӣ�ͤ��ǰ����һ�����ɶ�ߵ�
ʯ������ͤ����Զ���������಻���Ĵ�ɽ��ʹ�㲻���е�����֮��һ��
Ӣ���黳��Ȼ�������ὣͤ��˵ÿ������ҹ��Ұ�紵���������һ��
�����صĿ�������
LONG
	);
	
                          
	set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/tendo/room/tower/water",
  "south" : "/open/tendo/room/tower/tree3",
  "up" : "/open/tendo/room/tower/make1",
]));
	set("no_clean_up", 0);
        set("outdoors",1);
	setup();
}


