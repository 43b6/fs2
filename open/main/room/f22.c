// Room: /open/main/room/f22.c

inherit ROOM;

void create ()
{
	set("short","��·");
  set ("long", @LONG
����·�ᴩ��ɭ�� , �����Ǹߴ����ľ , ����һ������
���ڴ� , �ҿ��µ� , �������� , ���ڵ�·�ν����Ϸ����
���ָ� , ���ﲻ���ǰ����ҹ�� , �������������� , ����
�Լž���ɭ�� , ��ӳ��Ȥ .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/squirt" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"r35",
  "south" : __DIR__"s27",
  "west" : __DIR__"f21",
  "east" : __DIR__"f23",
]));

  setup();
}
