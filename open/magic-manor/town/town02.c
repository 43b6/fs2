inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "���ߵ�");
        set ("long", @LONG
�Ʒ�������Ψһ��һ����ߵ꣬���������Ǽ�����ʹ���������
�Ǿ�����������ĺ󷽻���һ�׽�������ķ��߰�������ǵ����
���֮����
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town08",
]));
        set("light_up", 1);
        setup();
}
