#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "��Ժ�ߵ�");
  set ("long", @LONG

�����ǽ�����լ����Ժ����Ժ��һ�������ͣ��м���һ����԰����԰��
������Ԫ�ԼҾ��ס�����㿴�����ܷ��䣬������������ϸ��ʱ�»�����
�������Ϳ�Ρ�
�Ϸ������Ҷ�С���ס����


LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 4 */
   "east" :__DIR__"g3-7.c",
   "north" : __DIR__"g3-8.c",
   "west" : __DIR__"g3-5.c",
   "south": __DIR__"g3-6-1.c",
]));
 create_door("south", "����̴ľ��", "north", DOOR_CLOSED);

  setup();
}

