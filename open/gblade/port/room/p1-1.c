// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","���ָ۱���");
  set ("long", @LONG
����һ���ս��ò��õĳ��� , ���������ڴ˿�������������
�ÿ� , ������ҵ�ķ��� , ���ָ����������Դ�½���ص����˵�
�˽��� , ��Ե� , ����ķ�����Ҳ��ȫ����� , ������ȿ���
�Լ��ĺɰ� , ����Ǯ���Ĳ������� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"north": "/open/main/room/s38",
  "south" : __DIR__"p1-2.c",
]));
	set("objects",([
	"/open/gblade/port/npc/guard":2,
	]));

  setup();
}
