// Room: /open/main/room/r13.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "	��·�����￪ʼת���򶫣�������ɭ�ֲ���Ũ�ܣ�
	��������������ʱ��ͨ�е����ӡ�

");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f13",
  "south" : __DIR__"r20",
  "east" : __DIR__"r14",
]) );

  set("outdoors", "/open/main" );


  setup();
}
