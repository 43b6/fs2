// Room: /u/m/moner/open/room/r13.c 
inherit ROOM;
#include <room.h>
#include <ansi.h>
 
void create ()
{
  set ("short", "���ſ�");
  set ("long", @LONG

    �������ڷ���ɽկ����ǰ, �����λ��ױ�������, ����Կ���
Ժ���ﻨľ����, �����͵Ĵ��ƺ���չ��, ����Ȫ��ˮ, �������,
��Զ�������εض���, �γɴ���������, ����ͥԺ����, �þ�����,
���������ǹ��ŵ�, ��������Ŵ���(open door).


LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r15.c",
  "north" : __DIR__"r12.c",
]));
create_door("north",HIW"����������"NOR,"south",DOOR_CLOSED);

  setup();
  replace_program(ROOM);
}
