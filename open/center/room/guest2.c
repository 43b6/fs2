// Room: /u/l/lotus/girl/guest2.c
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һȺ���ʮ��, �������Ů, ���ŷ�������, "������", "������
��", ��Ƥ�ɰ�. ������������赸�ĵط�, �������ڴ�����, ������
��, �ò�����, ��һ��ʲôʱ��,  ���赸�����Ĳʵ�������µ�¥��
��һ��.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : CENTER_ROOM"tin1.c",
  "south" : CENTER_ROOM"tin3.c",
  "east" : CENTER_ROOM"guest",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"guest2.c");

  setup();
}
