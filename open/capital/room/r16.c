// Room: /open/capital/room/r16.c

inherit ROOM;

void create ()
{
  set ("short", "�ֵ�");
  set ("long", @LONG
������������ǽ֮�䣬��ߵ����������¥�ߵĻ�ɫ��ʯǽ������
�ž��ǵİ�ȫ���ұ�����Զ��ĺ�ɫǽ��Ҳ������¥��ô�ߣ�������
���Լ�����ֻ�Ǽ���é���ݡ�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/capital/room/r18",
  "north" : "/open/capital/room/r02",
]));

  set("gopath", "north");

  setup();
}
