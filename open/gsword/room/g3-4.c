// Room: /open/gsword/room/eghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����һ��ϸ�������ȣ�һ�ߵ��⣬������ŵ����ߴ�������ķ����㣬
ֱ��������Ŀ�ˮֱ�������ӹ����Ľ��������������⽣�ɲ����书��
һ���������ն�������̾���ѣ�����Ī����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/g3-6.c",
  "south" : "/open/gsword/room/g3-2.c",
]));

  set("light_up", 1);

  setup();
}
