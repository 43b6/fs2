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
  "northeast" : __DIR__"f-1.c",
  "southwest" : __DIR__"f-4.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/fire-hole/npc/fire-bat.c" : 1,
"/open/fire-hole/npc/knight.c" : 1,
  "/open/fire-hole/npc/fire-turtle.c" : 1,
]));

  setup();
}
