// Room: /u/m/moner/open/room/r12.c 
inherit ROOM;
#include <ansi.h>
#include <room.h>
 
void create ()
{
  set ("short", "ͥ԰");
  set ("long", @LONG

    �߽�԰��, �����ĸе��ľ�, �����Ĳ����������, ����, ΢��,
����, ������һ���羰��, ʮ���ô������ų�һ��, ���ǻ�ӭ�������
, �������������ȥ, ����ɽկ����������ڴ����ͷ, һ����Ȫ����
��ӯӯˮ��,�����������Եþ�Ө.


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r11.c",
  "south" : __DIR__"r13.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
]));
  set("outdoors", "wind");
create_door("south",HIW"����������"NOR,"north",DOOR_CLOSED);

  setup();
  replace_program(ROOM);
}
