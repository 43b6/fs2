inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ʯ��");
        set ("long", @LONG
·һ�ν�һ�Σ������Ծ���������ʯ����ɫ���ɣ������Բ�ľ��
�Կݻ�ϡ�٣������е�ˮ��Ҳ������Ũ������ķ缲���Ĵ��������
��ϢҲһ��һ�ε����������ڣ�����������ǰ����·���ж�Զ��
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "northup"    : __DIR__"mon19",
        "southdown"  : __DIR__"mon17",
]));
        setup();
}

