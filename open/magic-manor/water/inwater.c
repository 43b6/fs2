inherit ROOM;
#include <ansi.h>

void create()
{
        set("short","水灵塔七楼");
        set("long","水灵塔的镇塔之王，正坐镇于此，四周的空间完全的密闭看来你
已经没有地方可以逃了，拿出你的本事和水灵塔王拼了吧!!\n");

    set("exits", ([
    ]));
	set("objects", ([
	"/open/magic-manor/water/npc/water-king": 1,
	])); 

    set("light", 1);
	set("no_auc", 1);
    set("no_transmit",1);
    setup();

}

init()
{
	add_action("do_break","break");
}

int do_break(string arg)
{
	object me=this_player();
	if( present("water king",environment(me)) )
	{
	return 0;
	}else{
	  if( me->query_temp("magic-manor/watermagic") && !me->query_temp("magic-manor/breakwater") )
	  {
	  message_vision(HIC"\n$N运足十成的劲力并夹带着水灵之力打在斑斑的裂痕上!!\n"NOR,me);
	  me->set_temp("magic-manor/breakwater",1);
      call_out("out_way",3,me);
	  return 1;
	  }else{
        if( me->query_temp("magic-manor/watermagic") && me->query_temp("magic-manor/breakwater") )
		{
	    message_vision(GRN"$N才刚运完十成的劲力，正虚脱无力中!!\n"NOR,me);
	    return 1;
		}
	  }
	}
}

int out_way()
{
    object me;
    me=this_player();

    message_vision(HIY"\n忽然间受力的塔身应身而碎，在$N的眼前，开启了一道出塔的路!!\n"NOR,me);
	set("exits",([
    "out"   :"/open/magic-manor/manor24",
    ]));

    call_out("close",60,me);
	return 1;
}

int close()
{
    object room,me;
    room=this_object();
    me=this_player();

    room->delete("exits/out");
    if( me->query_temp("magic-manor/breakwater") )
    {
	me->delete_temp("magic-manor/breakwater");
	}
    tell_room(room,GRN"\n塔身因灵气再次聚满消濔了裂痕，而将出口封住了。\n"NOR);
    return 1;
}

int valid_leave(object me, string dir)
{
	me=this_player();

    if( dir=="out" && me->query_temp("magic-manor/breakwater") )
    me->delete_temp("magic-manor/breakwater");
    return ::valid_leave(me,dir);
}
