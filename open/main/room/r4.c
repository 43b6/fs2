// Room: /open/main/room/r4.c

inherit ROOM;

void create()
{
	set("short", "���а���");
	set( "build", 10 );
	set("long", "��·����ͻȻ��������������Ե�ɽ��ֱ��·ǰ���ڴ��γ�
һ�����ڣ�ӵ��һ�򵱹أ����Ī�е����ƣ����гǿ������գ�
��֪�ɹ����ٴ�����. ��·�ڴ˳��ϱ�����.
");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"[2]",
  "south" : __DIR__"r6",
]) );

  set("outdoors", "/open/main" );

  setup();
}
