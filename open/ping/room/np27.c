#include </open/open.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�޾�");
  set ("long", @LONG
�����Ƕ�������Ķ����᷿, ��ͷ�д��εȼҾ�, ���õ���ů����
���϶���ɨ�ĸɸɾ�����, ���˸е�ʮ����ܰ��

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"np26",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan7" : 1,
]));
  set("light_up", 1);

  setup();
  replace_program(ROOM);
}
