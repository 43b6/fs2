// Room: /open/gsword/room/g3-15.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����ͨ���ɽ������޾ӵ�ľ������, ���������������ĳ�����, �е�ֻ��
�����û���, �ͺ���Ĺ��ߡ��������ų���֮�޾�, �����Ƿ���֮�޾�, ���ϱ�
��������֮�� -- �ų˷�֮�޾� .

LONG);

  set("exits", ([ /* sizeof() == 4 */
    "west" : "/open/gsword/room/g3-20",
    "north" : "/open/gsword/room/g3-16",
    "south" : "/open/gsword/room/g3-18",
    "east" : "/open/gsword/room/g3-19",
]));

  set("light_up", 1);

  setup();
}
