inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "���ߵ�");
        set ("long", @LONG
��ʽ�����ĵ��߳����ڵ��У��ڵ��л��г����������Ķ�����
����ƽ�����ټ��ĵ��ģ�������۽�󿪡��˼��Ҳ���Ʒ����е���
�ӻ���������ȫ�ġ�
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town09",
]));
        set("light_up", 1);
        setup();
}
