// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��ջ��¥");
  set ("long", @LONG
���������¥��ջ�Ķ�¥ . ������������ڿյ� , �ֱ��
�˸���̨ . �����ֱ�Ӵ����￴������ , ÿ������ , ������
�촵�� , �ڴ�С�� , ��Ϊ��ˬ . ���������ϲ�����˳��� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"down" : "/open/port/room/r2-4",
]));
	set("objects",([
	]));

  setup();
}
