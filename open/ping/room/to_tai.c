// Room: /open/main/room/r22.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
������ƽ�ϳ��Ͻ�, һ·�Ϸ羰����, ʮ������
��ԶԶ��ȥ, �ϱ��ƺ�������ɽ, ����ס����, ��Ҫ
ȥһ̽����.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"road12",
  "south" : "/open/tailong/room/aa0.c",
]));
  set("outdoors", "/open/main");

  setup();
  replace_program(ROOM);
}
