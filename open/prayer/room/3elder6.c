//open/prayer/room/3elder6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���ɳ��Ϸ�");
  set ("long", @LONG

	    �㼺�����˽��ɴ����ˣ����������ǽ���
	���ϵİ칫�ң������߼����߶���ʥ�������
	������������������ɳ��ϵĹ���Ӧ�ò���

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" :1 ,		//����
]));
  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/open/prayer/room/train1-15",		//`����
	"north" : "/open/prayer/room/3elder5",		//`���Ϸ�
	"south" : "/open/prayer/room/3elder7",		//`���Ϸ�
	"east" : "/open/prayer/room/3elder3",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}
 
