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
        "north"      : __DIR__"town10",
        "south"      : __DIR__"town22",
        "west"       : __DIR__"town15",
        "southwest"  : __DIR__"town37",
	]));

	set("objects", ([ /* sizeof() == 1 */
	__DIR__ "npc/man"	: 1,
	__DIR__ "npc/woman"	: 1,
	]));

        setup();
}
