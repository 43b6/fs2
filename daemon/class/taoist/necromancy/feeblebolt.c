#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_SPELL;
void remove_effect (object me,object target);
void remove_effect2 (object me,object target);
int cast(object me, object target)
{
        int funlvl;
        if( !target ) target = offensive_target(me);
        if( !target
                ||        !target->is_character()
                ||        target->is_corpse()
                ||        target==me)
                return notify_fail("��Ҫ��˭ʩչ���������\n");
		
        if( !funlvl = me->query("spells/feeblebolt/level") )
                return notify_fail("�㲢�����������\n");
        if(me->query_temp("tt"))
                return notify_fail("��ķ�����ûʩ�꣡��\n");
        if(me->query("mana") < funlvl/2 )
                return notify_fail("��ķ���������\n");
        me->add("mana", -funlvl/2);
        me->set_temp("tt",1);
if(me->query("adv_taoist")&&me->query("class")=="taoist")
{message_vision(HIY"
   $N��̤����֮λ������Ǭ��֮�ۣ��૆���������������
   \n             ��"HIM"�� �� �� ��
   "BLU"ڤ��Ϊ��  "HIW"��               ��  "HIR"���մ߻�
   ��               "HIC"��������
"HIG"\n˲�����Ϊ֮��������ʳ��ְ����ѵ�һ��������ͬ�����չ���Ӱ��$N������ǣ������
һ�����������$NѸ�ٽ������������һ����ڤ֮����Ѹ�ײ����ڶ�֮������"+target->query("name")+"��\n"NOR, me);
me->start_call_out((:call_other,__FILE__,"remove_effect2",me,target:),5);
}
else{
        message_vision(HIW"\n\n$N����Ĭ�����ﲢ�����з�������˫ָ!!\n\n"NOR,me);
me->start_call_out((:call_other,__FILE__,"remove_effect",me,target:),5);
}
return 1;
}

void remove_effect (object me,object target)
{
        int spell,cas,vkar,vfun,msen,tdodge,pp,mypp;

        me->set_temp("tt", 0);
        if( !target ) return;
        if(!present(target,environment(me))) {
                write("������ﲻ�������!!\n");
                return ;
        }

        if( !target->is_fighting(me) ) {
                if( living(target) ) {
                        if( userp(target) ) target->fight_ob(me);
                        else                target->kill_ob(me);
                }
                me->kill_ob(target);
        }
        spell = me->query_skill("spells");
        vfun = me->query("spells/feeblebolt/level");
        if(me->query("class") != "taoist") {
                spell /= 3;
                vfun /= 2;
        }
        switch(spell) {
                case 0..40 :    cas = random(2);        break;
                case 41..70 :   cas = random(3);        break;
                case 71..100 :  cas = 1 + random(4);    break;
                case 101..130 : cas = 1 + random(5);    break;
                default :       cas = 1 + random(6);    break;
        }

     me->improve_skill("necromancy", 1);

        if(vfun < 100)
                spell_improved ("feeblebolt", random(spell)*7);

        switch(cas) {
                case 0:
                        message_vision("$N˫��һ�С�"HIB"������"NOR"��������ָ��������������\n"NOR,me,target);
                        break;
                case 1:
                        message_vision("$N����һʽ��"HIW"�׺����"NOR"�����������һ���׹��ֱ������$n��\n"NOR,me,target);
                        break;
                case 2:
                        message_vision("$Nƾ�������˫��һ��!�Ϸ�������â�������������һ�С�"HIR"˫â����"NOR"����\n"NOR,me,target);
                        break;
                case 3:
                        message_vision("$N��Ʈ������Ȼ���в���������ʵ�ѱ�ġ�"HIB"�޶�����"NOR"������â�������Բ���˼��ĽǶ���$n��ȥ��\n"NOR,me,target);
                        break;
                case 4:
                        message_vision("$N��Хһ���������ͼ���С�"HIY"����˷�"NOR"�����ֶ�����ֻ��$Nʮָ����˵����������˷�����$n��һʱ���ѽ�$n���ɡ���\n"NOR,me,target);
                        break;
                case 5:
                        message_vision("$Nת����������һ�С�"HIC"�����岼"NOR"���������ͼ���ء�����Ϊ��������֮�桯���ӵ����쾡�£������⽻���ݺ�$nȫ���Ѿ��ڴ�������֮�¡�\n"NOR,me,target);
                        break;
                case 6:
                        message_vision("\n\n"HIW"$N��Ȼ�����ˡ��徻��Ϊ������̫�顯���裬һʽ��ڤ֮����ǿɱ��----��"HIC"�𽣴���"HIW"��----����Ϊ��\n       "HIY"$N˫��һ�ϼ���һ�������ƥ�Ķ�Ŀ��⣬Ю���ƿ�֮��ֱ��$n����\n"NOR,me,target);
                        break;
                default:
                        break;
        }

        if( 80 > random(100) ) {
                message_vision("�͵�һ����"HIG"��ڤ֮��"NOR"��$n����͸��������ϳ�һ�������ĺ���ֱ����������ĵ��¡�\n",me,target);
                if(me->query("class")!="taoist" ) {
                me->start_busy(1);
                }
                switch(cas)
                {
    case 0: target->receive_damage("sen",vfun*2);
    break;
    case 1: target->receive_damage("sen",vfun*3);
    break;
    case 2: target->receive_damage("sen",vfun*4 , me);
    break;
    case 3: target->receive_damage("sen",vfun*5,me);
    break;
    case 4: target->receive_damage("sen",vfun*6, me);
    break;
    case 5: target->receive_damage("sen",vfun*7, me);
    break;
    case 6: target->receive_damage("sen",vfun*8, me);
    break;
    default:
    break;
 }
 COMBAT_D->report_status(target);
 } else {
    message_vision(HIW"���$n�˱��п죬���˿���!\n"NOR,me,target);
    me->start_busy(1);
 }

  return;
}
void remove_effect2 (object me,object target)
{
 int vfun;
  if(!me) return ;
 vfun = me->query("spells/feeblebolt/level");
 me->delete_temp("tt");
  if(!target) return ;
 if( 80 > random(100) ) 
  {
  message_vision(BRED+HIW"$n���ܲ�ڤ֮������֮����������Ϣһ���ڲ�����������Ѫ����ɫ�ְס�\n",me,target);
  target->receive_damage("sen",vfun*5, me);
  target->receive_damage("gin",vfun*5, me);
  target->receive_wound("kee",vfun*5, me);
  COMBAT_D->report_status(target);
  }
  else {
    message_vision(BBLU+HIW"$n�ۼ���ڤ֮������������������к��֣�һ����������ڤ֮���Ĺ��ơ�\n"NOR,me,target);
    me->start_busy(1);
  }
  return;
}
