inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "���Ϲ㳡");
        set ("long", @LONG
�Ʒ����еĹ㳡���Ͻǣ������Ʒ��������о�������Ϣ����ĳ�
����ż����Щ��������Ҳ��������ط����䣬���������С����ʱ��
����㳡�г�Ⱥ����Ϸ���棬�ò����֡��Ϸ������������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"      : __DIR__"town16",
        "south"      : __DIR__"town28",
        "west"       : __DIR__"town21",
        "northwest"  : __DIR__"town37",
	]));

	set("objects", ([ /* sizeof() == 1 */
	__DIR__ "npc/man"	: 1,
	__DIR__ "npc/kid02"	: 1,
	__DIR__ "npc/oman"	: 1,
	]));

        setup();
}
