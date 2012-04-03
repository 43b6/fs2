inherit ROOM;
#include <ansi.h>

void create()
{
        set("short","ˮ������¥");
        set("long","ˮ����������֮�����������ڴˣ����ܵĿռ���ȫ���ܱտ�����
�Ѿ�û�еط��������ˣ��ó���ı��º�ˮ������ƴ�˰�!!\n");

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
	  message_vision(HIC"\n$N����ʮ�ɵľ������д���ˮ��֮�����ڰ߰ߵ��Ѻ���!!\n"NOR,me);
	  me->set_temp("magic-manor/breakwater",1);
      call_out("out_way",3,me);
	  return 1;
	  }else{
        if( me->query_temp("magic-manor/watermagic") && me->query_temp("magic-manor/breakwater") )
		{
	    message_vision(GRN"$N�Ÿ�����ʮ�ɵľ�����������������!!\n"NOR,me);
	    return 1;
		}
	  }
	}
}

int out_way()
{
    object me;
    me=this_player();

    message_vision(HIY"\n��Ȼ������������Ӧ����飬��$N����ǰ��������һ��������·!!\n"NOR,me);
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
    tell_room(room,GRN"\n�����������ٴξ����������Ѻۣ��������ڷ�ס�ˡ�\n"NOR);
    return 1;
}

int valid_leave(object me, string dir)
{
	me=this_player();

    if( dir=="out" && me->query_temp("magic-manor/breakwater") )
    me->delete_temp("magic-manor/breakwater");
    return ::valid_leave(me,dir);
}
