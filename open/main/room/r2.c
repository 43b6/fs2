// Room: /open/main/room/r2.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "�����Ǵ���վͨ����¬�رؾ���Ҫ��, ���ܵľ�ɫʵ��������
��������, ɳĮ��ԭ����Ⱥ��, ·�ϲ�ʱ����ϡ��Źֵ���������
");

  set("exits", ([ /* sizeof() == 4 */
  "northeast" : __DIR__"r1",
  "southeast" : __DIR__"p1",
  "southwest" : __DIR__"r3",
  "northwest" : __DIR__"d9",
]) );

  set("outdoors", "/open/main" );

  setup();
}
