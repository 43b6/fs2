//open/prayer/room/1elder3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�������Ϸ�");
  set ("long", @LONG

	    �����߾͵��˴������ϵĴ����ˣ����ſ�
	����һλ�����������书���������û�������
	������Ǵ������������ڵĵ����ˣ�

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee3" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  4*/
	"west" : "/open/prayer/room/1elder6",		//`���Ϸ�
	"north" : "/open/prayer/room/1elder2",		//`���Ϸ�
	"south" : "/open/prayer/room/1elder4",		//`���Ϸ�
	"east" : "/open/prayer/room/1elder1",		//`���Ϸ�
]));
 set("light_up", 1);

  setup();
}
 
