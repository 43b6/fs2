// Room: /open/main/room/r10.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "�����Ǵ���վͨ����¬�رؾ���Ҫ��, ������һƬ����, ��������
һ���߸�������ɽͷ���ǵ��̵ķ�Դ������ɽ��
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r12",
  "north" : __DIR__"r7",
  "east" : __DIR__"f11",
]) );

  set("outdoors", "/open/main" );


  setup();
}
