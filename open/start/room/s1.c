// Room: /open/start/room/s1.c

inherit ROOM;

void create ()
{
  set ("short", "���ƴ�");
  set ("long", @LONG
ƽ������Ĵ�ׯ�����Լ����Ķ���ƽ�������ᣬ
û��ʲô����Ľ�����Զ���Ϸ���ȥ��һƬ�����͵�
����м���ũ���������ڵĸ�����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/start/room/startroom",
  "east" : "/open/start/room/s2",
]));

  set("outdoors", "/open/start");

  setup();
}
