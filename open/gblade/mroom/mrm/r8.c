// Room: /u/m/moner/room/room9.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

�߽�����, ��һ������, ��ǰͨ����,��������Ҳ����һ���ߵ�,������������
�õĺ�̺, ���Ե�ǽ�Ϲ��ż�յ�͵ơ�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r4.c",
  "west" : __DIR__"r6.c",
  "south" : __DIR__"r3.c",
]));
  set("light_up", 1);

  setup();
}
