// Room: /open/start/room/s2.c

inherit ROOM;

void create ()
{
  set ("short", "���ƴ�");
  set ("long", @LONG
ƽ������Ĵ�ׯ�����Լ����Ķ���ƽ�������ᣬ
û��ʲô����Ľ�����Զ���Ϸ���ȥ��һƬ�����͵�
����м���ũ���������ڵĸ�����
    ����ķ������ǿ��š�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/start/room/s3",
  "west" : "/open/start/room/s1",
  "east" : "/open/start/room/s4",
]));

  set("outdoors", "/open/start");

  setup();
}
