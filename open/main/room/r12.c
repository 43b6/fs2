// Room: /open/main/room/r12.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "�����Ǵ���վͨ����¬�رؾ���Ҫ��, ������һƬƽ����̨��
�������Ǹߵ����������.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r19",
  "north" : __DIR__"r10",
  "west" : __DIR__"m7",
]) );

  set("outdoors", "/open/main" );


  setup();
}
