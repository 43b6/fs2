inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ɽС��");
        set ("long", @LONG
С��������һ���ȽϿ���С������ɽ����·;��ңԶ������
�Ĳ�ľ�Ծ�ϡ�٣����̵���ɫҲ����ת��ݻƣ��������ߣ���������
�̺�����Ϣ�������䣬��������ƺ�������͸�ż����������
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "westup"     : __DIR__"mon14",
        "southdown"  : __DIR__"mon12",
]));
        setup();
}

