// Room: /open/capital/room/r44.c

inherit ROOM;

void create ()
{
  set ("short", "�����۵�");
  set ("long", @LONG
�Ƕ��ĳ�����������������ʼ�̵ĳ�ǽ��������Ϊ���Ӷ����
�����������̾һ������һ���ޱ���

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"h16.c",
  "south" : __DIR__"r43",
  "north" : __DIR__"r45",
]));
  set("gopath", "south");

  setup();
}
