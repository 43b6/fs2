// Room: /open/main/room/d8.c

inherit ROOM;

void create()
{
	set("short", "ɳĮ");
	set("long", "������������ɳĮ������, ��������ȥ��һƬ�����͵Ĳ�ԭ, 
ż����Ҳ�޳�û, ���ȵ�����, ��������·𿴵��ϼ��Ƶ���ܰ��
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s9",
  "west" : __DIR__"s6",
  "north" : __DIR__"d1",
  "east" : __DIR__"d9",
]) );

  set("outdoors", "/open/main" );


  setup();
}
