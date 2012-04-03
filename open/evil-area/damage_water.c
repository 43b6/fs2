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
		message_vision("$N̤�����������ڣ�ȴʲô����Ҳû������\n",me);
		return notify_fail("\n(�ѵ�������ֻ�ܽ�ȥһ��??..)�㲻����ô����...\n\n");
	}
	me->set_temp("evil/"+arg,1);
	message_vision(HIY"\n$N̤�����������ڣ�������ͻȻ��ҫ��һ���â��$N��ʧ�ڹ�â�С�\n\n"NOR,me);
	i = random(40)+1;
	kar = (int)me->query("kar");
	if( i > random(kar) && (int)me->query_temp("evil/way/wrong") < 7 )
	{
		if( i < 10 )
		{
			tell_room(__DIR__"a-0"+i,HIW"\nһ���âͻȻ��ҫ��������أ��㿴����"+me->query("name")+"�����ڹ�â�С�\n\n"NOR);
			me->move(__DIR__"a-0"+i);
		}
		else
		{
			tell_room(__DIR__"a-"+i,HIW"\nһ���âͻȻ��ҫ��������أ��㿴����"+me->query("name")+"�����ڹ�â�С�\n\n"NOR);
			me->move(__DIR__"a-"+i);
		}
		me->add_temp("evil/way/wrong",1);
	}
	else
	{
		tell_room("/open/evil-area/water/enter",HIW"\nһ���âͻȻ��ҫ��������أ��㿴����"+me->query("name")+"�����ڹ�â�С�\n\n"NOR);
		me->delete_temp("evil/"+arg);
	}
	tell_object(me,"\n���߳��˹�â�У��������⡣\n\n");	
return 1;
}