#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
���õ�������и�ת��, ͨ��һ�䷿��ȥ, ���䴦������һƿ��
, ���Ź��ż���ʫ��, һ��֮���ƺ���������֮��, ����һ�ַǷ�֮
�ơ�

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"np27",
  "west" : __DIR__"np22",
]));
  set("light_up", 1);

  setup();
}
