// Room: /u/f/fire/room/room1-36.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>

void create ()
{
  set ("short", "[32m��[2;37;0m");
  set ("long", @LONG
��һ���񷿺������ķ��Ӳ�û��ʲô��ͬ�ĵط������ƺ����Ը�
���������ﶼ������ʳ�����ζ��ʹ�㲻������һ�εεĿ�ˮ���о�
�ö��ġ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room1-35",
]));
  set("objects", ([ /* sizeof() == 2 */
C_NPC"/woman" : 1,
C_NPC"/oldwoman" : 1,
]));

  setup();
}
