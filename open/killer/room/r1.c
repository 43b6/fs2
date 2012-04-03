#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","����");
  set ("long", @LONG
˳������(rope)���£�һֱ�����������м䣬�㷢��������һ����Ѩ
��Ѩ�￴���������ģ���֪������ʲô�������й���? �����б���
����ʲô�˲�����? Ҫ����? ����Ҫ��?
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
	"enter":__DIR__"r2",
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
	if(dir=="enter")
	me->delete_temp("catch_robe");
	return 1;
}
int do_look(string str)
{
if(str=="rope")
	{
  tell_object(this_player(),"�㿴���������ӹ��������ϣ�������ץ��(catch)������\n");
		return 1;
	}
	return 0;
}
int do_catch(string str)
{
        if(str=="rope")
	{
        message_vision("$N������ץס���ӣ����ֳ��ھ����Ϸ�(climb up)��\n",this_player());
                this_player()->set_temp("catch_rope",1);
		return 1;
	}
	return 0;
}
int do_climb(string str)
{
	if(str!="up") return 0;
	message_vision("$Nץס����������������ȥ��\n",this_player());
        this_player()->move("/open/snow/room/black1");
	return 1;
}
