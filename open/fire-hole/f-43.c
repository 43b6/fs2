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

  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"f-33.c",
  "west" : __DIR__"f-42.c",
]));
  set("outdoors", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/fire-liz.c" : 1,
]));

  setup();
}
