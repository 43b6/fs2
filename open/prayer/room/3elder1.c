//open/prayer/room/3elder1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���ɳ��Ϸ�");
  set ("long", @LONG

	    ����ǰ����λ���ǣ�ʥ����ܶ���λ���̳�
	��֮һ�Ľ��ɳ��ϣ���������������룬������
	����һλ���ӰѾ��Ի�����

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/prayer/npc/behavior-elder" : 1,		//���ɳ���
  "/open/prayer/npc/man3" : 1,  
]));
  set("exits", ([ /* sizeof() ==  1*/
	"west" : "/open/prayer/room/3elder3",		//`���Ϸ�
]));
  set("light_up", 1);
  set("valid_startroom", 2);

  setup();
}
 
