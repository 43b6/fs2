// A normal human is at least 40 kg weight
#define BASE_WEIGHT 40000

inherit F_DBASE;

mapping *combat_action = ({
});

void create()
{
	seteuid(getuid());
	set("unit", "λ");
	set("gender", "����");
	set("can_speak", 1);
	set("attitude", "peaceful");
	set("limbs", ({
	}) );
}

void setup_robot (object ob)
{
	mapping my;

	my = ob->query_entire_dbase();

	ob->set("default_actions", (: call_other, __FILE__, "query_action" :));
	
	if( undefinedp(my["age"]) ) my["age"] = random(30) + 15;

	ob->set_default_object(__FILE__);
}

mapping query_action()
{
	return combat_action[random(sizeof(combat_action))];
}
