// Room: /open/main/room/r7.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "�����Ǵ���վͨ����¬�رؾ���Ҫ��, ���ߵ������һ��С�Ļ��
�������̽�ȥ, ������һƬ��ѹѹ������, û����ñ��ڴ˴�������
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r10",
  "north" : __DIR__"r5",
  "west" : __DIR__"F11",
  "east" : __DIR__"p13",
]) );

  set("outdoors", "/open/main" );

  setup();
}
