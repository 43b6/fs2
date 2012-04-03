#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_SPELL;
void remove_effect (object me);
int cast(object me, object target)
{
  int spell,cas,vfun,mkee,tdodge;
  if( !target ) target = offensive_target(me);
  if( !target
      ||        !target->is_character()
      ||        target->is_corpse()
      ||        target==me)
                return notify_fail("��Ҫ��˭ʩչ���������\n");
  if( !me->query("spells/missible/level") )
     return notify_fail("��������, ���� help cmds ��һ��ָ��!\n");
  if(me->query_temp("ttt"))
                return notify_fail("��ķ�����ûʩ�꣡��\n");
  if(me->query("mana") < 50 )
     return notify_fail("��ķ���������\n");
  me->add("mana", -25);
  me->start_busy(1);
  spell = me->query_skill("spells");
  vfun = me->query("spells/missible/level");
  if(me->query("class") != "taoist") {
    spell=spell/3;
    vfun=vfun/2; }
if(me->query("adv_taoist")&&me->query("class")=="taoist")
  cas=6;
  else if(spell < 40)
    cas=random(2);
  else if(spell < 80)
    cas=random(4);
  else if(spell <= 120)
    cas=random(5);
  else if(spell > 120)
    cas=random(6);
  me->improve_skill("necromancy", 1);
  if( vfun < 100 )
  spell_improved ("missible", random(spell*7));
  switch(cas)
  {
    case 0:
    message_vision("$Nһ�С�"HIB"������"NOR"������������������������\n"NOR,me,target);
    break;
    case 1:
    message_vision("$Nһʽ��"HIW"ˮ����"NOR"���ľ���ˮһ���׹��������ڳ����������������������׶д���������������$n��\n"NOR,me,target);
    break;
    case 2:
    message_vision("$N����Ծ��˫��һ���Ͽ�������â�������������һ�С�"HIC"˫â����"NOR"����\n"NOR,me,target);
    break;
    case 3:
    message_vision("$N��Ȼʹ������ɷ�������--��"HIB"�����ӿ�"NOR"����ֻ����ö������������һ����$N����ܳ����Բ���˼��ĽǶ�����$n��\n"NOR,me,target);
    break;
    case 4:
    message_vision("$N���һ�������С�"HIY"�ٳ߸�ͷ"NOR"����Ȼ���������ֱ��ٳ���ĵ��档\n"NOR,me,target);
    break;
    case 5:
    message_vision("\n\n$N��ָ��ɣ�ʹ�������߾�ѧ-------��"HIR"����ǧ��ָ"NOR"��--------\n\n "MAG"�����Ϲ�����ջ��������Ļ��ߣ���Ӱ�ƻã�������$n�İ˴�ҪѨ!!\n\n"NOR,me,target);
    break;
	case 6:
	message_vision(HIG"
   $N������ҳ��龫�����ڷ���ԴԴ�����γ�һ��ǿ������
   \n "HIW"     ����"YEL"��  ��  ֮  ��
                                   "HIC"�����ǡ�"HIM"׷���¡�"HIW"��
"HIW"\nֻ��$N����ɢ�ų�ҫ�۹�ã������֮�лص���һ���Ӵ��������˲������
       ��ã�����ǰ���"+target->query("name")+"���⼱���ȥ���γ�һ���Ӵ����������"+target->query("name")+"��\n"NOR, me);
	   me->set_temp("ttt",1);
    break;
    default:
    break;
 }

 if( 80 >random(100) ) {
  switch(cas)
  { 
   case 0..5:
  message_vision("�͵�һ����"MAG"����֮��"NOR"�Ĺ�â����Ѫ����$n�����崩͸������\n"NOR,me,target);
  break;
   case 6:
   message_vision(BRED+MAG"����֮���������磬Ѹ������$n�����˲�䱻ǿ���������һ���󶴡�\n"NOR,me,target);
   break;
   default:
   break;
   }
  switch(cas)
  {
    case 0: target->receive_damage("kee",vfun*2);
    break;
    case 1: target->receive_damage("kee",vfun*3);
    break;
    case 2: target->receive_damage("kee",vfun*4, me);
    break;
    case 3: target->receive_damage("kee",vfun*5 , me);
    break;
    case 4: target->receive_damage("kee",vfun*6,me);
    break;
    case 5: target->receive_damage("kee",vfun*8, me);
    break;
	case 6: target->receive_damage("kee",vfun*12, me);
	me->start_call_out((:call_other,__FILE__,"remove_effect",me:),5);
    break;
    default:
    break;

 }
 COMBAT_D->report_status(target);
 } else {
   switch(cas)
   {
    case 0..5:
    message_vision(HIW"$n����һ�࣬��������ض㿪....\n"NOR,me,target);
	break;
	case 6:
	message_vision(HIW"$n�����ֿ죬ʩչ�ṦԾ����ʣ���ܿ�����֮������������£����Ų��ѡ�\n"NOR,me,target);
    break;
    default:
    break;
   }

 }

 if( !target->is_fighting(me) ) {
        if( living(target) ) {
                if( userp(target) ) target->fight_ob(me);
                else                    target->kill_ob(me);
        }
        me->kill_ob(target);
 }
//me->start_call_out((:call_other,__FILE__,"remove_effect",me:),3);
  call_out("remove_effect",3,me);

 return 1;

}

void remove_effect (object me)
{
  if(!me) return ;
  me->set_temp("ttt",0);
  return;
}
