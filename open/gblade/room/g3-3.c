#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "��Ժ�ߵ�");
  set ("long", @LONG

�����ǽ�����լ����Ժ����Ժ��һ�������ͣ��м���һ����԰����԰��
������Ԫ�ԼҾ��ס�����㿴�����ܷ��䣬������������ϸ��ʱ�»�����
�������Ϳ�Ρ�
��������Ԫ�Զ��ӵ��Է���


LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"g3-4.c",
	"west"  : __DIR__"p-room",
  "north" : __DIR__"g3-3-1.c",
  "east" : __DIR__"g3-2.c",
]));
  set("light_up", 1);
	create_door("north", "����̴ľ��", "south", DOOR_CLOSED);

  setup();
}
