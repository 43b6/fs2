//open/prayer/room/1elder2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�������Ϸ�");
  set ("long", @LONG

	    ������һ��С��ͤ������ͤ�����ܣ��Ի�
	ʢ������������ʹ����һ��������ͤ����Ϣ
	Ƭ�̵��뷨��

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//����
]));

  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/1elder3",		//`���Ϸ�
	"west" : "/open/prayer/room/1elder5",		//`���Ϸ�
]));
 set("light_up", 1);

  setup();
}
 
