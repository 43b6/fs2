// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","����̨��");
  set ("long", @LONG
����������̨ , ��Ұ�쳣���� , ���Ϸ���ȥ , �������о�
���۵� . ���ֳ������ٺ����� , ��������ֱ������ܻ������
��ɽ , ���߸��ų�ǽ��ƽԭ��� . �������ָ�������һ����
�� , �����˽��еķ��� , ��· , ������һ�ε����鵽�����
������ . ���˵�¾��Ǹ�׳���� , ���о��Ǹ��׷��ԲԵ�����
�� , �����������������ʢ�������� , ��׼�����Լ���������
̨�ϴ����� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"down" : "/open/port/room/r6-7",
]));
	set("objects",([
	"/open/port/npc/guard3":2,
	"/open/port/npc/vice-leader":1,
	]));

  setup();
}
