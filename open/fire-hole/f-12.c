#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[0;1;31m��[1m��[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mt[0m");
	set( "build", 18 );
  set ("long", @LONG
�����ǽ��ı�Ե, �����ħ������û��ô��ǿ����, ����¶ȸ�ƽ
��һ��, ����δ�뿪�ý�Ŀ��Ʒ�Χ, ������һ��ֱ���Ƽ�, ʮ����ֵ�
��ʯ, ���Ҳ���������̽���õİ�! 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"f-15.c",
  "east" : __DIR__"f-13.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/fire-turtle.c" : 1,
]));
  set("outdoors", 1);

  setup();
}
