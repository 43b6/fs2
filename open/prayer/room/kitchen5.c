//u/r/rence/room/kitchen5

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
	"south" : "/u/r/rence/room/kicthen2",		//`����
	"east" : "/u/r/rence/room/kitchen6",		//`����
]));

  setup();
}
 
