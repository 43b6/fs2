//open/prayer/room/punch1-5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�������ķ���");
  set ("long", @LONG

    ��������ʥ��̸������븱�������˵ķ��䣬�ڷ���֮����һλ���
���˵ĸ��ˣ�����Ĺ�����������һ˿��Թ�����飬�ѵ������������к�
����֮��.... 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/wife2" : 1,        	//��ʦ
]));  
set("exits", ([ /* sizeof() == 1 */
	"out" : "/open/prayer/room/punch1-3",		//`��ʦ
]));
  set("light_up", 1);

  setup();
}
 
