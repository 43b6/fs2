#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�Է�");
  set ("long", @LONG

��䷲�仪���쳣��ǽ�Ϲҵ����Ʋ����ġ����Ĵ�˯ͼ���������������
���쵱�վ�������ı�����һ�߰����Է���������Ľ��̣�����ʢ�Ű�»
ɽ��������̫�����ľ�ϣ��������ʩ�����ɴ�������ﱧ����ԧ����
����������������С��ķ��䣬û�뵽��ʹ����ñ˴˼�Ĳ��Ҳ�Ǻܴ�
�ġ�


LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g3-6",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/shoue.c" : 1,
]));
  set("light_up", 1);
	create_door("north","����̴ľ��", "south",DOOR_CLOSED);

  setup();
}
