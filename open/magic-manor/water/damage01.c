#include <ansi.h>
int up(object me);

void init()
{
	object me,ob,obj,mob,room;
	int kee1;
	me=this_player();

	if( me->query_temp("magic-manor/kill-water01") >= 20 )
	{
	remove_call_out("up");
	call_out("up",1,me);
	}else{
	  if( !me->query("water-monster") && !me->is_corpse() && me->is_character() && living(me) )
	  {
	  kee1=me->query("eff_kee");
	    if( random(600) > me->query_skill("force") )
	    {
	    message_vision(HIR"$N"HIR"һʱ�˹����㣬����֮��������������������˺�˪ƬƬ!!\n"NOR,me);
	    me->receive_wound("kee",kee1/50);
	    COMBAT_D->report_status(me,1); 
	    }else{
	    message_vision(HIW"$N"HIW"�������ڹ��ķ���˿˿������͸������������˺���֮����Ϯ��!!\n"NOR,me);
	    }   
	  }

	  if( !present("water monster",environment(me)) && !present("water beast",environment(me)) )
	  {
	  mob = new(__DIR__"npc/water-monster01");
	  mob->move(environment(me));
	  }
	}
	return ;
}

int up(object me)
{
	me=this_player();
	message_vision(HIC"ˮ��������Χ������ȥ��һ�����ϵ�¥�ݽ���������$N��ǰ��\n"NOR,me);
	me->move("/open/magic-manor/water/up01");
}