//open/prayer/room/2elder3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ִ�����Ϸ�");
  set ("long", @LONG

	    �����ߵĴ��Ž�ȥ�͵���ִ�����ϵĴ���
	�ˣ����ſ��ж�λ�������������ش��ţ�����
	ִ��������ִ�н̹��ˣ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee3" :2,		//����
]));
  set("exits", ([ /* sizeof() ==  4*/
	"east" : "/open/prayer/room/2elder6",		//`���Ϸ�
	"north" : "/open/prayer/room/2elder2",		//`���Ϸ�
	"south" : "/open/prayer/room/2elder4",		//`���Ϸ�
	"west" : "/open/prayer/room/2elder1",		//`���Ϸ�
]));
  set("light_up", 1);
  setup();
}
 
