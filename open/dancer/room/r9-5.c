// Room: /open/dancer/room/r9-5.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","ɽ��");
  set ("long", @LONG
������ɽ��֮�ϣ������������Լ�ɿ���һ��С·��Ȼ����ȴ
�޷������ߴ�Խ���֣��������Ƕ��͵�ɽ�ڡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/dancer/room/r8-5.c",

]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/poison_girl.c" : 1,
]));
  set("light_up", 1);

  setup();
}
