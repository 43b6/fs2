//open/prayer/room/kicthen3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ��ǰ��������ϣ�����������ζ�ɿڵ�
	���ˣ��������ζ��ʹ��ͻȻ�о��������е�
	���ˣ�����͵͵����һ�£�

LONG);
  set("exits", ([ /* sizeof() ==  4*/
	"east" : "/open/prayer/room/kicthen4",		//`����
	"north" : "/open/prayer/room/kicthen6",		//`����
	"south" : "/open/prayer/room/kicthen1",		
	"west" : "/open/prayer/room/kicthen2",		
]));
   set("light_up", 1);

  setup();
}
 
