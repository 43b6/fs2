inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����㳡");
        set ("long", @LONG
�Ʒ����еĹ㳡�����ǣ������Ʒ��������о�������Ϣ����ĳ�
����ż����Щ��������Ҳ��������ط����䣬���������С����ʱ��
����㳡�г�Ⱥ����Ϸ���棬�ò����֡��������ű������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"      : __DIR__"town09",
        "south"      : __DIR__"town21",
        "east"       : __DIR__"town16",
        "southeast"  : __DIR__"town37",
	]));

	set("objects", ([ /* sizeof() == 1 */
	__DIR__ "npc/oman"	: 1,
	__DIR__ "npc/woman"	: 1,
	]));

        setup();
}
