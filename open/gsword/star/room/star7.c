// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "[1;37m����¥[2;37;0m");
  set ("long", @LONG
�����������е����һ��, ���˿�����, ������в���˼��, 
��Χ����һ�Ѷѵİ׹�, �׹���ɢ����һ�Ѷѵ�������װ��, ��
�����㽫�������۵�ʮ��ʱ, ¥���Ѿ��嵽������, ��������
��,�����ʱ��֪���롣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/g5-1.c",
  "out" : __DIR__"room14.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star2.c" : 1,
]));

  setup();
}
