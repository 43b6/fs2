// Room: /open/gblade/port/room/p1-6.c
inherit ROOM;

void create()
{
	set("short","�����ӻ���");
  set ("long", @LONG
����һ���ӻ��� , �����Ż�� , ��ͼ���ճ�����Ķ��� .
�㿴������U����Ŀ�ĳ����Ÿ�����Ʒ , �������ʲô�ڱ�ҵ�
���򲻵��Ķ��� , Ҳ������������ҵ� !

LONG);

  set("light_up", 1);
	set("objects",([
	"/open/port/npc/keeper_wang":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
	"west" : "/open/port/room/r1-4",
]));
  setup();
}
