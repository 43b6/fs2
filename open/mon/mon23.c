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
        "southdown"      : __DIR__"mon22",
        "westup"         : __DIR__"mon24",

]));
        setup();
}

