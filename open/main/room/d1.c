// Room: /open/main/room/d1.c

inherit ROOM;

void create()
{
	set("short", "ɳĮ");
	set("long", "������������ɳĮ������, ��������ȥ��һƬ�����͵Ĳ�ԭ, 
ż����Ҳ�޳�û, ���ȵ�����, ��������·𿴵��ϼ��Ƶ���ܰ��
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"s3",
  "south" : __DIR__"d8",
  "east" : __DIR__"d2",
]) );

  set("outdoors", "/open/main" );


  setup();
}
