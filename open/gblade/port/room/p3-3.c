// Room: /open/gblade/port/room/p3-3.c
inherit ROOM;

void create ()
{
  set ("short", "�ۿ�");
  set ("long", @LONG
������Ǹۿ��� , �������޷������� , �ϱ���һƬã
ã�Ĵ� , һ���޼� , �ƺ������˸���Σ�� , ȴҲ���������
���� , ��������ȥ , ������ȥ��һ�� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"p3-2",
]));

  setup();
}
