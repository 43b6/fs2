inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "ɽ��С��");
  set ("long", @LONG
СС��һ��·����ͨ�����嵱�е�������ؾ���С������������
ǰ��ȥ����ֻ�������ܲ�ľ��������ʢ���������ƺ����ܵ�����ص�
Ӱ�����¡�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bear.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"mon54",
  "south" : __DIR__"mon56",
]));

  setup();
}
