// Room: /open/gblade/port/room/p4-1.c
inherit ROOM;

void create()
{
	set("short","�����ջ");
  set ("long", @LONG
�����Ǳ������Ŀ�ջ , ȡ��Ϊ�����ջ , ������Ϊ��Դ
����������ĺ� , ����ƽ�����ⶼ�ǳ�֮�� , �㼸�������ҵ�
���շ� , �������ܳ�������ߵļ�Ǯ .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"p3-2",
]));
  setup();
}
