#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "��Ժ�ߵ�");
  set ("long", @LONG

�����ǽ�����լ����Ժ����Ժ��һ�������ͣ��м���һ����԰����԰��
������Ԫ�ԼҾ��ס�����㿴�����ܷ��䣬������������ϸ��ʱ�»�����
�������Ϳ�Ρ�
��������Ԫ�Եķ��䡣

LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 4 */
   "south" :__DIR__"g3-8.c",
   "west" :__DIR__"g3-3.c",
   "north" : __DIR__"g3-2-1.c",
   "east" : __DIR__"g3-1.c",
]));
create_door("north", "����̴ľ��", "south", DOOR_CLOSED);

  setup();
}

