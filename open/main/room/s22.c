// Room: /open/main/room/s22.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

 set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s21",
  "south" : __DIR__"m22",
  "north" : __DIR__"s18",
  "east":"/open/quests/snake/r-01",
]) );

  set("outdoors", "/open/main" );

  setup();
}
