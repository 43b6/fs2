//open/prayer/room/2elder4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ִ�����Ϸ�");
  set ("long", @LONG

	    ǰ����һ��ʥ��������ڶ�����������
	��������ʲôС�£�����ִ�����ϴ������治
	����Ҫ�Ƿ��˴�����Σ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/2elder3",		//`���Ϸ�
	"east" : "/open/prayer/room/2elder7",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}
 
