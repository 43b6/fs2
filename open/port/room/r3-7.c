// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","������");
  set ("long", @LONG
�����Ǹ����� , ��·���Ծ��������ɴ������úͻ��������
�Ļ�լ , ���Ҵ����԰��֮�� , ��լ���˲��ǴӾ������ݵĸ�
�� , �����ڷ����¸��ľ޼� , ���Ǵ����ź��ݵ����� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r3-6",
]));
	set("objects",([
	]));

  setup();
}
