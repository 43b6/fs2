// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","������");
  set ("long", @LONG
�������ڷ��ָ۵Ĵ��� - �������� . ·�м��������
�����Χ�˸����� , ��ֹ����ͨ�� , ��˲��ܿ��ٵ���ͨ����
 . ����ʱ����������Ʒ�ĳ��Ӿ��� , ������ڸۿڸ�����ԭ��
�� ! �����Ǽ����ʢ������ , ���ߵĴ�լ�������𽭺�����
���ھ��ڷ��ֵķֲ� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 4 */
"east" : "/open/gblade/room/store",
	"west" : "/open/port/room/r2-3",
	"south" : "/open/port/room/r5-1",
	"north" : "/open/port/room/r2-1",
]));
	set("objects",([
	]));

  setup();
}
