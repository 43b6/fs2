// room:open/doctor/room/d8.c
// made by adam..

inherit ROOM;

void create ()
{
	set("short","����������");
  set ("long", @LONG

   ������������Ļ��ԣ����������ŵ�������..

LONG);

  set("light_up", 1);
  set("outdoors", "/open/doctor");	
	set("objects",([
 	]));
  set("exits", ([ /* sizeof() == 2 */
      "north" : __DIR__"d5",
      "east" : __DIR__"d9",
      ]));
  setup();
}
