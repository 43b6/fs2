//open/prayer/room/2elder5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ִ�����Ϸ�");
  set ("long", @LONG

	    ��ǰ�治Զ������һλ�����������书��
	�������û������磬����ִ�����ϵ��书����
	�ڴ�������֮�£�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/2elder6",		//`���Ϸ�
	"west" : "/open/prayer/room/2elder2",		//`���Ϸ�
]));
  set("light_up", 1);
  setup();
}
 
