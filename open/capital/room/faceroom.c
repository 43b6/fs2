
#include <ansi.h>

inherit ROOM;

void create()
{
    set("short", "手术室");
	set("long", @LONG
一坨坨的棉花撒一地,整间的装璜有点变态,在你左手边
有一手术台,在你面前站着一位幼齿的小伙子,不知他的
手艺如何

LONG );

        set("exits", ([ /* sizeof() == 1 */
             "west"   : __DIR__"sexroom",
	]));

  set("objects", ([ /* sizeof() == 1 */
      "/open/capital/npc/shyu3"       :     1,
]));
set("no_fight",1);
set("no_kill",1);
set("no_magic",1);
	set("light_up", 1);

	setup();
}
int valid_leave(object who,string dir)
{
     if( dir == "west" && who->query_temp("sleeping") )
               return notify_fail("别乱动,等一下毁容怎办？！\n");
	return ::valid_leave(who,dir);
}

void init()
{
         add_action("do_faceoff","faceoff");
	add_action("do_look", "look");
	add_action("do_score", "score");
}

int do_faceoff(string arg)
{
	object who;
	who=this_player();

	if( who->query_temp("sleeping") )
	{
  tell_object(who, "你正在手术中ㄋㄟ．．．\n");
		return 1;
	}
      if( !who->query_temp("faceoff") )
	{
   tell_object(who, "徐肉轩说道 : 整？还要整就到外面付钱。\n");
		return 1;
	}
   tell_object(who, "徐肉轩给你打了根麻药，开始昏睡过去。\n");
         who->delete_temp("faceoff");
	who->set_temp("sleeping", 1);
	call_out("wakeup", 8, who);
	return 1;
}

int wakeup(object who)
{
tell_object(who, HIC"突然之间你觉得自己容光唤发。\n"NOR);
    who->add("per",3);
	who->delete_temp("sleeping");
	return 1;
}

int do_look()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
    tell_object(who, "手术中还想乱瞄，想死喔！！\n");
		return 1;
	}
}

int do_score()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
 tell_object(who, "急啥劲啊？手术完就知道了咩！\n");
		return 1;
	}
}
