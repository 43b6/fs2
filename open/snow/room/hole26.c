#include <room.h>
#include "/open/open.h"
inherit ROOM;

int num_of_mob;

string call_mob();
string do_kick();

void create()
{
        set("short","洞穴");
        set("long",@LONG
这里是一间密室, 经过了前面漫长的考验, 你的直觉认为这一条
路应该就是通往雪苍派的正确道路了!东边的墙角好像有一个洞穴(hole)。
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
	  return "洞穴里面似乎没什么东西了。\n";
	this_object()->add("mob_numbers",-1);
        ob = new("/open/snow/npc/bigmouse");
	ob->move("/open/snow/room/hole26");
	message_vision(
		"$N在洞里搜寻半天，突然从洞穴里跑出一只大老鼠冲了出来。\n"+
		"哇...你被冲的头昏眼花。", this_player());
	return "\n";
}

int do_look(string str)
{
	if(str!="hole") return 0;
        tell_object(this_player(),"你发现一个中型的洞穴,里面似乎有什么东西,可以找找看(search hole)。\n");
	return 1;
}
