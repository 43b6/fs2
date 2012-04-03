#include <room.h>
#include "/open/open.h"
inherit ROOM;

int num_of_mob;

string call_mob();
string do_kick();

void create()
{
        set("short","��Ѩ");
        set("long",@LONG
������һ������, ������ǰ�������Ŀ���, ���ֱ����Ϊ��һ��
·Ӧ�þ���ͨ��ѩ���ɵ���ȷ��·��!���ߵ�ǽ�Ǻ�����һ����Ѩ(hole)��
LONG);
        set("exits", ([
             "out":__DIR__"hole14",
                "north":__DIR__"hole27",
        ]) );
	set("search_desc", ([
	    "hole"	:	(: do_kick :),
	]) );
	set("mob_numbers",3);
	
	setup();
}

void init()
{
	add_action("do_look","look");
}

string do_kick()
{
	object ob;
	if(this_object()->query("mob_numbers")==0)
	  return "��Ѩ�����ƺ�ûʲô�����ˡ�\n";
	this_object()->add("mob_numbers",-1);
        ob = new("/open/snow/npc/bigmouse");
	ob->move("/open/snow/room/hole26");
	message_vision(
		"$N�ڶ�����Ѱ���죬ͻȻ�Ӷ�Ѩ���ܳ�һֻ��������˳�����\n"+
		"��...�㱻���ͷ���ۻ���", this_player());
	return "\n";
}

int do_look(string str)
{
	if(str!="hole") return 0;
        tell_object(this_player(),"�㷢��һ�����͵Ķ�Ѩ,�����ƺ���ʲô����,�������ҿ�(search hole)��\n");
	return 1;
}
