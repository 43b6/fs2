inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "����ɽ��");
  set ("long", @LONG
������;���棬���Ѿ������˳���ɽ�İ�ɽ���ˣ�����Զ������
�Ѿ����ֵǸߵĸо��������������������ƺ�֮�У�����������Զ��
��ɽ����������������ۼ��������������쿪���
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fox.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"mon20",
  "north" : __DIR__"mon22",
]));

  setup();
}
