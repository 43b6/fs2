// Room: /open/capital/room/r61.c

inherit ROOM;

void create ()
{
  set ("short", "����·��");
  set ("long", @LONG
������ͨ�����ӻʳ���ڼ����������ŵĽֵ�, �Ǿ��ǵ���Ҫ��·
�������ߵĹ㳡�Ǹ�ͨ��������ľ�������

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r60",
  "north" : __DIR__"r74",
  "east" : __DIR__"r62",
]));

  set("outdoors", "/open/capital");

  setup();
}
