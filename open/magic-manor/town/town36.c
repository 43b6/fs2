inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "����");
        set ("long", @LONG
һ���ƾɵ����ӣ��ݶ�Ҳ�Ѿ�����һ�����ˣ������򳣳��м�
�����ǵ���ؤ�Ὣ�⵱��ס������·���ĺ��������ǲ�ʩһЩʣ��ʣ
�����±���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town30",
	]));

	set("objects", ([ /* sizeof() == 1 */
	"/open/capital/npc/beggar" : 1,
	]));

        setup();
}