// Room: /open/gblade/port/room/p1-8.c
inherit ROOM;

void create()
{
  set ("short", "���ߵ�");
	set( "build", 6 );
  set ("long", @LONG
����һ�ҷ������ߵ��̵� , ���ڵ����ó����� , ���ڷ�
�ز�����ôע�� , �������������Զ������������ , ����
��Щ�����������Լ�Ҳ�Ǻõ� , ������� (list) ����֪��
����Щʲô���� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
	"north" : "/open/port/room/r4-2",
]));
	set("objects",([
	"/open/port/npc/lee":1,
	]));
  setup();
}
