#include <ansi.h>

int perform( object me )
{
        int     fun, i;
        object  *enemy = all_inventory(environment(me));
        
        fun = me->query("functions/def-fire/level");
        if( me->query("family/family_name")!="������" )
                return notify_fail( "ֻ������������!\n" );
        if( me->query_skill("shinnoforce") < 30 )
                return notify_fail( "�����ũ�����ķ���������!\n" );
        if( me->query_skill_mapped("force") != "shinnoforce" )
                return notify_fail( "��û��ʹ����ũ�����ķ�!\n" );
        if( me->query("combat_exp")<800000 )
                return notify_fail( "��Ľ�����������!\n" );
        if( me->query("max_force") < 1500 )
                return notify_fail( "�����������!\n" );
        if( me->is_fighting() )
                me->start_busy(2);
        if( random(100)+fun < random(150) )
        {
        message_vision( HIW"$N��������, �˾�ʧ��!!\n"NOR, me );
        me->start_busy(1);
        return 1;
        }
        message_vision( HIW"$N������ũ�����ķ��е�"HIR"����������"HIW"!!\n"NOR, me ); 
        for( i=0; i<sizeof(enemy); i++ )
                if( enemy[i]->is_character() && !enemy[i]->is_corpse() && living(enemy[i]) && enemy[i]->query_temp("def_fire")!=1 ) {
                        message_vision( HIW"$N�������������$n�Ի���ķ���"HIW"!!\n"NOR, me, enemy[i] );
                        enemy[i]->set_temp( "def_fire", 1 );
                        me->add( "force", -300 );
                        call_out( "remove_effect", 120+fun, enemy[i] );
                        COMBAT_D->report_status( enemy[i], 1 );
                        if( fun < 100 )
                        me->function_improved( "def-fire", random(50) ); 
                }
        return 1;  
}

void remove_effect( object me )
{
        if(!me) return ;
        me->delete_temp("def_fire");
        tell_object( me, HIR"�������Ի���ķ�����ʧ�ˡ�\n"NOR );
        return;
}
