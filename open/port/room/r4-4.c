// Room: /open/gblade/port/room/p1-6.c
inherit ROOM;

void create()
{
  set ("short", "������");
	set( "build", 43 );
  set ("long", @LONG
����һ�������� , �����Ÿ�ʽ�����ĵ� , Ϊȫ��������
Ϊ��ȫ֮�� , �㿴���ܶ൶���ڴ�ѡ���ʺ��Լ��ı��� , ��
ν���������� , ���������� , ���� ,��Ҳ��Ϊ�Լ�ѡ������
������ , �ô������� .����Կ���(list)�ϰ�����Щʲô ?

LONG);

  set("light_up", 1);
	set("objects",([
	"/open/port/npc/wang":1,
	"/open/port/npc/trainee2":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
	"south" : "/open/port/room/r4-2",
]));
  setup();
}
