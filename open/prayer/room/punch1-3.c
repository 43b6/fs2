//open/prayer/room/punch1-3 

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ʥ�����̳");
  set ("long", @LONG

    һ�����⣬��е���֣�Ϊ����������������̳�ķ�������С����
����һ������Ϊһ�����˳ߵľ޺���վ�������ϣ�������ͽ�ǵĻر���
������һһ�����ţ�����Ҳ��ʥ��̸������ķ��䣬�Ǿ޺�Ī����ʥ���
�ĸ������ˣ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/warrior" : 1,        	//������
]));
  set("exits", ([ /* sizeof() == 3 */
	"enter" : "/open/prayer/room/punch1-5",		//�������ķ���
	"south" : "/open/prayer/room/punch1-7",		//����
	"west" : "/open/prayer/room/punch1",		//����
]));
  set("light_up", 1);

  setup();
}
 
