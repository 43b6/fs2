// Room: /open/capital/room/r22.c

inherit ROOM;

void create ()
{
  set ("short", "�ᰲ��");
  set ("long", @LONG
��ɫ�Ĵ��š����µ�СϪӦ������ܽ�غ��ġ������ǵ��������
�ŵģ���˼�����������̩�񰲣����շ�����ʳ��

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/capital/room/r21",
  "south" : "/open/capital/room/r23",
]));

  set("gopath", "north");

  setup();
}
