// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�����");
  set ("long", @LONG
�����ĺ������ͽ�������ڴ˵�Ե�� , ��һ�����˵��͵�   
��Ӫ . ����·�ϵĴ����ǿ�����������һ�еĵ��� . ���
��û��̫��İ��� , ���Ǳ����ڴ���Ұ�ĺ� . �ϱߵĴ�լ����
������ , �㿴����൶�ͽ��������� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r3-1",
	"west" : "/open/port/room/r4-2",
	"south" : "/open/port/room/r4-6",
]));
	set("objects",([
	"/open/port/npc/blademan2":1,
	]));

  setup();
}
