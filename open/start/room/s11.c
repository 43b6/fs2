// Room: /open/start/room/s11.c

inherit ROOM;

void create ()
{
  set ("short", "���ƴ�");
  set ("long", @LONG
ƽ������Ĵ�ׯ�����Լ����Ķ���ƽ�������ᣬ
û��ʲô����Ľ�����Զ���Ϸ���ȥ��һƬ�����͵�
����м���ũ���������ڵĸ�����
    �����Ǵ峤�ķ��ᡣ

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/start/room/s10",
  "north" : "/open/start/room/s12",
  "east" : "/open/start/room/s14",
]));

  set("outdoors", "/open/start");

  setup();
}
