#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
	set( "build", 2 );
  set ("long", @LONG
    �߽�����, ��һ��ƫ��, �����Ƕ��Ƶķ���, ���Ը���һ���ߵ�,
�����������ϺõĴ���̺, ���г�һ��ׯ�ϵ����ա�

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"p1.c",
  "west" : __DIR__"np24",
  "north" : __DIR__"np25",
  "east" : __DIR__"np22",
]));
  set("light_up", 1);
create_door("north","����̳ľ��","south",DOOR_CLOSED);
  setup();
}
