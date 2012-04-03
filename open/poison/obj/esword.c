#include <weapon.h>
#include <ansi.h>
inherit BLADE;

void bleed(object me, object victim, object weapon, int damage);
void block(object me, object victim, object  weapon, int damage);
mapping *action = ({
([ "action":"$Nʹ������������ն���������е�$wȫ����ȥ.�漴����һ��,��ǰ��ն��
��ʮ��",
	"dodge": 40,
	"parry": -50,
	"damage":210,
	"damage_type":"����",
	"post_action" : (: call_other, __FILE__, "block" :),
]),
(["action":"$Nʹ�������»�ն��,�������Ӽ��ٵ���ת,���е�$w˳�ƻ�Ϊһ��â��ǰն
ȥ",
	"dodge": 50,

	"parry":-40,
	"damage":180,
	"damage_type":"����",
	"post_action" : (: call_other, __FILE__, "bleed" :),
]),
});
void create()
{
	set_name(HIW"��NOR+WHT"W"NOR+HIW"��NOR+WHT"M"NOR+HIW"��NOR+WHT "��NOR+HIW"��NOR+WHT"B"NOR,({"blade"}) );

        set_weight(10000);
        if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "��");
		set("long","
�����Ǵ�Դ��ʱ���������������������ǳưԹض��ߵ�֤�����ഫ�䡮��һ
���ʣ���¶�鶼����¡���\n");

		set("value", 2000);
		set("material", "blacksteel");
		set("wield_msg","
$N�����ؽ�$n�����аγ����е�����Χ�Ŀ����ƺ���˶������ˡ�\n");

		set("unwield_msg", "
$N��$n�黹���ʡ�\n");

		init_blade(80, SECONDARY);
		set("actions", (: __FILE__, "query_action" :) );
 
		setup();
}
}
mapping query_action()
{
	return action[random(sizeof(action))];
}
void block(object me,object victim,object weapon,int damage)
{
	if(damage > 180)
{
	victim->start_busy( random((int)me->query_skill("blade", 1)/100 + 1 ));
	message_vision(HIW "����  ����ĵ����Ϸ�������â����â�̵�$n���۾�����������ʹ��$n����ԭ�أ���������!\n" NOR,me,victim);
}
}

void bleed(object me,object victim,object weapon,int damage)
{
	int cond;
	if(damage> 200)
{
	cond = victim->query_condition("bleeding");
	cond += random(me->query_skill("sword", 1)/100 );
	victim->apply_condition("bleeding", cond);
	message_vision(HIW "����  ����ĵ��滮����$n��Ƥ����ʹ��$n����ʧѪ���޷�ֹס!\n" NOR,me,victim);
}
}
