// Room: /open/capital/room/r21.c

inherit ROOM;

void create ()
{
  set ("short", "�ᰲ��");
  set ("long", @LONG
����������۵�������������С�ĺ�ͬ����������ɫ�Ĵ��ţ���
��һ������С��Ϫ��Ϫ���ˮ���úܻ���������û���ڶ���

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/capital/room/r20",
  "south" : "/open/capital/room/r22",
]));

  set("gopath", "north");

  setup();
}
