// Room: /open/main/room/maiu-4.c
inherit ROOM;

void create ()
{
  set ("short", "С��㳡");
  set ("long", @LONG
�߽��˴���,һ�����εĹ㳡������ǰ,��������ʿ������
������,Ԥ���Կ����������,��Ķ���,�Ϸ�,��������һ��С
��.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"maiu-7",
  "north" : __DIR__"maiu-6",
  "west" : __DIR__"maiu-5.c",
  "east" : __DIR__"maiu-3",
]));
  set("outdoors", "/open/main");

  setup();
}
