// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","����");
  set ("long", @LONG
�����Ƿ��ָ۵ĺ��� . Ϊ�⺣ˮ���� , ���������⵽����
 , �������ں����Լ�����һ������ . һ��ʯ���̳ɵ�С·��
�������� . ���߼�Ϊ�������� , ÿ���ƻ� , ���ԵĿյ��ϱ�
�ۼ��˲�������������ڴ˷��� , �γ����� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r5-1",
	"west" : "/open/port/room/r5-3",
]));
	set("objects",([
	]));

  setup();
}
