// Room: /open/capital/room/r28.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
���ϵ�С��������ĵ�������ȣ�����Ե�������ˣ��ϱ߾���
���ʼ�̵ĳ�ǽ�����Կ���ʿ���ڳ�ǽ������Ѳ���š�������ȥ������
��۵���
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"r30",
  "northwest" : __DIR__"r27",
]));
  set("gopath", "northwest");
  set("gopath2", "east");

  setup();
}
