// Room: /open/su/room/jail/jail_in.c

inherit ROOM;
#include <room.h>

#include <ansi.h>

void create()
{
        set("short", "�������");
        set("long", @LONG
�谵�Ĺ��ߣ��Լ����ĵĳ�ζ����ʹ���̲�ס�����뿪�����
���������������������ǿ���뿪�ɡ�һ������ĺ�������(door)��
�����⣬��ǰվ��������ľ�������ʿ!!�����?!�����İɡ���
LONG);

        set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/hall/way1",
  "enter" : "/open/hall/jail/jail.c",
]));

         set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/j_guard" : 2,
]));
create_door("enter", HIR"��������������"NOR, "out", DOOR_CLOSED);
        setup();

}

