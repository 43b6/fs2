//u/r/rence/room/kitchen7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

ʥ�����̳�ĳ���. 

LONG);
  set("outdoors", "/u/r/rence/room");
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/u/r/rence/room/kicthen4",		//`����
	"west" : "/u/r/rence/room/kitchen6",		//`����
]));

  setup();
}
 
