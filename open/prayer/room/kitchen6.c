//u/r/rence/room/kitchen6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

ʥ�����̳�ĳ���. 

LONG);
  set("outdoors", "/u/r/rence/room");
  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/u/r/rence/room/train1-19",		//`����
	"east" : "/u/r/rence/room/kitchen7",		//`����
	"south" : "/u/r/rence/room/kicthen2",		//`����
	"west" : "/u/r/rence/room/kitchen5",		//`����
]));

  setup();
}
 
