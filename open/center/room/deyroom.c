// Room: /u/l/lotus/girl/deyroom.c

#include "/open/open.h"
#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "�ʵ�����ķ���");
  set ("long", @LONG
�ʵ�����ض��Ǹ�����������, ��Ϊ���и��������ʻ���׺��,
ɢ����Ũ���Ļ���, �����϶������˻���, ��������һ���������
��������ô���, �ʵ����������ֵ�������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : CENTER_ROOM"f2c",
]));
  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"dey.c" : 1,
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"deyroom.c");
  create_door("west", "��ľ��", "east", DOOR_CLOSED);
  setup();
}
