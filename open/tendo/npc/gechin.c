#include <ansi.h>
inherit F_VENDOR;

string magic1();


void create()
{
        set_name("־��",({"gechin"}));
        set("long","����̵��½��ĵ��ӣ�˳����Щ������\n");
	set("gender","����");
	set("class","taoist");
        set("combat_exp",300000);
        set("attitude","heroism");
        set("age",50);
	set("title","����ɵ���������");
	set("str", 25);           
	set("cor", 24);
	set("cps", 25);
	set("per", 24);
	set("spi", 30);
	set("int", 26);
        set("force",1800);
        set_skill("literate",70);
        set("max_force",1000);
	set("max_mana",600);
	set("mana",600);
	set("max_atman",500);
	set("atman",500);
	set_skill("move",70);
	set_skill("force",60);
	set_skill("dodge",30);
	set_skill("parry",40);
	set_skill("whip",60);
	set_skill("gwhip",60);
	map_skill("whip","gwhip");
	set("force_factor",10);
	set_skill("parry",60);
	set_skill("gforce",60);
	map_skill("force","gforce");
        set_skill("g-steps",60);
       map_skill("dodge","g-steps");
	set("vendor_goods",({
		"/open/tendo/obj/hat.c",
		"/open/tendo/obj/shoe.c",
		"/open/tendo/obj/robe.c",
	}) );	
	set("chat_chance_combat",40);
	set("chat_msg_combat",({
	(: magic1 :),
	
	}));
	setup();
	carry_object("/open/tendo/obj/goldwhisk")->wield();
	carry_object("/open/tendo/obj/hat")->wear();
	carry_object("/open/tendo/obj/robe")->wear();
	carry_object("/open/tendo/obj/shoe")->wear();
}

string magic1()
{
	command("cast missible");
	return "\n";
}

