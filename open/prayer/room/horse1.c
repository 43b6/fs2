//open/prayer/room/horse1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG

��������    ���ǽ�������ר�õ���������ר�˵Ŀ�
	�ܣ������������������ɾ����ˣ�����
	��ǰ����ԣ���������ǧ���צ�Ʒɵ磮

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/horse-looker" : 1,		//���
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  1*/
	"west" : "/open/prayer/room/horse3",		//`��
]));

  setup();
}
 
