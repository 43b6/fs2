// Room: /open/gblade/port/room/p1-8.c
inherit ROOM;

void create()
{
  set ("short", "���ߵ�");
  set ("long", @LONG
����һ�ҷ������ߵ��̵� , ���ڵ����ó����� , ���ڷ�
�ز�����ôע�� , �������������Զ������������ , ����
��Щ�����������Լ�Ҳ�Ǻõ� , ������� (list) ����֪��
����Щʲô���� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"p1-7",
]));
	set("objects",([
	"/open/gblade/port/npc/lee":1,
	]));
  setup();
}
