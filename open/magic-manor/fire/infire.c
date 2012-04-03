inherit ROOM;
#include <ansi.h>

void create()
{
    set("short","��������¥");
    set("long","������������֮�����������ڴˣ����ܵĿռ���ȫ���ܱտ�����
�Ѿ�û�еط��������ˣ��ó���ı��ºͻ�������ƴ�˰�!!\n");

    set("exits", ([
    ]));
    set("objects", ([
    "/open/magic-manor/fire/npc/fire-king": 1,
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
	if( present("fire king",environment(me)) )
	{
	return 0;
	}else{
	  if( me->query_temp("magic-manor/firemagic") && !me->query_temp("magic-manor/breakfire") )
	  {
	  message_vision(HIR"\n$N����ʮ�ɵľ������д��Ż���֮�����ڰ߰ߵ��Ѻ���!!\n"NOR,me);
	  me->set_temp("magic-manor/breakfire",1);
      call_out("out_way",3,me);
	  return 1;
	  }else{
        if( me->query_temp("magic-manor/firemagic") && me->query_temp("magic-manor/breakfire") )
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
    "out"   :"/open/magic-manor/manor23",
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
    if( me->query_temp("magic-manor/breakfire") )
    {
	me->delete_temp("magic-manor/breakfire");
	}
    tell_room(room,GRN"\n�����������ٴξ����������Ѻۣ��������ڷ�ס�ˡ�\n"NOR);
    return 1;
}

int valid_leave(object me, string dir)
{
	me=this_player();

    if( dir=="out" && me->query_temp("magic-manor/breakfire") )
    me->delete_temp("magic-manor/breakfire");
    return ::valid_leave(me,dir);
}
