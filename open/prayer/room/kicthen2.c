//open/prayer/room/kicthen2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    �����Ǵ�����ʣ��Ĳ����ĵط��������
	����Щ���Ҳ��{����������Ķ������������
	���ǿ�Щ�뿪���ˣ�

LONG);
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/kicthen5",		//`����
	"east" : "/open/prayer/room/kicthen3",		//`����
]));
   set("light_up", 1);

  setup();
}
 
