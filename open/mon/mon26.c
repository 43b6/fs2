inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "ѩ��С��");
        set ("long", @LONG
�����С���У��̹ǵĺ���ӭ�������ϸϸ�İ�ѩ����ظ�����
����С����һ��Ĳ�ľ�Ѿ���������ֻʣ�������ͺ���С�����ڴ���
�Ķ���ʯ���У���������֮��ʢ���ɴ˿ɼ���
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "westup"      : __DIR__"mon27",
        "eastdown"    : __DIR__"mon24",

]));
        setup();
}

