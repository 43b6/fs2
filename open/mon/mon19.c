inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ʯ��");
        set ("long", @LONG
һ�ν���һ�ε�·�̣������Ծ���������ʯ����ɫ���ɣ�������
��ľ���Կݻ�ϡ�٣������е�ˮ��Ҳ������Ũ������ķ缲���Ĵ���
�������ϢҲһ��һ�ε����������ڣ�����������ǰ����·���ж�
Զ��
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "eastup"     : __DIR__"mon20",
        "southdown"  : __DIR__"mon18",
]));
        setup();
}

