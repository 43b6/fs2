//open/prayer/room/train1-10

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
	"south" : "/open/prayer/room/train1-15",		//`����
	"north" : "/open/prayer/room/train1-5",		//`����
]));

  setup();
}
 
