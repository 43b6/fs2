#include <room.h>
#include <ansi.h>
#include "/open/open.h"
inherit ROOM;
void do_west();
void create()
{
          set("short","ѩȪ����");
        set("long",@LONG
������ѩȪ���ľ�ͷ����ʥȪˮ������ǰ������ȴ��
��ʥ����ǿ�İ׷���ħ�ڴ˰��ء�
LONG);
        set("exits", ([
		"east":__DIR__"water5",
      ]));
	set("objects",([SNOW_NPC"sec_anm3":1]));
        setup();
}
void init()
{
      add_action("do_drink","drink");
     add_action("do_search","search");
    add_action("do_enter","enter");
}
int do_drink(string str)
{
    if(str!="water")
       return 0;
	if(this_player()->query("quests/get_tiger")!=1)
     {
        message_vision(
       HIW + "$N����ѩȪʥˮ���õ���һ��������\n" NOR,this_player());
	this_player()->set("quests/get_tiger",1);
	this_player()->set("sec_kee","tiger");
        return 1;
     }
          tell_object(this_player(),"���Ѿ��ȹ�ʥˮ���ٺ�Ҳû�á�\n");
      return 1;
}
int do_search()
{
	write("�㷢��ʯ�ڵı߱���һ��С��(hole)��\n");
    this_player()->set_temp("search",1);
   return 1;
}
int do_enter(string str)
{
    if(this_player()->query_temp("search")!=1)
        return 0;
   if(str!="hole")
      return 0;
    tell_object(this_player(),"���߽���С����\n");
     this_player()->move(__DIR__"s_hole");
    return 1;
}
