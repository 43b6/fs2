// Room: /open/start/room/f23.c

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
  "north" : "/open/start/room/f18",
  "west" : "/open/start/room/f22",
  "east" : "/open/start/room/f24",
]));

  set("outdoors", "/open/start");

  setup();
}
