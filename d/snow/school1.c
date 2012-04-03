// Room: /d/snow/school1.c

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ������ݴ���");
  set ("long", @LONG
��������վ��һ���լԺ����ڣ���ֻ�޴��ʯʨ�����ڴ��ŵ���
�࣬һ����ߺ���뵶����ײ��������Ժ���д�����ͨ����������������
����������µĺ������ڲ�����
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "east" : (: look_door,     "east" :),
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guard" : 1,
]));
  set("outdoors", "snow");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"mstreet1",
  "east" : __DIR__"school2",
]));

  setup();
}
