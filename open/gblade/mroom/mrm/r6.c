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
  "west" : __DIR__"r7.c",
  "south" : __DIR__"r5.c",
  "east" : __DIR__"r8.c",
]));
  set("light_up", 1);

  setup();
}
