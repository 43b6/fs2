inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "����С��");
        set ("long", @LONG
ϸϸ����ʯ����������С����ϡϡ�����Ұ���Ѳز�ס����Ļ�
�������������̣��¶���С����ֻʣ�¿��еĲ�ӥ�߿����棬�����
С����ֻʣ����е�����������顣
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "eastdown"       : __DIR__"mon23",
        "westup"         : __DIR__"mon26",

]));
        setup();
}

