// Room: /u/f/fire/room/room1-24.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;33mǿ��֮��[2;37;0m");
  set ("long", @LONG
����ʷ�ƾ���ΰ���صĴ��������ű�Ե�ɻƽ���졢��������
��������ս����ɱ�е���ΰ����¶�����Ҵ��˵�Ӣ�£�̧ͷ����һ
����һ����׵Ľ����������������¸��Ե��������ޱȡ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"room1-23",
  "west" : __DIR__"room1-28.c",
  "north" : __DIR__"room1-31.c",
  "east" : __DIR__"room1-27.c",
]));

set("light_up",1);
  setup();
}
