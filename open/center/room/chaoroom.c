// Room: /u/l/lotus/girl/chaoroom.c

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "���Ĺ���ķ���");
  set ("long", @LONG
�����µķ���, �Ĵ���ʰ��һ����Ⱦ, Ư���������ε�������
���Ŀ��, ���ɫ�ĵ�, ����Щ���ֹ�ϸ�µĴ���, ʮ�ֵ��ų�ɫ,
���ƵļҾ�, �����������.
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"f2d.c",
]));
  set("light_up", 1);
  set("file_name", __DIR__"chaoroom.c");
  create_door("west", "��ľ��", "east", DOOR_CLOSED);
  setup();
}
