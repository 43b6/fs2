#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�Է�");
  set ("long", @LONG

�������У�����һ��ϸϸ�����㣬������ѩ��һ�㣬һɫ������ȫ�ޣ���
��ֻ��һ������ƿ��ƿ�й�����֦�գ��������飬������豭���ѣ�����
ֻ������ɴ��ᣣ�����Ҳʮ�����ء��������Ҵ�С��ϲ���ؾ����������
���Σ����Ų����١�

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "east" : (: look_door,     "east" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g3-5",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/leing.c" : 1,
]));
  set("light_up", 1);

	create_door("east","����̴ľ��","west",DOOR_CLOSED);
  setup();
}
