inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "ѩ��С��");
        set ("long", @LONG
ǰ����С·���ɣ��̹ǵĺ���ӭ�������ϸϸ�İ�ѩ����ظ���
������С����һ��Ĳ�ľ�Ѿ���������ֻʣ�������ͺ���С�����ڴ�
�ڵĶ���ʯ���У���������֮��ʢ���ɴ˿ɼ���
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "westup"      : __DIR__"mon28",
        "eastdown"    : __DIR__"mon26",

]));
        setup();
}

