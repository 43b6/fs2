#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
    �������ߵ���ǰ����, �������෿��, �Ƕμ��ӵܵľ���, �ڴ�
�����������, ������˷��С�

    �ϱ���һ������(door)��

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
  "door"  : (: look_door,     "south" :),
]));
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"np17",
  "south" : __DIR__"np30",
  "east" : __DIR__"np1",
]));
  create_door("south","����","north",DOOR_LOCKED);
  set("light_up", 1);
  set("need_key", ([ /* sizeof() == 1 */
  "east" : 1,
]));

  setup();
}

