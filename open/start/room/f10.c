// Room: /open/start/room/f10.c

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
  "west" : "/open/start/room/f9",
  "north" : "/open/start/room/f5",
  "south" : "/open/start/room/f15",
]));

  set("outdoors", "/open/start");

  setup();
}
