// Room: /open/capital/room/q0.c
inherit ROOM;

void create ()
{
  set ("short", "�İ����ܵ�");
  set ("long", @LONG
����Կ���������һ�����ܵ��ܵ�, ���Ե���ʯ�γ�������Ȼ����
��, ��ʯ�ϻ����丵ĵ���ˮ��������, ���δ𡢵δ𡱵���������
��Щ�������, ǰ��������������͸����, �U�U�����Ŀ������С�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"q1",
]));
  set("no_transmit", 1);

  setup();
}
