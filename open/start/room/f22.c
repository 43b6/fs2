// Room: /open/start/room/f22.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�㿴��һƬ�����͵ĵ�������г����ŵ��ݵ���ζ��
�Ĵ������ĵ����������ڹ�����ũ���ǣ�������һ����׼��
ũ�徰��������ȥ���Կ������ƴ塣
    �㿴���ϱ���һ��С·����֪ͨ���δ���

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/start/room/r1",
  "north" : "/open/start/room/f17",
  "west" : "/open/start/room/f21",
  "east" : "/open/start/room/f23",
]));

  set("outdoors", "/open/start");

  setup();
}
