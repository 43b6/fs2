inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "���ƾ�");
        set ("long", @LONG
�򵥵�һ��������������Ƹ��Ŷ��أ������ס��һλ���ص���
������������������ϵ��˶��������ֻ֪����ϲ���ղر����
����һ��򵥵ķ��ӣ�ȴ��֪�����ղصı��ﶼ����ȥ�ˡ�
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town28",
	]));

	set("objects", ([ /* sizeof() == 1 */
	"/open/sky/npc/seller" : 1,
	]));

        setup();
}