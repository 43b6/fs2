// Room: /u/m/moner/tree/room1.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

�������ڻ�����, ������һ��С��, �������߸��л���
ͨ�����᷿�����᷿, ���ߵ������ϵ���Ź����Ļ���,����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room4.c",
  "south" : __DIR__"room2.c",
]));
  set("light_up", 1);

  setup();
}
