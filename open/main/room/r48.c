// Room: /open/main/room/r48.c

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
  "north" : __DIR__"L20",
  "west" : __DIR__"r47",
  "south" : __DIR__"f30",
  "east" : __DIR__"r49",
]));

  set("outdoors", "/open/main");

  setup();
}
