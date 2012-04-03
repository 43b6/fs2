inherit NPC;

void create()
{
	set_name("����",({ "hunter" }) );

	set( "age", 35);

	set("str", 32);
        set("cor", 30);

	set("force", 500);
	set("max_forec", 500);
	set("force_factor", 3);

	set("combat_exp",250000);

	set_skill("dodge",80);
	set_skill("move",80);
	set_skill("nine-steps",80);
	set_skill("whip",70);
	set_skill("ming-snake",75);
	map_skill("dodge","nine-steps");
	map_skill("move","nine-steps");
	map_skill("whip","ming-snake");
	set_skill("force",60);
	set_skill("poisonforce",80);
	set_skill("unarmed",70);
	set_skill("parry",60);
	map_skill("parry","ming-snake");
	map_skill("force","poisonforce");
	set_skill("poison",80);
	set_skill("coldpoison",80);
	map_skill("poison","coldpoison");

	set("race", "����");

	set( "gender", "����");


        set("attitude", "friendly");

    setup();
 
   carry_object("/open/poison/obj/boots")->wear();
   carry_object("/open/poison/obj/longwhip")->wield();
carry_object("open/poison/obj/ecloth.c")->wear();
}
