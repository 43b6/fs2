// Room: /open/ping/room/p4
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "�޾�");
  set ("long", @LONG
�����Ƕ�������Ķ����᷿, ��ͷ�д��εȼҾ�, ���õ���ů����
���϶���ɨ�ĸɸɾ�����, ���˸е�ʮ����ܰ��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p3",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan7" : 1,
]));

  setup();
}
