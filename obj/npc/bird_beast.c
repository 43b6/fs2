// garrison.c

#include <ansi.h>

inherit __DIR__"team";

string fight()
{
	object ob = query_leader();
	if( environment(ob) != environment(this_object()) ) return "";
	message_vision( "$N"HIG"�����Ϸų���⣬����$n���ϣ�ʹ$n���˿ڸ�ԭ��\n" NOR,this_object(),ob);
	ob->receive_heal("kee",query("power"));
	COMBAT_D->report_status( ob );
}
void create()
{
	set_name(HIG "������" NOR,({"bird beast","beast"}));
	set("race","Ұ��");

	set("combat_exp",10000);
	set("chat_chance_combat",30);
	set("limbs",({"ͷ��","���","����","�Ų�"}));
	set("chat_msg_combat", ({
		(: fight :),
	}) );

	set("verbs",({"bite","claw"}));
	set_skill("unarmed",10);
	set_skill("parry",10);
	set_skill("dodge",10);

	setup();

}

