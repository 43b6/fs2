// Room: /open/main/room/maiu-1.c
inherit ROOM;

void create ()
{
  set ("short", "���յ���");
  set ("long", @LONG
���������յ�����,���׽����������,������һ���Ű���
���ڹ�������֮��,�����յý�ˮ��������,���۲���,�����Ŀ�
����.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"maiu-1.c",
  "west" : __DIR__"maiu-3.c",
]));

  setup();
}
