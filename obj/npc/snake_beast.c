// garrison.c

#include <ansi.h>

inherit __DIR__"team";

string fight()
{
	object ob = query_leader();
	object *all = ob->query_enemy();
	object target = all[random(sizeof(all))];
	if( environment(ob) != environment(this_object()) ) return "";
	message_vision("$N"HIB"̽��ͷ��������$n�ݺݵ�ҧȥ��\n" NOR,
		this_object(),target);
	if(random(query("power"))>random(target->query_skill("dodge")))
	{
		message_vision(HIR"$N���㲻�������ϱ�ҧ��һ������\n"NOR,
			target);
		target->apply_condition("super_snake_poison",query("power")/10+2);
		COMBAT_D->report_status(target);
	}
	else 
		message_vision(HIY"$N�����˿�����û��ҧ����\n"NOR,target);
}
void create()
{
	set_name(HIB "���а��" NOR,({"snake beast","beast"}));
	set("race","Ұ��");

	set("combat_exp",10000);
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
		(: fight :),
	}) );
	set("verbs",({"bite"}));
	set("limbs",({"ͷ��","����","β��"}));
	set_skill("unarmed",10);
	set_skill("parry",10);
	set_skill("dodge",10);

	setup();

}

