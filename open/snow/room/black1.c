#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
 set("short","������");
  set ("long", @LONG
������ѩ��ɽ�ߵļ����£������ﲻʱ���𼱷磬�������˺��»��
��ɽ��֮�£��������ﲻʱ��Щ���������ڴ˳��룬��֪�Ƿ񰵲����� ?
��ɽ�ȱ���������(rope)�������£���֮�����ζ��ã���ɽ�ȿ���ȥ��
��Լ�������ɸߣ�Ҫ��ˤ��ȥ�������������ˡ�
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
	"southup":__DIR__"water2",
]));

  set("light_up", 1);

  setup();
}
void init()
{
	add_action("do_look","look");
	add_action("do_catch","catch");
	add_action("do_climb","climb");
}
int valid_leave(object me,string dir)
{
	if(dir=="southup")
	me->delete_temp("catch_robe");
	return 1;
}
int do_look(string str)
{
	if(str=="robe")
	{
		tell_object(this_player(),"�㿴����������ֱͨ�·�������֪������ͨ���ǡ�\n");
		return 1;
	}
	return 0;
}
int do_catch(string str)
{
if(str=="rope")
	{
		message_vision("$N������ץס���ӡ�\n",this_player());
		this_player()->set_temp("catch_robe",1);
		return 1;
	}
	return 0;
}
int do_climb(string str)
{
if(str!="down" && str != "rope") return 0;

message_vision("$Nץס����������������ȥ,���Ǻ����޵װ����,������������\n",this_player());
        this_player()->move("/open/snow/room/black1");
	return 1;
}
