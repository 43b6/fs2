inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "ƽԭС��");
        set ("long", @LONG
С����������һ��Ƚ�ƽ̹�ĵط���Ϊ��᫲�ƽ��·;����һ
˿��Ϣ�Ŀռ䣬ǰ����Զ����һ��Сƽ̨����һ�������������϶���
·��ƽ̹�ĵ�·�ԣ���ľ���ıȽ���ʢ��������Ϣ��ȥ��ԭ�ȵĿ�
�ơ�
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"       : __DIR__"mon15",
        "westup"     : __DIR__"mon16",
        "eastdown"   : __DIR__"mon13",
]));
        setup();
}

