// Room: /open/poison/room/path7
inherit ROOM;

void create ()
{
  set ("short", "�ܵ�");
  set ("long", @LONG
���Ű׹Ǳ�أ�Զ������������������֪�Ǻ��ֶ����
���������������������⣬ͻȻ����һ������Ī�����
����������֮��ɫ����֮ɥ���ġ��������������������С
��һ�㣬���ܵ�һ����������Ѿ����¶��ˣ����ⴥ����
�����ѱ�����������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/poison/room/path8",
  "south" : "/open/poison/room/path6",
]));

  setup();
}
