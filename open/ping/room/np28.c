#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������ߵ���ǰ����, ������һ�䷿��, ���Ƕ��ƶ���Ů����Сʫ��
�Ĺ뷿, ���ŵ����д���������, �����������

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"np29",
  "east" : __DIR__"np24",
]));
  set("light_up", 1);

  setup();
}
