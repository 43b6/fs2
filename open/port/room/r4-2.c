// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�����");
  set ("long", @LONG
��������������� . �׻�˵ : ���յ� , ǧ�ս� . ���ڵ�
�����������ֵ����� , �����ռ��ȼ��� , ��� , ����Ϊʱ��
�����е����� . ���� , Ҫ�뽫���İ�����ȫ���� , ���ǵ���
��һ�����Ĳ��� . ����Ϊ������ģ���ĵ���ר���� , �ϱ���
���ߵ� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r4-3",
	"west" : "/open/port/room/r4-1",
	"north" : "/open/port/room/r4-4",
	"south" : "/open/port/room/r4-5",
]));
	set("objects",([
	]));

  setup();
}
