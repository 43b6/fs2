#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
���ߵĲݵ�, �·�����������һ��, ��ȫû���κ�����
�ļ���, �ڲݵص��������һ������(skeleton), �о���ʮ��
�Ĺ��졣
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "skeleton" : "һ�����������, ��ȫ������������һ�������ʬ��...\n",
]));
  set("outdoors", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/mon/npc/wolf.c" : 6,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/mon/mon57",
]));

  setup();
}
