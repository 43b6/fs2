// garrison.c

#include <ansi.h>

inherit __DIR__"team";

string fight()
{
	object ob = query_leader();
	object *all = ob->query_enemy();
	object target = all[random(sizeof(all))];
	if( environment(ob) != environment(this_object()) ) return "";
	message_vision("$N"HIR"�ٻ������۵ĵ���֮�𣬳�$n��ȥ��\n",
	this_object(),target);
	if( random(query("power")) > random(target->query_skill("dodge")) )
	{
		message_vision("$n���㲻������������ˡ�\n",this_object(),target);
		message_vision(NOR,target);
		target->receive_wound("kee",query("power"));
		COMBAT_D->report_status(target);
	}
	else
		message_vision(HIY"$N���˿�����û�������絽��\n" NOR,target);
}
void create()
{
	set_name(HIR "��������" NOR,({"fire beast","beast"}));
	set("race","Ұ��");

	set("combat_exp",10000);
	set("chat_chance_combat",60);
	set("chat_msg_combat", ({
		(: fight :),
	}) );

	set("verbs",({"bite","claw"}));
	set("limbs",({"ͷ��","����","�Ų�"}));
	set_skill("unarmed",10);
	set_skill("parry",10);
	set_skill("dodge",10);

	setup();

}

