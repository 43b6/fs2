// Room: /open/capital/room/r17.c

inherit ROOM;

void create ()
{
  set ("short", "�ֵ�");
  set ("long", @LONG
ԶԶ������ǰ�����������ûʵķ��ӣ���������ฮ�ˡ�������
��ס�������������µ��ˣ�һ�ǵ������࣬����ս���������Զ�����
ȫ���׸���ͨ�죬��������Ҳ��������ѯ����������ɼ����Ƕ�������Ӱ
������

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/capital/room/r51",
  "north" : "/open/capital/room/r14",
]));

  set("gopath", "south");

  setup();
}
