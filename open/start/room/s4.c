// Room: /open/start/room/s4.c

inherit ROOM;

void create ()
{
  set ("short", "���ƴ�");
  set ("long", @LONG
ƽ������Ĵ�ׯ�����Լ����Ķ���ƽ�������ᣬ
û��ʲô����Ľ�����Զ���Ϸ���ȥ��һƬ�����͵�
����м���ũ���������ڵĸ�����
    ����ķ����Ǵ�������������ĵط���
����������վ.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/start/room/s2",
  "south" : "/open/start/room/s6",
  "east" : "/open/start/room/s5",
  "north" : "/open/trans/room/room5.c",
]));

  set("outdoors", "/main/start");

  setup();
}
