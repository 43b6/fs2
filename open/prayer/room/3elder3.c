//open/prayer/room/3elder3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���ɳ��Ϸ�");
  set ("long", @LONG

	    �Ӷ��ߵĴ��Ž�ȥ�͵��˽������ˣ�����
	���ж�λ�������������ش��ţ��������ɳ���
	����ִ�н̹��ˣ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 2,		//����
]));
  set("exits", ([ /* sizeof() ==  4*/
	"west" : "/open/prayer/room/3elder6",		//`���Ϸ�
	"north" : "/open/prayer/room/3elder2",		//`���Ϸ�
	"south" : "/open/prayer/room/3elder4",		//`���Ϸ�
	"east" : "/open/prayer/room/3elder1",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}
 
