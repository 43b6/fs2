// Room: /open/main/room/s17.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "	���������Ǿ��ǵ������ţ���Ƭ��ԭʮ�ֵ�������
	�Ϸ��и����־��Ĳ�������

");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s16",
  "south" : __DIR__"s21",
   "north" : "/open/capital/room/D03",
  "east" : __DIR__"s18",
]) );

  set("outdoors", "/open/main" );

  setup();
}
