// Room: /open/capital/room/g1
inherit ROOM;

void create ()
{
  set ("short", "�İ����ܵ�");
  set ("long", @LONG
������쵽����, ǰͷ������Խ���Ե�����, ����ԼԼ�Ŀ���ȥ,
������һ��ʯ�ҵ�����, �����ϵĳֵ�����ҡҡ�λε�, ӳ�������Ӱ
Ҳҡҷ������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"q0",
  "east" : __DIR__"q2",
]));
  set("no_transmit", 1);

  setup();
}
