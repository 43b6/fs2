//open/prayer/room/1elder7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�������Ϸ�");
  set ("long", @LONG

	    ������һ��ʥ��������ڶ�����������
	���������������ĸо���Ī��������ʲô�¶�
	��������

LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/1elder6",		//`���Ϸ�
	"east" : "/open/prayer/room/1elder4",		//`���Ϸ�
]));
 set("light_up", 1);

  setup();
}
 
