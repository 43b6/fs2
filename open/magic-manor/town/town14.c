inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�õ�");
        set ("long", @LONG
�Ʒ����е�һ���õ꣬�ṩ��Ϣ��ס�޵ĵط�����Զ����������
������һ����ů����Ϣ�ط��������õ꿴��������ʮƺ�󣬵���ȴ��
���ṩʮ�����λ��
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town08",
]));
        set("light_up", 1);
        setup();
}
