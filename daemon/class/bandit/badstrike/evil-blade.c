#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
	int skill, level, bellpower, force, damage, i;
        object *enemy, wea1;
        skill=me->query("functions/evil-blade/level");
        if(skill<=35) level=1;
        if(skill>=36&&skill<=70) level=2;
        if(skill>=71) level=3;
	bellpower = me->query("bellicosity")/20;
    if(bellpower > 300) //by chan fix 
      bellpower=300;
	force = me->query("force");
	enemy = me->query_enemy();
	i = sizeof(enemy);
        wea1 = me->query_temp("weapon");
if(me->query("family/family_name")!="���˹�")
return notify_fail("�㲻�Ƕ��˹ȵģ����Բ����á�\n");
if( me->query_skill_mapped("force")!="badforce" || 
me->query_skill_mapped("unarmed")!="badstrike" || 
(wea1 && wea1->query("skill_type")!="unarmed") )
		return notify_fail("ֻ���ڿ���ʹ�ö���Ƽ���ħ��ʱ���ܷ�����ħ����\n");
	if( me->query_skill("badstrike",1)<20 )
		return notify_fail("��Ķ���Ƽ��ɲ��㡣\n");
	if( me->query_skill("badforce",1)<20 )
		return notify_fail("����ڹ���������޷������ɵ���\n");
	if( force<90 ) return notify_fail("������������Ծ�����ħ��â��\n");
    if( !me->is_fighting(target) )
		return notify_fail("��ħ��ֻ����ս����ʹ�á�\n");

	if( !target ) target = offensive_target(me);
	if( level==3 && me->query_skill("ghost-steps",1)<50 ) level=2;
	switch( random(level) ) {
		case 0:
		message_vision(HIW"\t$N���ھ�����˫�ƣ�����ʮ�ɹ���֮��"+HIR"��ħ��"+HIW"����\n\n\tֻ��$N�������γ�����ҫ�۵�����ٿ����$n�����ȥ��\n\n"NOR,me,target);
		me->add("force", -50);
        if ( 80<random(100) ) {
			message_vision(HIM"ֻ��$N�������ͣ����ƺ�Ƿȱ׼ͷ����$n���·���ûմ����\n"NOR,me,target);
        me->start_busy(1);
			return 1;
		}
		damage = skill*3+bellpower;
		target->receive_wound("kee", damage);
		message_vision(HIC"$n���ܲ�������$N����ħ��â�������������Ѫ����ע��\n"NOR,me,target);
		COMBAT_D->report_status(target);
		me->start_busy(1);
		break;
		case 1:
		message_vision(HIW"\t$N˫�ƺ�ʮ���߾ٹ�����˳������"+HIR"����ħ��"+HIW"��\n\n\tֻ��$N˫�Ƶ���ħ�����϶�Ϊһ���γ�һ���޴󵶻���\n\n\tͻȻ��$N����һ�ᣬ�������ħ����$nֱ�����£�\n\n"NOR,me,target);
		me->add("force", -65);
        if( 80<random(100) ) {
			message_vision(HIM"ֻ��$N�������ͣ����ƺ�Ƿȱ׼ͷ����$n���·���ûմ����\n"NOR,me,target);
       me->start_busy(1);
			return 1;
		}
		damage = skill*5+bellpower;
		target->receive_wound("kee", damage);
		message_vision(HIC"$n���ܲ�������$N�ľ޴󵶻��������У�������Ѫ���������\n"NOR,me,target);
		COMBAT_D->report_status(target);
		me->start_busy(1);
		break;
		case 2:
		message_vision(HIW"\t$N����һ�䣬ʩչ����ڤ���û�Ϊ�ĸ�������$n����Χס��\n\n\tֻ��$N�ĸ�����ͬʱ����������ħ����׼��ʹ�����������ǿһʽ\n\n\t\t\t��"+HIR"��ħ����"+HIW"��\n\n\t��ʱ��$N�����뷢�����쵶â�����ܿ��������\n\n\n"NOR,me,target);
		me->add("force", -90);
		damage = skill*7+bellpower;
		while(i--) {
            if (80>random(100)) {
				enemy[i]->receive_wound("kee", damage);
				message_vision(HIC"$Nһ��ʧ�أ�ֻ���յ�ȫ�գ���ʱ�䵶â����������$N���ϣ�\n"NOR,enemy[i]);
				COMBAT_D->report_status(enemy[i]);
			} else {
				message_vision(HIM"ֻ��$N�Ǳ��Ĵ����쵶�������˳�������������û��ʲô�ˡ�\n"NOR,enemy[i]);
				COMBAT_D->report_status(enemy[i]);
			}
		}
me->start_busy(1);
break;
	}
   if (me->query("functions/evil-blade/level") < 100) {
function_improved("evil-blade",random(700));
   }
	return 1;
}

