// Room: /open/gblade/port/room/p1-6.c
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
����һ�������� , �����Ÿ�ʽ�����ĵ� , Ϊȫ��������
Ϊ��ȫ֮�� , �㿴���ܶ൶���ڴ�ѡ���ʺ��Լ��ı��� , ��
ν���������� , ���������� , ���� ,��Ҳ��Ϊ�Լ�ѡ������
������ , �ô������� .����Կ���(list)�ϰ�����Щʲô ?

LONG);

  set("light_up", 1);
	set("objects",([
	"/open/gblade/port/npc/wang":1,
	"/open/gblade/port/npc/trainee2":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p1-7",
]));
  setup();
}
