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
  "west" : "/open/gsword/room/eghouse1.c",
  "east" : "/open/gsword/room/north.c",
]));

  set("light_up", 1);

  set("file_name", "/open/gsword/room/eghouse.c");

  setup();
}
