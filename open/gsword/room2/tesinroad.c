//tesinroad
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"����С��"NOR);
        set("long", @LONG
ͨ�������ħ����֮��..�㲻������ߵ���һ���������ֵ����С��...
С���ƺ�ֻ����ǰ��ǰ��...����.�����..��������һ������Ĵ�����
����������ҫ������Ĺ�â...��
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room2/tesinroad1.c",
 "back":"/open/gsword/room/g5-1.c",

]));
        set("light_up",1);
        set("no_transmit", 1);
        setup();
}
