// Room: /u/u/unfinished/room/is1.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ��");
  set ("long", @LONG
λ��С�������Ͻ�, С����ͻ���Сʯ��, ʯ���ϲݲ�����, ֻ�б�ذ�ɳ
������ʯ. �����˴����Կ�������С���Ĵ�ŵ���. ������ï�ܵ�����, ������
�ذ�. �˵صظ߷羢, վ�ڴ˴�����������"��ض�������ң"�ĸо�.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"is6.c",
  0 : __DIR__"quest",
  "east" : __DIR__"is2.c",
]));
  set("outdoors", "y");

  setup();
}
