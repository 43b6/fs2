// Room: /open/capital/room/h16.c

inherit ROOM;

void create ()
{
  set ("short", "�ܲ���ͬ");
  set ("long", @LONG
	�����������ݣ�����������һ����������ͷд�ţ�

	             �����챦�����գ�

  	             ��ͭ�����಻�ܡ�

	���ϵĺ���д�ţ����������ˣ��䵱����Ǣ����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/vendor" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"h15",
  "north" : __DIR__"caphock",
  "east" : __DIR__"r44",
]));

  setup();
}
