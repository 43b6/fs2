inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�㳡����");
        set ("long", @LONG
�㳡�������룬�����������ĵط������Ĺ㳡���ۼ��˲�
�������ڴ˻�����ֵľ�������С����������������Կ�������
�������졢�ݲ衢��������Ϸ�����֣������ľ���������ɷ�˽�����
Ů�ĵ��㣬Ҳ������ô�����еĹ������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "northeast"	: __DIR__"town16",
        "southeast"	: __DIR__"town22",
        "northwest"	: __DIR__"town15",
        "southwest"	: __DIR__"town21",
	]));

	set("objects", ([ /* sizeof() == 1 */
	__DIR__ "npc/kid01"	: 1,
	__DIR__ "npc/kid02"	: 1,
	__DIR__ "npc/oman"	: 1,
	]));

        setup();
}