#include <command.h>
#include <ansi.h>
#include <combat.h>
#include <skill.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun;
void damage_msg(int damage,object me, object target);
int perform(object me, object target)
{
  int ski_value,damage;
  string msg;
  fun=me->query("functions/badroar/level");
  ski_value=random(fun+me->query_skill("badstrike",1))+1;
  damage=ski_value*((fun/10));
  if( !target ) target = offensive_target(me);
  if(!target) return notify_fail("���Ҳ�������!!\n");
  if (me->query_skill_mapped("force")!="badforce" || me->query_skill_mapped("unarmed")!="badstrike")
return notify_fail("���ö�ħ���Ͷ�������ܷ��ӻ�ɱ��Ĺ���?\n");
        if(!me->is_fighting(target))
        return notify_fail("����û��ս�� ,�Ź�!?\n");
  if( me->query_skill("badstrike",1) < 30 )
  return notify_fail("û���ӻ��뻣�� ,ȥ������ !\n");
  if( me->query_skill("badforce",1) < 50 )
  return notify_fail("����ҲҪ�е����Ʋ������˰� ,�㿴����!!\n");
  if(me->query("force")<300)
  return notify_fail("û���� ,�ؼҳ�ʺ�� !\n");
  if(me->query("quests/badroar") != 1)
  return notify_fail("���ڸ��ﰡ...�Һ��Һ��...?\n");
  if( me->query("class")!="bandit")
  return notify_fail("���ֲ���ôа�� ,��ô�������а�� ?\n");
if( target->is_busy() ) 
return notify_fail("���� busy �У��칥���ɡ�\n"); 
  message_vision(HIY"$N����˫�ۣ���������ɢ��������˼�����Ϣ��\n"NOR,me,target);
if(80>random(100)) {
if(ski_value>=195 && me->query("force")>=2500)
  {
me->add("force",-3000);
target->receive_wound("gin",(target->query("gin")*1/3));
target->receive_wound("kee",(target->query("kee")*1/3));
target->receive_wound("sen",(target->query("sen")*1/3));
message_vision(HIW"\n\t$N���Ӻ�Ȼһ�٣�˫�ַ��裬������ת��"HIC"\n\n\tʹ�������Ƕ��˹Ȳ�����ѧ----"HIM"��ħ����"HIB"\n\n\t����$N��$n����������Ⱥħ����ʱ��
"HIY"\n\tٿ��ת��$n��ǰ�����в�ס�؆����дʣ�"HIG"\n\n\t\t���׶񼫣���޹�"HIC"\n\n\tʹ�������Ƕ��˹Ȳ����ؾ�----"HIM"������ɱ"HIW"
\n\tֻ��$n����$N����������ˣ�������ܲ�סǿ���˺���ȫ���������Ѫ����"HIR"
\n\t�������Ƕ��˼�ɱ��----"MAG"��ħ��ɱ��"HIR"��\n\n"NOR,me,target);
    write(HIW"��ʹ��ȫ��ʹ�����˼�ɱ���е�ȫ������������������\n"NOR);
    message_vision(RED"$n����$N��"HIR"��ħ��ɱ��"RED" ,ȫ����Ѫֱ��!!!!\n"NOR,me,target);
    target->apply_condition("bleeding",10);
  }
  else if ( ski_value < 7 )
  {
     me->add("force",-50);
     write(HIM"���Ȼ������ͷ���� ,������������й������Ƥ��һ�� ,���ް������\n"NOR);
     say( GRN"�㿴��"+me->query("name")+"������Բ���� ,������ͨͨ�� ,����Ц�˳���\n"NOR);
  }
  else if ( ski_value < 30 )
          {
           me->add("force",-100);
           target->receive_damage("sen",damage);
           write(HIB"���Ȼ��\��һ��Сආ������� ,���Ž������ŵ�!\n"NOR,me,target);
           say(MAG"�㿴����"+me->query("name")+"һ��Сආ�����̬ ,��������һ�� !\n"NOR);
   }
  else if ( ski_value < 60 )
   {
     me->add("force",-150);
     target->receive_damage("sen",damage);
     write(HIB"��˫��һ�� ,�촽΢�� ,�����ø�ʮ��С������ģ����ס���� .\n"NOR,me,target);
     say(MAG"�㿴����"+me->query("name")+"��һ��С���������� ,����������Ϣ��ס .\n"NOR);
  }
  else if ( ski_value < 90 )
  {
    me->add("force",-200);
    target->receive_damage("sen",damage);
write(HIB"����������һ��\ ,˫��΢͹ ,װ��һ�������������� !\n"NOR,me,target);
    say(MAG"�㿴����"+me->query("name")+"�Ǹ������������� ,���ϼ�Ƥ���ð�˳���!\n"NOR);
  }
  else if ( ski_value < 120 )
  {
    me->add("force",-250);
    target->receive_damage("sen",damage);
    write(HIB"������ɱ��ɢ�� ,����ֱ�ɶ��� ,�Ǹ����� ,����Ҫ�Ѷ��ֳ�����ȥ !\n"NOR,me,target);
    say(MAG"�㿴����"+me->query("name")+"�Ǹ������ӯ������ ,�����亹ֱ�� ,ȫ����!!!!\n"NOR);
  }
  else if ( ski_value < 150 )
  {
    me->add("force",-300);
    target->receive_damage("sen",damage);
   write(HIB"\n\n\t�㽫�������������е�ɱ��Ϥ�����˳��� ,"HIY"\n\n\tȻ������а��������ɨ���� ,"HIW"\n\n\t�⸶а���ģ�� ,�·����� ,����Ҫ��������!!!!!!\n\n"NOR,me,target);
    say(MAG"�㿴����"+me->query("name")+"��ȫ���а�� ,����Ϊ��"HIM"��"RED"��"HIW"�Ծ�"MAG"�������ŵ�ȫ������ ,������ս��־ !\n"NOR);
  }
  else
  {
   me->add("force",-400);
   target->receive_damage("sen",damage);
write(HIB"\n\n\t���Ȼ����"HIW"���׶� ,��޹�"HIB"�ľ���"HIC"\n\n\t���Ǳ������� ,����������ɱ��Χ����������� ,\n\n\t�������������·������� ,ȴ������ħ����ϰ�ֲ�!!!!"HIY"
\n\t��Ȼ��˫��һ�� ,�������մ�� ,���꽻��!!"HIG"\n\n\t����һ�� ,һ����â����Ķ�����ȥ!!!!!!!\n\n"NOR,me,target);
say(MAG"\n\n\t�㿴��"+me->query("name")+"�����ܵ���� ,���������ѱ���ס ,��������"HIR"\n\n\t��Ȼֻ����"+me->query("name")+"˫��һ�� ,ֻ���Լ�������� ,�־��Լ���վ������֮��!!"HIM"
\n\n\t��Ȼ������"+me->query("name")+"���һ�� ,����һ�� ,���Ѹе�ͷ������ ,���ľ���!!!!!!\n\n"NOR);
   }
  if ( ski_value < 7 )
  {
   message_vision(HIW"$N�����Ż�����$n!!!\n"NOR,me,target);
   }
  else if (damage < 250 )
    message_vision(HIC"$N��ģ����΢��$n����һ�� !\n"NOR,me,target);
  else if (damage < 500 )
    message_vision(HIM"$N��ģ��ȷʵ���ŵ���$n!!\n"NOR,me,target);
  else if (damage < 750 )
    message_vision(HIB"$n��$N��׳�����Ƹ���ס��!!!\n"NOR,me,target);
  else if (damage < 1000 )
    message_vision(HIY"$n��Ⱦ��$N��ɢ���������߼��� ,�ŵ����ǲ���!!!!\n"NOR,me,target);
  else if (damage < 1250 )
    message_vision(HIG"$N��չ�ֵ����߷緶�ŵ�$n��������!!!!!\n"NOR,me,target);
  else if (damage < 1500 )
    message_vision(HIR"���$n�·𿴵����� ,�������� ,������ս��־!!!!!!\n"NOR,me,target);
  else if (damage < 1750 )
    message_vision(MAG"���$n���Ǹմӵ��������� ,˿���᲻����!!!!!!!\n"NOR,me,target);
  else if (damage < 1950 )
    message_vision(BLU"$n��$N�ŵĻ��Ǿ�ʧ ,��ò�·���ȥ��һ���!!!!!!!!\n"NOR,me,target);
  else message_vision(RED"$n��$N�ŵĻ����ɢ ,������ʧȥ��������!!!!!!!!!\n"NOR,me,target);
  if(!target->is_busy())
target->start_busy(2);
} else {
message_vision(HIW"�����$n���˹�ȥ��\n"NOR,me,target);
}
  if ( fun < 100 || random(100)> 70) {
  function_improved("badroar",random(me->query("max_force")/10));
  }
  me->start_busy(1);
  return 1;
}
