//open/prayer/room/3elder5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���ɳ��Ϸ�");
  set ("long", @LONG

	    �����ǰ�����������������໥���У���
	�����ô����죬�������ƺ�û��Ҫͣ������
	Ϣ����˼��

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee4" :  1,		//����
  "/open/prayer/npc/trainee1" :  1,		//����

]));
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/3elder6",		//`���Ϸ�
	"east" : "/open/prayer/room/3elder2",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}
 
