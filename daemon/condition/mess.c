#include <ansi.h>
int update_condition(object me, int duration,int j)
{
mixed enemy;
enemy = all_inventory( environment(me) );
     if(duration==0) return 0;
	for(j=0;j < sizeof(enemy);j++)
	{       
         if (enemy[j]->is_character() && !enemy[j]->is_corpse() 
             && living(enemy[j]) && enemy[j]!=me) 
         me->kill_ob(enemy[j]);
        }
      me->apply_condition("mess",duration-1);
      message_vision(HIC"$Nʧȥ����, ��ʼ��ɱ������������...\n" NOR,me);
        if( duration < 1 ) return 0;
        return 1;
}