// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","���ָ۱���");
  set ("long", @LONG
�����Ƿ��ָ۵ı��� . ����һ�������¥̨ , �߰ٳ� , ��
�Ǵ������ , ���Ͻ� , �ݶ��������������ǳ� , ����¥����
�����ʼ� , �쳣���� . ������վ���������� , ע������������
������ .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"north": "/open/main/room/s38",
	"south" : "/open/port/room/r1-2",
]));
	set("objects",([
	"/open/port/npc/guard":2,
	]));

  setup();
}
