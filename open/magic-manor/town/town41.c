inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "ƽԭС��");
        set ("long", @LONG
������ã������ߵ�һ����������·�ˣ�ǰ����Զ���ƺ�������
�̵����ӣ����Կ����������ǵķ���������ǰ����
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town38",
        "west"	: __DIR__"town40",
	]));

        setup();
}
