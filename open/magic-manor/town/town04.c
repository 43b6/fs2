inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "һ����լ");
        set ("long", @LONG
�߽�������ӣ�����İ���ܼ򵥣����еļҾ㶼��ɨ��һ����
Ⱦ����������ǽ�Ϲ��������ֻ�����ϸһ��ī���̸�δ�ɵģ�����
���δ�õ�������Ʒ��
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town10",
]));
        set("light_up", 1);
        setup();
}
