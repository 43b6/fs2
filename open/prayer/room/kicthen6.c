//open/prayer/room/kitchen6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    �������ʥ��̵Ļ﷿�ˣ����ܴ�������
	����ζ��ʹ�㲻�Ծ��Ķ��Ӷ��������������
	���﷿������˶��һ�£�

LONG);
  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/open/prayer/room/train1-19",		//`����
	"east" : "/open/prayer/room/kicthen7",		//`����
	"south" : "/open/prayer/room/kicthen3",		//`����
	"west" : "/open/prayer/room/kicthen5",		//`����
]));
   set("light_up", 1);

  setup();
}
 
