//open/prayer/room/1elder5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�������Ϸ�");
  set ("long", @LONG

	    ��������һλ���ӣ���һ���Ե����ڵ���
	��������֪����������ƿ�����������ڴ����
	�㣬�������ڵȴ������ϵ����ӣ�

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/1elder6",		//`���Ϸ�
	"east" : "/open/prayer/room/1elder2",		//`���Ϸ�
]));
 set("light_up", 1);

  setup();
}
 
