// Room: /open/ping/room/p6
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������ߵ���ǰ����, �������෿��, �Ƕμ��ӵܵľ���, �ڴ�
�����������, ������˷��С�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"p8",
  "north" : __DIR__"p7",
  "east" : __DIR__"p3",
]));
  set("light_up", 1);

  setup();
}
