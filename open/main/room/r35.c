// Room: /open/main/room/r35.c

inherit ROOM;

void create ()
{
	set("short","��·");
  set ("long", @LONG
��·�ڴ˹ᴩ��һƬԭʼɭ�� , ��ʱ��ЩС���ӻ��ܵ�·��
�� , �涺Ȥ , һ������С��������ȥ , ��֪ͨ���δ� , ��·
�������ϱ����� .

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f22",
  "west" : __DIR__"f18",
  "north" : __DIR__"r33",
  "east" : __DIR__"r36",
]));

  set("outdoors", "/open/main");

  setup();
}
