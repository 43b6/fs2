// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��\�䳡");
  set ("long", @LONG
������һƬ����Ĺ㳡 . �㿴����ǧ�˴��ųಲ , ������
�� , ����Ŵ����ڵĲ����� . ��������һ�� , �����쳹��
�� . ���ߺͱ��߽�Ϊ��Ӫ , ���˼�����ֵ��Ա������ , ��
�ݵ�ʿ���������䳡����ѵ�� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/gblade/navy/room/d1-5",
	"west" : "/open/gblade/navy/room/d1-6",
]));
	set("objects",([
	"/open/gblade/navy/npc/monitor":1,
	"/open/gblade/navy/npc/soldier":1,
	]));

  setup();
}
