// Room: /open/ping/room/road12.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
������ƽ�ϳ��Ͻ�, ��ԶԶ��ȥ, �Ϸ��ƺ�����
��ɽ, ��������Լ����Сɽ��������Ũ����, ����ס
����, ��Ҫȥһ̽������
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"to_tai.c",
  "north" : __DIR__"road11",
  "westup": __DIR__"graveyard",
]));
  set("outdoors", "/open/ping");

  setup();
  replace_program(ROOM);
}

                               
