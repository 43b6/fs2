//open/prayer/room/3elder7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���ɳ��Ϸ�");
  set ("long", @LONG

	    ������һ��ʥ����ӣ��������ɳ��ϴ���
	�ڶ�����������λʥ������������¶�����
	����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/3elder6",		//`���Ϸ�
	"east" : "/open/prayer/room/3elder4",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}
 
