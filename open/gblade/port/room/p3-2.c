// Room: /open/gblade/port/room/p3-2.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����ʯ��· , ո�µĽ��� , ���ٵĽ־� , �������Ǹ�
ϣ��֮���� . ��·�����νӸۿ� , �����Ƿ��ָ����Ŀ�ջ
��Ϊͨ�������Ĵ����ÿ� , ��ջ����ǳ�֮�� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"p4-1.c",
  "south" : __DIR__"p3-3.c",
  "north" : __DIR__"p3-1",
]));

  setup();
}
