// Room: /open/dancer/room/roome4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short",BLU"����"NOR);
  set ("long", @LONG
������������������������ƽ�ն����ڴ�������������������
Ҫ��Ҳ�������ܵĲ����˷��������������������ͨ������������
�ʺ������˼��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" :"/open/dancer/room/roome3.c",

]));
       
        set("item_desc", ([ /* sizeof() == 1 */
  "west" : (: look_door,     "west" :),
]));
  create_door("west",MAG"����̴ľ��"NOR, "east", DOOR_CLOSED);
  set("light_up", 1);

  setup();
}
