//open/prayer/room/1elder6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�������Ϸ�");
  set ("long", @LONG

	    ��ǰ����һλ���ӣ�������ϰ����������
	�̵���������ֻ����λ���Ӻ����б��������
	��ϰ��һ��ʱ���ˣ�

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/open/prayer/room/train1-5",		//`����
	"north" : "/open/prayer/room/1elder5",		//`���Ϸ�
	"south" : "/open/prayer/room/1elder7",		//`���Ϸ�
	"east" : "/open/prayer/room/1elder3",		//`���Ϸ�
]));
 set("light_up", 1);

  setup();
}
 
