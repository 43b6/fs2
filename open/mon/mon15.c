inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "Сƽ̨");
        set ("long", @LONG
��ƽԭС���߹��������Сƽ̨���������ƽ̨������������
������Щ����е��̲ݣ������ɽ���ƺ����ﲻ������ط�������
��ů��ȴ����������������
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "west"     : __DIR__"mon14",
]));
        setup();
}

