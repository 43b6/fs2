// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��\�䳡");
  set ("long", @LONG
������һƬ����Ĺ㳡 . �㿴����ǧ�˴��ųಲ , ������
�� , ����Ŵ����ڵĲ����� . ��������һ�� , �����쳹��
�� . ��˵���㴦�ڷ������� , Ҳ�����������ʿ���ǵĺ�����
 . ���������ֳ� , ����������֮ɥ�� . �����Ǿ�Ӫ .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/gblade/navy/room/d1-4.c",
	"east" : "/open/gblade/navy/room/d1-7.c",
]));
	set("objects",([
	"/open/gblade/navy/npc/soldier":2,
	]));

  setup();
}
