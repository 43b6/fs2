// garrison.c

#include <ansi.h>

inherit __DIR__"team";

void create()
{
	set_name(YEL "����" NOR,({"bear beast","beast"}));
	set("race","Ұ��");

	set("combat_exp",10000);
	set("limbs",({"ͷ��","����","�Ų�","β��"}));
	set("verbs",({"bite","claw"}));
	set_skill("unarmed",10);
	set_skill("parry",10);
	set_skill("dodge",10);

	setup();

}

