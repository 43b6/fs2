// Room: /open/start/room/f18.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�㿴��һƬ�����͵ĵ�������г����ŵ��ݵ���ζ��
�Ĵ������ĵ����������ڹ�����ũ���ǣ�������һ����׼��
ũ�徰��������ȥ���Կ������ƴ塣

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/start/room/f13",
  "west" : "/open/start/room/f17",
  "south" : "/open/start/room/f23",
  "east" : "/open/start/room/f19",
]));

  set("outdoors", "/open/start");


  setup();
}
