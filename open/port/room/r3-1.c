// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","ʮ�ֽֿ�");
  set ("long", @LONG
�����������ֺͶ�������ֵĽ���� . ����ÿ�����ϻ���
��ҹ�� , ��������Ʒ���������� , ʱ������Щ���������˵�
�˽��� , ʹ���ָ�Ĩ���ͷ׵������� , ����������Ҫ���ĵ�
 , ˵��������������Ʒ .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r3-2",
	"south" : "/open/port/room/r2-1",
	"west" : "/open/port/room/r4-3",
	"north" : "/open/port/room/r1-4",
]));
	set("objects",([
	]));

  setup();
}
