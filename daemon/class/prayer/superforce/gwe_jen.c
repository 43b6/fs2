//������Ĺ���!! by bss
//д�ó���һ�㣬�����ȳ������!!!
#include <ansi.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
        int fun,flag,stat;
        int fun1,fun2,fun3,fun4,fun5;
        string dodge_skill,parry_skill;
        stat=0;
        flag=0;
        fun=me->query("functions/gwe_jen/level");
fun1=me->query("functions/black/level");
fun2=me->query("functions/bluesea/level");
fun3=me->query("functions/goldsun/level");
fun4=me->query("functions/blood/level");
fun5=me->query("functions/green/level");
if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
if( fun1 < 50 ) return notify_fail ("���������ȼ����㡣\n");
if( fun2 < 70 ) return notify_fail ("��ĵ�׺��ȼ����㡣\n");
if( fun3 < 90 ) return notify_fail ("��Ľ��صȼ����㡣\n");
if( fun4 < 110 ) return notify_fail ("���Ѫ�Եȼ����㡣\n");
if( fun5 < 130 ) return notify_fail ("���������ȼ����㡣\n");

        if( !me->is_fighting() )
          return notify_fail("����ֻ����ս���в���ʹ�á�\n");
        if(!target) target = offensive_target(me);
        if(!target) return notify_fail("�Ҳ�������!!\n");
        if( target == me )
          return notify_fail("���ܶԸ��Լ�ѽ!!\n");
        if( me->query("force") < 500)
          return notify_fail("�������������\n");
        dodge_skill = target->query_skill_mapped("dodge");
        if(!dodge_skill) stat+=1;
        parry_skill = target->query_skill_mapped("parry");
        if(!parry_skill) stat+=2;
        if(stat==3) return notify_fail("�������û�취�ù��棬���Ѿ�������ʧȥ�����ܼ��мܵ�������!!!\n");
        me->add("force",-40*((fun/10)+1));
        message_vision(HBGRN+HIY"$Nʹ���������桱�еĹ��棬һ����$n���Դ���ȥ!!\n"NOR,me,target);
        if(fun >=0 && fun <25)
        {
                if(10 > random(100)){
                  switch(stat)
                  {
                      case 0:
                        if(random(2)){
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        }
                        else{
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        }
                        target->start_busy(1);
                        target->add("kee",-100);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 1:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-100);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 2:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-100);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 3:
                        return notify_fail("�������û�취�ù��棬���Ѿ�������ʧȥ�����ܼ��мܵ�������!!!\n");
                        break;
                      default:
                        break;
                  }
                }
                else{
                        message_vision(HIY"$n��׼��$N���Ƶ�©��������������������һ��!!\n"NOR,me,target);
                        flag=1;
                        COMBAT_D->report_status(target);
                }
        }
        if(fun >=25 && fun <50)
        {
                if(20 > random(100)){
                  switch(stat)
                  {
                      case 0:
                        if(random(2)){
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        }
                        else{
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        }
                        target->start_busy(1);
                        target->add("kee",-200);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 1:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-200);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 2:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-200);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 3:
                        return notify_fail("�������û�취�ù��棬���Ѿ�������ʧȥ�����ܼ��мܵ�������!!!\n");
                        break;
                      default:
                        break;
                  }
                }
                else{
                        message_vision(HIY"$n��׼��$N���Ƶ�©��������������������һ��!!\n"NOR,me,target);
                        flag=1;
                        COMBAT_D->report_status(target);
                }
        }
        if(fun >=50 && fun <75)
        {
                if(30 > random(100)){
                  switch(stat)
                  {
                      case 0:
                        if(random(2)){
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        }
                        else{
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        }
                        target->start_busy(1);
                        target->add("kee",-300);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 1:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-300);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 2:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-300);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 3:
                        return notify_fail("�������û�취�ù��棬���Ѿ�������ʧȥ�����ܼ��мܵ�������!!!\n");
                        break;
                      default:
                        break;
                  }
                }
                else{
                        message_vision(HIY"$n��׼��$N���Ƶ�©��������������������һ��!!\n"NOR,me,target);
                        flag=1;
                        COMBAT_D->report_status(target);
                }
        }
        if(fun >=75 && fun <100)
        {
                if(40 > random(100)){
                  switch(stat)
                  {
                      case 0:
                        if(random(2)){
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        }
                        else{
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        }
                        target->start_busy(1);
                        target->add("kee",-400);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 1:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-400);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 2:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-400);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 3:
                        return notify_fail("�������û�취�ù��棬���Ѿ�������ʧȥ�����ܼ��мܵ�������!!!\n");
                        break;
                      default:
                        break;
                  }
                }
                else{
                        message_vision(HIY"$n��׼��$N���Ƶ�©��������������������һ��!!\n"NOR,me,target);
                        flag=1;
                        COMBAT_D->report_status(target);
                }
        }
if(fun >= 100)
        {
                if(50 > random(100)){
                  switch(stat)
                  {
                      case 0:
                        if(random(2)){
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        }
                        else{
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        }
                        target->start_busy(1);
                        target->add("kee",-500);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 1:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ���мܵ�������!!!\n"NOR,me,target);
                        target->set_temp("no_en_parry",1);
                        target->map_skill("parry");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-500);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 2:
                        message_vision(HIR"���һ�����У�$n��ͷ����Ϊ��$N�ڹ��е������������룬��ʱ��û�����������ʧȥ�������������!!!\n"NOR,me,target);
                        target->set_temp("no_en_dodge",1);
                        target->map_skill("dodge");
                        target->reset_action();
                        target->start_busy(1);
                        target->add("kee",-500);
                        flag=2;
                        COMBAT_D->report_status(target);
                        break;
                      case 3:
                        return notify_fail("�������û�취�ù��棬���Ѿ�������ʧȥ�����ܼ��мܵ�������!!!\n");
                        break;
                      default:
                        break;
                  }
                }
                else{
                        message_vision(HIY"$n��׼��$N���Ƶ�©��������������������һ��!!\n"NOR,me,target);
                        flag=1;
                        COMBAT_D->report_status(target);
                }
        }
        message_vision(HIG"$N��Ϊʹ������ǳ����澢��һ�ƣ����ò���Ŀ����������ٵĻָ�!!\n"NOR,me);
        me->start_busy(1);
        if(!flag) flag=1;
        if( fun < 100 )
        function_improved ("gwe_jen",random(500)*flag);
        return 1;
}
