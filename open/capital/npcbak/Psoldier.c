//皇城禁卫军

#include </open/capital/capital.h>

inherit NPC;

void create()
{
	set_name("殿前武士",({"palace soldier","soldier"}) );
	set("gender","男性");
	set("class","soldier");
	set("attitude","heroism");
	set("age",25);
	set("class","soldier");
	set("str",30);
	set("cor",25);
	set("int",20);
	set("spi",10);
	set("cps",22);
	set("con",25);
	set("kar",20);
	set("long",
	"殿前武士是皇城中最英勇的士兵, 只要你敢轻举妄动,一定会付出惨 \n"
	"痛的代价. \n");

	set("combat_exp",150000);
	set_skill("blade",50);
	set_skill("her-blade",50);
	map_skill("blade","her-blade");
	set_skill("parry",50);
	set_skill("dodge",50);
	setup();
	carry_object(CAP_OBJ"tigerblade")->wield();
	carry_object(CAP_OBJ"Ns_boots")->wear();
	carry_object(CAP_OBJ"carmor")->wear();
	carry_object(CAP_OBJ"ironshield")->wear();
	carry_object(CAP_OBJ"ironarmband")->wear();
		
}


int accept_fight(object who)
{
	return notify_fail(query("name")+"说：放肆!!\n");
}
