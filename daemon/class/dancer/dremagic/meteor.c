#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int skl;
int fk;
int conjure(object me, object target)
{
        string msg;
                
                
        fun=me->query("spells/meteor/level");
                skl = (int)(me->query_skill("dremagic", 1));
fk=(fun+skl)/2;
     if (!me->query("spells/meteor/level"))
     return 0;
        if( !target ) target = offensive_target(me); 
        if(!me->is_fighting(target) )
        return notify_fail("�ⷨ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");
if(me->query("allow_meteor")!=1)
  return notify_fail("͵ѧ�Ĳ���ʹ���\n");       

if((me->query("family/family_name")!="ҹ��С��")&&(me->query("id")!="cgy"))
return notify_fail("ֻ�����߲���ʹ�á�\n");
        if((int)me->query("atman") < 300)
                return notify_fail("��ķ���������\n");

        if((int)me->query("gin") < 30 )
                return notify_fail("��ľ���û�а취��Ч���У�\n");
            if(me->query_temp("meteor")==1)
        return notify_fail("������ʩ����\n");

        me->add("atman", -300);
        me->receive_damage("gin", 30);

         msg = CYN "$NͻȻ��˫�����ϸ߾ٿ��І��ţ�\n" NOR ;
         msg += HIC "���ϵ��ǳ����������ҵ������Ê�������ȼ��һ��а�񣡣�\n" NOR ;
         msg += HIW "         �ռ�������"HIR"  ��  ��  ��  \n" NOR;
         msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
         msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 message_vision(msg, me, target);
                me->set_temp("meteor",1);
       call_out("act1",3,msg,target,me,fun,fk);
       return 1;
}
int act1(string msg,object target,object me,int fun,int fk) {
        int i;
        object *enemy;
                enemy = all_inventory( environment(me) );
        me->set_temp("meteor",0);
   for( i=0; i<sizeof(enemy); i++ )
   {
        if( enemy[i]->is_character() && !enemy[i]->is_corpse() && living(enemy[i]) &&
            !enemy[i]->query("no_kill") && enemy[i]!=me &&
            !in_edit(enemy[i]) && !in_input(enemy[i]) && !enemy[i]->query_temp("netdead") &&
            !wizardp(enemy[i]))
        {     if(!(me->query("env/no_meteor_ppl") && userp(enemy[i])))
        {

           if(random(fk)>20)
        {
            msg = HIM "���"+enemy[i]->query("name")+"�������������ʯ���У�\n" NOR;
                        enemy[i]->kill_ob(me);
                        me->kill_ob(enemy[i]);
            enemy[i]->receive_damage("kee", fun*5+50,me);
            COMBAT_D->report_status(enemy[i]);
        } else {
                msg = HIM "����"+enemy[i]->query("name")+"�Լ�����ٶȶ㿪����ʯ��\n" NOR;
        }
        }        
        message_vision(msg, me, target);
        
                }

        
                }
                if(fun<100) spell_improved("meteor",random(500));
                me->start_busy(1);
        return 1;
}

