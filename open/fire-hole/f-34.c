#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[0;1;31m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mt[0m");
  set ("long", @LONG
�����ǽ��ı�Ե, �����ħ������û��ô��ǿ����, ����¶ȸ�ƽ
��һ��, ����δ�뿪�ý�Ŀ��Ʒ�Χ, ������һ��ֱ���Ƽ�, ʮ����ֵ�
��ʯ, ���Ҳ���������̽���õİ�! 
LONG);

  set("outdoors", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/fire-hole/npc/fire-bat.c" : 1,
  "/open/fire-hole/npc/fire-turtle.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"f-30.c",
  "east" : __DIR__"f-35.c",
]));

  setup();
}
