// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","���¥��ջ");
	set( "build", 8 );
  set ("long", @LONG
�����Ƿ�Բ�������ʢ����һ�ҿ�ջ . ��ൽ��������
���� , �ÿ� , ��ָ��Ҫ����ס�� . ��Ȼ����Ŀͷ������ϰ�
��֮�� , ȴ��Ȼһ������ , �������ܳ�������ߵļ�Ǯ .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r2-1",
	"up" : "/open/port/room/r2-5",
]));
	set("objects",([
	"/open/port/npc/keeper":1,
	]));

  setup();
}
