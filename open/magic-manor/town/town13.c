inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "������");
        set ("long", @LONG
λ�����Ʒ����������Ҫ��·�ϵ�С�ţ���Ҫ������򣬴�����
�Ǿ������ɵģ�����������ʯͷ�Ĳ����̳ɣ�������ǧ����������
���������Ȼ����˼�̡�
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town07",
        "south"  : __DIR__"town19",
        "west"   : __DIR__"town38",
]));
        setup();
}
