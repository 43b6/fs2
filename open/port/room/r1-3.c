// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","������");
  set ("long", @LONG
�������ڷ��ָ������ֵ��������� . ��һ���Ƿ��ָ۵���
�� , �ֵ����Լ�����̯�� , ���� , ��ʽ��������Ʒ����Ŀ��Ͼ
�� ������ҩ�� ,����������վ.

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r1-8",
    "west" : "/open/trans/room/room10",
	"south" : "/open/port/room/r1-4",
	"north" : "/open/port/room/r1-2",
]));
	set("objects",([
	]));

  setup();
}
