// Room: /u/d/dhk/questsfan/rm5
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɽ��[1;31m�H[0m·");
  set ("long", @LONG
��һ��������ֿ���һֻ�𱳻�Գ��������һ��������
��ʯͷ����С�������ֶ��زص����ߵĸ���ȥ�۲죬��һ
��С�ĳ��˻�Գ�ĵ��ġ�hmm�� ������ϸһ�ƣ��ۣ�������
������ľ������ڹ���伮���ص���ʯ���Hʯ��ѽ�������
�Ǵ��۽��ˡ�

LONG);

  set("outdoors", "/u/d");
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/tod.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"rm4",
  "westup" : __DIR__"rm6",
]));

  setup();
}
