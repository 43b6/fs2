//open/prayer/room/1elder4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�������Ϸ�");
  set ("long", @LONG

	    ������Ǵ������ϵİ칫���ˣ�����û��
	�����ϵ��ˣ��ò����������䳡ָ�������ŵ�
	�����ˣ�

LONG);

  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/1elder3",		//`���Ϸ�
	"west" : "/open/prayer/room/1elder7",		//`���Ϸ�
])); 
 set("light_up", 1);

  setup();
}
 
