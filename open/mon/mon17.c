inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ʯ��");
        set ("long", @LONG
����ǰ�ߣ������Ծ���������ʯ����ɫ���ɣ������Բ�ľ���Կ�
��ϡ�٣������е�ˮ��Ҳ������Ũ������ķ缲���Ĵ����������Ϣ
Ҳһ��һ�ε����������ڣ�����������ǰ����·���ж�Զ��
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "northup"    : __DIR__"mon18",
        "eastdown"   : __DIR__"mon16",
]));
        setup();
}

