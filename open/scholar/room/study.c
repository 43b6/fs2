#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", "读书房");
  set ("long", @LONG
简单朴实的布置，让人在此能放开心胸，静下自己
的心，好好的读书，你可以在此小睡一番，恢复一下自
己的精神。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r17.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/obj/iron.c" : 1,
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object who,string dir)
{
    if( dir == "south" && who->query_temp("sleeping") )
     return notify_fail("去哪里？你想梦游啊？\n");
     if( dir == "south" && who->query_temp("sleep") )
		return notify_fail("既然来了就睡(sleep)一下再走吧。\n");
	return ::valid_leave(who,dir);
}

void init()
{
	add_action("do_sleep","sleep");
	add_action("do_look", "look");
	add_action("do_score", "score");
	add_action("do_score", "hp");
    add_action("do_study", "study");
}

int do_sleep(string arg)
{
	object who;
	who = this_player();
	if( who->query_temp("sleeping") )
	{
		tell_object(who, "你已经睡着了，还想睡到死啊？\n");
		return 1;
	}
	tell_object(who, "你躺在房间里的小床上，呼呼大睡了起来。\n");
	who->delete_temp("sleep");
        who->set_temp("sleeping", 1);
     call_out("wakeup", 10,who);
	return 1;
}

int wakeup(object who)
{
	tell_object(who, HIC"一觉醒来，你觉得你的精神稍稍恢复了。\n"NOR);
    who->receive_heal("sen",100);
	who->delete_temp("sleeping");
	return 1;
}

int do_look()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
		tell_object(who, "要睡觉眼睛就给我乖乖闭着，不要东张西望。\n");
		return 1;
	}
}

int do_score()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
		tell_object(who, "安啦！等睡起来就都好了啦。\n");
		return 1;
	}
}
int do_study()
{
        object who = this_player();

        if( who->query_temp("sleeping") )
        {
                tell_object(who, "安啦！等睡起来就可以读了啦。\n");
                return 1;
        }
}
