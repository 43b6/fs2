#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIR"�����ý��Ե"NOR);
  set ("long", @LONG
�����ǽ��ı�Ե, �����ħ������û��ô��ǿ����, ����¶ȸ�ƽ
��һ��, ����δ�뿪�ý�Ŀ��Ʒ�Χ, ������һ��ֱ���Ƽ�, ʮ����ֵ�
��ʯ, ���Ҳ���������̽���õİ�! 
LONG);

  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"f-10.c",
  "southwest" : __DIR__"f-18.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/fire-hole/npc/fire-liz.c" : 1,
  "/open/fire-hole/npc/fire-turtle.c" : 1,
]));

  setup();
}
