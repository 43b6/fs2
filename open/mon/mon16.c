inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ʯ��");
        set ("long", @LONG
�������������������ʯ��������ʯ�£������Բ�ľ���Կݻ�
ϡ�٣������е�ˮ��Ҳ������Ũ������ķ缲���Ĵ����������ϢҲ
һ��һ�ε����������ڣ�����������ǰ����·���ж�Զ��
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "westup"     : __DIR__"mon17",
        "eastdown"   : __DIR__"mon14",
]));
        setup();
}

