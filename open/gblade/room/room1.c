// Room: /u/m/moner/tree/room1.c
inherit ROOM;
void create ()
{
  set ("short", "����");
  set ("long", @LONG

�������ڻ�����, ������һ��С��, �������߸��л���
ͨ�����᷿�����᷿, ���ߵ������ϵ���Ź����Ļ���,����
���Իص����ҡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
"south":__DIR__"secret.c",
  "north" : __DIR__"room2.c",
]));
  set("light_up", 1);

  setup();
}
