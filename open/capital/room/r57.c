// Room: /open/capital/room/r57.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����������·��, ������ͨ�����ӻʳ���ڼ����������ŵĽֵ�, 
�Ǿ��ǵ���Ҫ��·, ������������������, �����Ĵ�ֱ���һ����ΰ
������

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/capital/room/r53",
  "west" : "/open/capital/room/r56",
  "east" : "/open/capital/room/r58",
]));

  set("outdoors", "/open/capital");

  setup();
}
