// Room: /open/main/room/s27.c

inherit ROOM;

void create()
{
	set("short","��·");
	set("long",
"��·������һ���޼ʵĴ��ԭ , ������һƬԭʼɭ�� ,
�㿴���Ϸ��������˵ĳ��� , ��ž��ǽ�������ͨ�����Ͷ�
���ٷ�չ�ķ��ָ۰� !

");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s31",
  "north" : __DIR__"f22",
  "west" : __DIR__"s26",
  "east" : __DIR__"s28",
]) );

  set("outdoors", "/open/main" );

  setup();
}
