// Room: /open/gblade/port/room/p1.c
inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
����һ����ʯ���̳ɵĵ�· , �ǳ�͢���������� , ��·��
�ϱ����� , ������������վ�ʹ�½Ψһ�ĸۿ� -- ���ָ� . ����
�������ں�������½��ͨ�� , ���ָ����Ѵ�ԭ�����ص�С���һ
Ծ����Ϊ������ҵ���� , �Ϸ����Ƿ��ָ۵ı��� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/main/room/s38.c",
  "south" : __DIR__"p1-1",
]));

  setup();
}
