// Room: /open/start/room/f16.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�㿴��һƬ�����͵ĵ�������г����ŵ��ݵ���ζ��
�Ĵ������ĵ����������ڹ�����ũ���ǣ�������һ����׼��
ũ�徰��������ȥ���Կ������ƴ塣

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/start/room/f21",
  "north" : "/open/start/room/f11",
  "east" : "/open/start/room/f17",
]));

  set("outdoors", "/open/start");

  setup();
}
