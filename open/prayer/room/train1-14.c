//open/prayer/room/train1-14

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    �������߾��ǽ��ɷ��ˣ������Ǵ�������
	ͨ��ʥ��̵ĸ����ŵ�·����ǰ��һ��ֵ���
	������Ѳ�飮

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/duty" : 1,		
]));
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/prayer/room/train1-19",		//`����
	"north" : "/open/prayer/room/train1-9",		//`����
]));

  setup();
}
 
