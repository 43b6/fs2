//open/prayer/room/punch1-10

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    ��վ������ʥ��̵�ʥ������ǰ��ͻȻ����һĪ�����𾴣���Ϊ����
ʥ�����оų�֮�ߣ����ұ�������һ�黨��ʯ��Ȼ���εģ�û��˿���ӹ�
�����ƺ��������ʥ��̵ĺ��� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,		//����
]));
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/punch1-2",		//`����
	"south" : "/open/prayer/room/punch1-13",	//`����
	"west" : "/open/prayer/room/punch1-11",		//`����
	"east" : "/open/prayer/room/punch1-9",		//`����

]));
  set("light_up", 1);
  setup();
}
 
