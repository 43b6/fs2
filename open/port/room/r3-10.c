// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","����԰");
  set ("long", @LONG
�����Ƿ��־������Ļ�԰ - ����԰ . ����ʱ��������ϲ
�����������ͻ� , ɢ�� , ԰�аٻ����� , ��ľ���� , ������
�����˵ľ�ɫ .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r3-9",
	"north" : "/open/port/room/r3-13",
]));
	set("objects",([
	]));

  setup();
}
