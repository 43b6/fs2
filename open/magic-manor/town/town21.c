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
        "north"      : __DIR__"town15",
        "south"      : __DIR__"town27",
        "east"       : __DIR__"town22",
        "northeast"  : __DIR__"town37",
	]));

	set("objects", ([ /* sizeof() == 1 */
	__DIR__ "npc/kid01"	: 1,
	__DIR__ "npc/woman"	: 1,
	]));

        setup();
}
