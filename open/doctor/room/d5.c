// room:open/doctor/room/d5.c made by adam..

inherit ROOM;

void create ()
{
	set("short","һ��������");
  set ("long", @LONG

   ������������Ļ��ԣ����������ŵ�������..

LONG);

  set("light_up", 1);
  set("outdoors", "/open/doctor");	
	set("objects",([
 	]));
  set("exits", ([ /* sizeof() == 3 */
//      "north" : __DIR__"d4",    
      "south" : __DIR__"d8",
      "east" : __DIR__"d6",
      ]));
  setup();
}
