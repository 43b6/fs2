// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","������");
  set ("long", @LONG
�������ڿ����������� . �����������ű��ź͸ۿ� , 
�ᴩ���������ָ۵�����ش� . �ֵ��ǳ��Ŀ�� , ��·�м��
����������� , ��ֹ����ͨ�� , ���ṩ������ٵ��н� . ��
���Ǳ�������������¥��ջ .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r2-4",
	"north" : "/open/port/room/r3-1",
	"south" : "/open/port/room/r2-2",
]));
	set("objects",([
	]));

  setup();
}
