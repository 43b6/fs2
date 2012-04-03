#include <ansi.h>
void init()
{
        object me,ob,obj,env;
	string way;
	int i,j,count;
		me = this_player();
		way = base_name(environment(me));
		count = random(3)+1;

		add_action("do_enter","enter");

		if( !me->query("evil_mob") || me->query_temp("evil_no_damage") )
		{
		        me->receive_damage("gin",500);
        		me->receive_damage("kee",500);
	        	me->receive_damage("sen",500);
	        	COMBAT_D->report_status(me,1);
		}

		if( me->query_temp(way) != way && !me->query("evil_mob") && !me->query_temp("evil_no_enemy") )
		{
			me->set_temp(way,way);
			if( !present("fly-bird",environment(me)) && !present("fly-worm",environment(me)) && !present("fly-spider",environment(me)) && !present("spider-girl",environment(me)) && !present("evil-ghost",environment(me)) && !present("evil-clever",environment(me)) )
			{
				for( i = 0 ; i < count ; i++ )
				{
					j = random(12)+1;
					obj = new(__DIR__"npc/bug"+j);
					obj->move(environment(me));
					obj->kill_ob(me);
				}
			}
		}
	return ;
}

int do_enter()
{
object me,ob;
string arg;
int i,kar;

	me = this_player();
	ob = this_object();
	arg = base_name(environment(me));

	if( me->query_temp("evil/"+arg) )
	{
		message_vision("$N踏入了咒术阵内，却什么事情也没发生。\n",me);
		return notify_fail("\n(难道咒术阵只能进去一次??..)你不禁这么想着...\n\n");
	}
	me->set_temp("evil/"+arg,1);
	message_vision(HIY"\n$N踏入了咒术阵内，咒术阵突然闪耀出一阵光芒～$N消失在光芒中～\n\n"NOR,me);
	i = random(40)+1;
	kar = (int)me->query("kar");
	if( i > random(kar) && (int)me->query_temp("evil/way/wrong") < 7 )
	{
		if( i < 10 )
		{
			tell_room(__DIR__"a-0"+i,HIW"\n一阵光芒突然闪耀着整个大地，你看到了"+me->query("name")+"浮现于光芒中。\n\n"NOR);
			me->move(__DIR__"a-0"+i);
		}
		else
		{
			tell_room(__DIR__"a-"+i,HIW"\n一阵光芒突然闪耀着整个大地，你看到了"+me->query("name")+"浮现于光芒中。\n\n"NOR);
			me->move(__DIR__"a-"+i);
		}
		me->add_temp("evil/way/wrong",1);
	}
	else
	{
		tell_room("/open/evil-area/water/enter",HIW"\n一阵光芒突然闪耀着整个大地，你看到了"+me->query("name")+"浮现于光芒中。\n\n"NOR);
		me->delete_temp("evil/"+arg);
	}
	tell_object(me,"\n你走出了光芒中，来到了这。\n\n");	
return 1;
}