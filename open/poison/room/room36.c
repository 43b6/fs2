#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
��һ�������֪�� ,����һ������ľ��� ;¯������һ�����̵�
���� ,���Ϸ���һ�ѷ����Ĵ� ,�׻λεĵ��淴ӳ����Ŀ־�
 ,һλ���������������� ,��¶������һ�ſŰ��� ,������¶��
��Ц :~~~~~~

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "out" : (: look_door,     "out" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"room35",
]));
  create_door("out", "ľ����", "enter", DOOR_CLOSED);
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/tiger.c" : 1,
]));
  set("light_up", 1);

  setup();
}
