#include <combat.h>
#include <ansi.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
        object *enemy,ob;
        int damage,i,fun,accept,e_force,e_f_c,flag;
        flag=0;
        enemy=me->query_enemy();
        i=sizeof(enemy);
          if(i > 4)
         {
         i=4;
       }
        fun=me->query("functions/north-force/level");
        if(me->query_skill("sunforce",1)< 100)
           return notify_fail("���һ���ķ�����������"+
                              "û�취ʹ����ڤ�񹦡�\n");
        if(!me->query("marks/north-force"))
                return 0;
        if(me->query("family/family_name") != "�μ�")
                return notify_fail("�Ƕμҵ��Ӳ����ã���\n");
        if(!me->is_fighting(target))
                return notify_fail("��ڤ��ֻ����ս����ʹ�á�\n");
        if(me->query("kee") < 1000)
                return notify_fail("�����������\n");

        message_vision(HIG"
                $N����ȫ���澢��ʹ��ȫ��Ĺ������ϵ���ž���죬
                ���һ��:"+BLINK+HIC+"����ڤ�񹦡�"NOR+HIG"�����ֿ�ʼ���ϵ�����ǰ��
                Ȧ��Խ��Խ�죬�������γ���һ���������������ܵ�
                ��ֻ����һ�ɼ�����������������ķ��������岻��
                �����ĳ�����Ͷȥ��\n"NOR,me);
        while(i--)
        {
               if(fun <= 20 && fun >=0)
                {
                        if(15 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"һʱ֮������ֽţ�����$n"HIR"���������������е�һ��!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*1/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(2 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*2/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"��׼��$n"HIY"������������������һ�������㿪��$n"HIY"��ι�����\n"NOR,enemy[i],me);
                        }
                }
               if(fun <= 40 && fun >20)
                {
                        if(30 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"һʱ֮������ֽţ�����$n"HIR"���������������е�����!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*2/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(4 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*3/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"��׼��$n"HIY"������������������һ�������㿪��$n"HIY"��ι�����\n"NOR,enemy[i],me);
                        }
                }
               if(fun <= 60 && fun >40)
                {
                        if(45 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"һʱ֮������ֽţ�����$n"HIR"���������������е�����!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*3/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(6 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*4/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"��׼��$n"HIY"������������������һ�������㿪��$n"HIY"��ι�����\n"NOR,enemy[i],me);
                        }
                }
               if(fun <= 80 && fun >60)
                {
                        if(60 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"һʱ֮������ֽţ�����$n"HIR"���������������е��ĳ�!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*4/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(8 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*5/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"��׼��$n"HIY"������������������һ�������㿪��$n"HIY"��ι�����\n"NOR,enemy[i],me);
                        }
                }
                if(fun > 80)
                {
                        if(75 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"һʱ֮������ֽţ�����$n"HIR"���������������е����!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*5/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(10 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*6/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"��׼��$n"HIY"������������������һ�������㿪��$n"HIY"��ι�����\n"NOR,enemy[i],me);
                        }
                }
        }
        me->add("kee",-200);
        if(!flag) flag=1;
if(fun<100) { function_improved("north-force",random(300)*flag); }
        return 1;
}

