#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("ħ�̽�ͽ",({"trainee"}));
	set("gender","����");
	set("class","poisoner");
	set("combat_exp",612);
	set("age",26);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set_skill("dodge",20);
	setup();
carry_object("/obj/poison/rose_poison")->set_amount(3);
carry_object("/obj/poison/five_poison")->set_amount(3);
carry_object("/obj/poison/dark_poison")->set_amount(3);
carry_object("/obj/poison/faint_poison")->set_amount(3);

}

