// Room: /open/capital/room/h11.c

inherit ROOM;

void create ()
{
  set ("short", "֥���ͬ");
  set ("long", @LONG
��������һ�ô���, �����������������, ��˸����ľ���������
��̫����ʱ��ϲ��������ӵ���������, ������, ���ͦ������
�ӡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h10",
  "east" : __DIR__"h12",
]));
  set("outdoors", "/open/capital");

  setup();
}
