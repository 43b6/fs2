// Room: /open/dancer/room/roome1.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
ҹ��С�������ȣ�һ·�򶫽����������ǽ������������
���ܣ��ߵ��������ŵ������㣬ԭ�����Ѿ��ӽ�ҹ��С����
��԰�ˣ�������ҹ�δ�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"start",
  "east" : __DIR__"roome2",
  "north" :__DIR__"roomen1",
]));

  set("light_up", 1);

  setup();
}
