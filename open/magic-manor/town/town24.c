inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "������");
        set ("long", @LONG
λ�����Ʒ���Ķ�����Ҫ��·�ϵ�С�ţ���Ҫ������򣬴�����
�Ǿ������ɵģ�����������ʯͷ�Ĳ����̳ɣ�������ǧ����������
���������Ȼ����˼���ޱȡ�
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"      : __DIR__"town18",
        "south"      : __DIR__"town30",
        "east"       : __DIR__"town39",
]));
        setup();
}
