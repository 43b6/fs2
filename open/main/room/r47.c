// Room: /open/main/room/r47.c

inherit ROOM;

void create ()
{
  set ("short", "����С·");
  set ("long", @LONG
�����Ѿ��������е�����ˣ���Ȼ���������Ĺ�Ͻ��Χ��
�����ڴ˳����¿��������������ı���. �����ƺ��е�����û
������Լ�С��. ��·�ڴ˳ʶ�����.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"L19",
  "west" : __DIR__"r46",
  "south" : __DIR__"f29",
  "east" : __DIR__"r48",
]));

  set("outdoors", "/open/main");

  setup();
}
