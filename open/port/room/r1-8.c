// Room: /open/gblade/port/room/p1-6.c
inherit ROOM;

void create()
{
	set("short","���϶�ҩ��");
  set ("long", @LONG
����һ���ľ߹�ģ��ҩ�� . ���ӵĶ�������ǽ�߸����˸���
ҩ�� , ����Ĵ���Ÿ���ҩ�� . ҩ���ϰ�����������ι���ҽ
 , ˵���������������ֻ�лʵ۲ųԵĵ����ɵ���ҩ� !

LONG);

  set("light_up", 1);
	set("objects",([
	]));
  set("exits", ([ /* sizeof() == 1 */
	"west" : "/open/port/room/r1-3",
]));
  setup();
}
