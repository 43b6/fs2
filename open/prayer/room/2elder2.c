//open/prayer/room/2elder2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ִ�����Ϸ�");
  set ("long", @LONG

    	    ������ǰ��һ��С��ͤ������ͤ�����ܣ�
	�ٻ����ޣ����ﻨ�㣬������һ������������
	�о���

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 2,		//����
]));
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/2elder3",		//`���Ϸ�
	"east" : "/open/prayer/room/2elder5",		//`���Ϸ�
]));
 set("light_up", 1);

  setup();
}
 
