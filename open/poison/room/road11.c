// Room: /open/poison/room/road11
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��¥");
  set ("long", @LONG
��ǰ��һ�߼�ĸߴ���¥�������ƷǷ�����¥����һ��
�̾������Ҷ�(tablet)����·�������˸�ʽ�����Ļ��ݣ���
����һ�򱱸�����ʯ�ݡ�
LONG);

  set("item_desc",([ /* sizeof() == 1 */
  "tablet" : HIR"
	����һ���ɫ������Ҷ���������

	    ڤ  ��  ħ  ��  ʥ  ��

"NOR,
]));

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/poison/room/road10",
  "northup" : "/open/poison/room/road12",
]));

  setup();
}
