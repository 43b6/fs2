// surrender.c
// ��������  ���ܶ�ͬһmobͶ��3�� By airke

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob,*enemy;
	int i;
	string name;
	
	if( !me->is_fighting() )
		return notify_fail("Ͷ��������û�����ڴ��㰡....��\n");

	ob = me->query_temp("last_opponent");
	if( objectp(ob) && living(ob) && me->is_killing() ) {
		message_vision("$n��$N���ģ�����$N����˵����"
			+ RANK_D->query_rude(me) + "�ϻ���˵����������\n", ob, me);
		return 1;
	}

	enemy=me->query_enemy();
	name=me->query("id");
	message_vision( HIW "\n$N˵�����������ˣ������ˣ���Ͷ��....����\n\n" NOR,me);
	for(i=0;i<sizeof(enemy);i++) {
      if(!enemy[i]) continue;
		enemy[i]->add_temp(name,1);
		if( enemy[i]->query_temp(name) > 4 ) {
			message_vision("$N����˵����"
+ RANK_D->query_respect(me) + "߯ҲûƷ,����һ�쵽��Ͷ��֮��?!..�ϻ���˵,���а�!!\n",enemy[i]);
		continue;
		}
		enemy[i]->remove_enemy(me);
		me->remove_enemy(enemy[i]);
	}
//	 me->remove_all_enemy();
	if( (int)me->query("score") >= 50 )
		me->add("score", -50 );
	else
		me->set("score", 0);

	return 1;
}
int help(object me)
{
  write(@HELP
ָ���ʽ : surrender
ָ��˵�� : 
           ���ָ��������������Ͷ������ֹս����
HELP
    );
    return 1;
}
 
