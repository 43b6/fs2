// Room: /open/start/room/f4.c

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
  "west" : "/open/start/room/f3",
  "south" : "/open/start/room/f9",
  "east" : "/open/start/room/f5",
]));

  set("outdoors", "/open/start");

  setup();
}
