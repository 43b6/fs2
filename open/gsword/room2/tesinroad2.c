//tesinroad
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIY"���ľ�"NOR);
        set("long", @LONG
�߳�����.��ʱ�������.�����һ����ȫ��������ԭ���ֵľ���...
����ǰ����һ�����Ʒ��ݵĽ���.·���෢��һ�ż���Ļ���ʯ..����
д�š����ľӡ���
LONG );
        set("exits", ([ /* sizeof() == 3 */
 "enter":"/open/gsword/room2/tesinroom.c",
 "south":"/open/gsword/room2/tesinroad1.c",

]));
        set("light_up",1);
        set("no_transmit", 1);
        setup();
}




