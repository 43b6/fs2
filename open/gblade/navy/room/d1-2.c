// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","ʯ����");
  set ("long", @LONG
��������һ���ֿ���ƽ̹��ʯ������ . ��·ͨ������Ψһ
��ˮ������ . ��һ���Ǿ����ص� , ��ͨ�������ǲ�������ͨ��
�� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/gblade/navy/room/d1-1.c",
	"east" : "/open/gblade/navy/room/d1-3.c",
]));
	set("objects",([
	]));

  setup();
}
