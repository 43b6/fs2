// Room: /open/capital/room/r26.c

inherit ROOM;

void create()
{
	set("short","����۵�");
	set("long",@LONG
�����ĳ�������·�ߵ����Ŵ�����֦Ҷï�ܣ��������ƺ������
Զ���ݸ����ĳ���˵����Щ�������а�����ʷ�ˣ������˺ü����Ļʵ�
����������������ů��

LONG);


  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r27",
  "north" : __DIR__"r25",
]) );

  set("gopath", "north" );

  setup();
}
