inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "����ɽ��");
  set ("long", @LONG
����һ��·���㻹�Ǵ��ڳ���ɽ�����������ܣ���һ��·������
����ͨ��ɽ�ϵ�·������һ�ߵ�·���Ե���Щ��᫣�����Զ��������
�����ֵǸߵĸо������������������ƺ��У�����������Զ����ɽ��
��������������ۼ��������������쿪���
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bear.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "northup" : __DIR__"mon23",
  "west" : __DIR__"mon25",
  "south" : __DIR__"mon21",
]));

  setup();
}
