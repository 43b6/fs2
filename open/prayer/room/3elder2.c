//open/prayer/room/3elder2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���ɳ��Ϸ�");
  set ("long", @LONG

	    ������ǽ��ɳ��ϵİ칫���ˣ�����û��
	�����ϵ��ˣ�������ϰ��Ų��ٵ��飬�����
	���ϼ������йؽ̹�����ϣ�

LONG);
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/3elder3",		//`���Ϸ�
	"west" : "/open/prayer/room/3elder5",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}
 
