#include <ansi.h>
int up(object me);

void init()
{
	object me,ob,obj,mob,room;
	int kee1;
	me=this_player();

	if( me->query_temp("magic-manor/kill-fire01") >= 20 )
	{
	remove_call_out("up");
	call_out("up",1,me);
	}else{
	  if( !me->query("fire-monster") && !me->is_corpse() && me->is_character() && living(me) )
	  {
	  kee1=me->query("eff_kee");
	    if( random(300) > me->query_skill("parry") )
	    {
	    message_vision(HIR"$N"HIR"һ���������$N��$N�ұ�����������!!\n"NOR,me);
	    me->receive_wound("kee",kee1/50);
	    COMBAT_D->report_status(me,1); 
	    }else{
	    message_vision(HIW"$N"HIW"$N���㾢��������һ��ͽ���������������!!\n"NOR,me);
	    }   
	  }

	  if( !present("fire monster",environment(me)) && !present("fire beast",environment(me)) )
	  {
	  mob = new(__DIR__"npc/fire-monster01");
	  mob->move(environment(me));
	  }
	}
	return ;
}

int up(object me)
{
	me=this_player();
	message_vision(HIR"��ɫ��������Χ������ȥ��һ�����ϵ�¥�ݽ���������$N��ǰ��\n"NOR,me);
	me->move("/open/magic-manor/fire/up01");
}