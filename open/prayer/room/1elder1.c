//open/prayer/room/1elder1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�������Ϸ�");
  set ("long", @LONG

	    ʥ����ܶ���λ���̳���֮һ�Ĵ���������
	ר���İ칫�����������������ﳭд��ѧ���ķ�
	...�����������ȵķ���

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/gonfu-elder" : 1,		//��������
]));
  set("exits", ([ /* sizeof() ==  1*/
	"west" : "/open/prayer/room/1elder3",		//`���Ϸ�
]));
 set("light_up", 1);
  set("valid_startroom", 2);

  setup();
}
