// Room: /open/main/room/s9.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

    set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"s8",
  "south" : __DIR__"L3",
  "north" : __DIR__"d8",
]) );

  set("outdoors", "/open/main" );

  setup();
}
