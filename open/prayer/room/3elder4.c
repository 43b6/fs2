//open/prayer/room/3elder4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���ɳ��Ϸ�");
  set ("long", @LONG

	    ������һ��Сʯ������ʯ�������ܣ��Ի�
	ʢ�������ﻨ�㣬ʹ����һ������������Ϣ��
	Ϣ���뷨��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/3elder3",		//`���Ϸ�
	"west" : "/open/prayer/room/3elder7",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}
 
