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

  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"f-6.c",
  "southwest" : __DIR__"f-20.c",
]));
  set("outdoors", 1);

  setup();
}
