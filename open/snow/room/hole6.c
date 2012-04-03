#include <room.h>

inherit ROOM;

void create()
{
        set("short","��Ѩ");
        set("long","����һ�������[2~����,�ɵ��ϵĻҳ����Կ���,��������,���������������ˡ�\n");

        set("item_desc", ([ /* sizeof() == 1 */  "west" : (: look_door, "west":),
]));

        set("exits", ([
          "west":__DIR__"hole7",
          "east":__DIR__"hole4",
          "south":__DIR__"hole8",
          "north":__DIR__"hole9",
        ]) );

        create_door("west","�������", "east",DOOR_CLOSED);

        setup();
}
