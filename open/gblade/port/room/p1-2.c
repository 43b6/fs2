// Room: /open/gblade/port/room/p1-2.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����ʯ��· , ո�µĽ��� , ���ٵĽ־� , �������Ǹ�
ϣ��֮���� , ���಻��������ӿ����� , ������ϴ�������
��Ц�� , ���˶����ڷ��ָ۴�չ���� , ��һ������ҵ .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"p1-3.c",
  "north" : __DIR__"p1-1",
]));

  setup();
}
