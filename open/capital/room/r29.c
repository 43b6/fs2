// Room: /open/capital/room/r29.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
���ڽ������ţ�ʯ��·�ϲ�ʱ��������ȥȥ�������Ϻ�������
����������������������䡣������һ�Ų����۵���լ��
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r28",
  "east" : __DIR__"r30",
]));

  set("gopath", "west");
  set("gopath2", "west");

  setup();
}
