// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��\�䳡");
  set ("long", @LONG
������һƬ����Ĺ㳡 . �㿴����ǧ�˴��ųಲ , ������
�� , ����Ŵ����ڵĲ����� . ��������һ�� , �����쳹��
�� . �㲻���������ˮ���ܶ�׿Խ���α����� , ����۱� , 
�μ᲻�� ? �γǲ��� ? ������һ��Ƭ�ľ�Ӫ , �ϱ��Ǻ� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/gblade/navy/room/d1-4.c",
	"north" : "/open/gblade/navy/room/d1-7.c",
]));
	set("objects",([
	"/open/gblade/navy/npc/soldier":1,
	"/open/gblade/navy/npc/monitor":1,
	]));

  setup();
}
