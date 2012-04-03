// evil-blade.c by oda

#include <ansi.h>

inherit F_FUNCTION;
inherit SSERVER;

int perform(object me, object target)
{
	int skill, level, bellpower, force, damage, i;
//���ٲ���Ҫ�鷳,�õ�wea 2
          object wea1, *enemy;
	skill = query_function("evil-blade");
	level = skill/10+1;
	bellpower = me->query("bellicosity")/20;
    if(bellpower > 300) //by chan fix 
      bellpower=300;
	force = me->query("force");
	enemy = me->query_enemy();
	i = sizeof(enemy);
	wea1 = me->query_temp("weapon");
//      wea2 = me->query_temp("secondary_weapon");

      if( me->query_skill_mapped("force")!="badforce" || me->query_skill_mapped("unarmed")!="badstrike" || (wea1 && wea1->query("skill_type")!="unarmed") )
		return notify_fail("ֻ���ڿ���ʹ�ö���Ƽ���ħ��ʱ���ܷ�����ħ����\n");
	if( me->query_skill("badstrike",1)<20 )
		return notify_fail("��Ķ���Ƽ��ɲ��㡣\n");
	if( me->query_skill("badforce",1)<20 )
		return notify_fail("����ڹ���������޷������ɵ���\n");
	if( force<90 ) return notify_fail("������������Ծ�����ħ��â��\n");
    if( !me->is_fighting(target) )
		return notify_fail("��ħ��ֻ����ս����ʹ�á�\n");

	if( !target ) target = offensive_target(me);
	if( level>3 ) level=3;
	if( level==3 && me->query_skill("ghost-steps",1)<50 ) level=2;
	switch( random(level) ) {
		case 0:
		message_vision(HIW"\t$N���ھ�����˫�ƣ�����ʮ�ɹ���֮��"+HIR"��ħ��"+HIW"����\n\n\tֻ��$N�������γ�����ҫ�۵�����ٿ����$n�����ȥ��\n\n"NOR,me,target);
		me->add("force", -50);
        if ( random(9)<=3 ) {
			message_vision(HIM"ֻ��$N�������ͣ����ƺ�Ƿȱ׼ͷ����$n���·���ûմ����\n"NOR,me,target);
        me->start_busy(1);
			return 1;
		}
		damage = me->query_skill("badstrike",1)/2+me->query_skill("badforce",1)/2+skill*3+bellpower;
		target->receive_wound("kee", damage);
		message_vision(HIC"$n���ܲ�������$N����ħ��â�������������Ѫ����ע��\n"NOR,me,target);
		COMBAT_D->report_status(target);
		me->start_busy(1);
		break;
		case 1:
		message_vision(HIW"\t$N˫�ƺ�ʮ���߾ٹ�����˳������"+HIR"����ħ��"+HIW"��\n\n\tֻ��$N˫�Ƶ���ħ�����϶�Ϊһ���γ�һ���޴󵶻���\n\n\tͻȻ��$N����һ�ᣬ�������ħ����$nֱ�����£�\n\n"NOR,me,target);
		me->add("force", -65);
        if( random(9)<=2 ) {
			message_vision(HIM"ֻ��$N�������ͣ����ƺ�Ƿȱ׼ͷ����$n���·���ûմ����\n"NOR,me,target);
       me->start_busy(1);
			return 1;
		}
		damage = me->query_skill("badstrike",1)*2/3+me->query_skill("badforce",1)*2/3+skill*3/2+bellpower;
		target->receive_wound("kee", damage);
		message_vision(HIC"$n���ܲ�������$N�ľ޴󵶻��������У�������Ѫ���������\n"NOR,me,target);
		COMBAT_D->report_status(target);
		me->start_busy(1);
		break;
		case 2:
		message_vision(HIW"\t$N����һ�䣬ʩչ����ڤ���û�Ϊ�ĸ�������$n����Χס��\n\n\tֻ��$N�ĸ�����ͬʱ����������ħ����׼��ʹ�����������ǿһʽ\n\n\t\t\t��"+HIR"��ħ����"+HIW"��\n\n\t��ʱ��$N�����뷢�����쵶â�����ܿ��������\n\n\n"NOR,me,target);
		me->add("force", -90);
		damage = me->query_skill("badstrike",1)+me->query_skill("badforce",1)+skill*2+bellpower;
		while(i--) {
            if (random(9)>=2) {
				enemy[i]->receive_wound("kee", damage);
				message_vision(HIC"$Nһ��ʧ�أ�ֻ���յ�ȫ�գ���ʱ�䵶â����������$N���ϣ�\n"NOR,enemy[i]);
				COMBAT_D->report_status(enemy[i]);
			} else {
				message_vision(HIM"ֻ��$N�Ǳ��Ĵ����쵶�������˳�������������û��ʲô�ˡ�\n"NOR,enemy[i]);
				COMBAT_D->report_status(enemy[i]);
			}
        me->start_busy(1);
		break;
		}
	}
   if (me->query("functions/evil-blade/level") < 100) {

	function_improved("evil-blade",random(me->query("force")/10+bellpower/10));

   }
	return 1;
}

