#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[0;1;31m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[0m");
  set ("long", @LONG
�������, ����ֱ���춥, ʹ�����������ʮ������, ���ܶ��ǻ��,
������ͳ��������Ĺ������������������ɵĻ�֮���, ������������
ʱ, ͬʱ�����Ļ���Ի�, �Ҳ�����ȷ�ĳ�·��
LONG);

  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"f-12.c",
  "southeast" : __DIR__"f-19.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/fire-hole/npc/small-dragon.c" : 1,
  "/open/fire-hole/npc/fire-liz.c" : 1,
]));

  setup();
}
