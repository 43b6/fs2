// Room: /u/m/moner/room/room10.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

�߽�����, ��һ������, ��ǰͨ����Ժ, ��������Ҳ����һ���ߵ�,������������
�õĺ�̺, ���Ե�ǽ�Ϲ��ż�յ�͵ơ�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"room16.c",
  "north" : __DIR__"room13.c",
  "east" : __DIR__"room23.c",
  "northwest" : __DIR__"room2.c",
]));
  set("light_up", 1);

  setup();
}
