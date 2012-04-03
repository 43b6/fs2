// Room: /open/main/room/r6.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set( "build", 6 );
	set("long", "�ߵ�����,���ѽ���Զ���˼�,���ڿ������������,ȴ��
����һ�ֲ�ã�ĸо�,��·�ڴ�ͨ�򱱷����Ϸ�,����ɽ,�Ѿ���
�㱱����Զ��.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"r4",
  "south" : __DIR__"r9",
  "west" : __DIR__"m1",
  "east" : __DIR__"F7",
]) );

  set("outdoors", "/open/main" );

  setup();
}
