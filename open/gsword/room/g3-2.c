// Room: /open/gsword/room/eghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����һ��ϸ�������ȣ�һ�ߵ��⣬������ŵ����ߴ�������ķ����㣬
ֱ��������Ŀ�ˮֱ�������ӹ����Ľ��������������⽣�ɲ����书��
һ���������ն�������̾���ѣ�����Ī����������һ���ͨ�� ,��
�����Ǵ����� .

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/g3-1.c",
  "north" : "/open/gsword/room/g3-4.c",
  "out" : "/open/gsword/room/g2-15.c",
  "east" : "/open/gsword/room/g3-3.c",
]));

  set("light_up", 1);

  setup();
}
