#include <ansi.h>
inherit NPC;

void create()
{
        set_name("南宫布仁",({"scholar lin","lin"}));
        set("title","五儒生");
        set("family/family_name","儒门");
        set("gender","男性");
        set("race", "人类");
	set("age", 42);
	set("long", "此人位居儒门中之高位,在江湖的名声极响.\n");
	set("str", 40);
set("max_kee",1000);
set("kee",1000);
        set("max_force",2500);
set_skill("literate",100);
     set("force",2500);
        set_skill("parry",80);
        set("combat_exp",600000);
set_skill("knowpen",100);
        set_skill("stabber", 80);
        set_skill("force",80);
        set("force_factor", 10);
        map_skill("stabber","knowpen");	
        set_skill("dodge",80);
	set_skill("winter-steps", 80);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	set("chat_msg_combat",({
     	   (: perform_action, "stabber.movedown" :)
     	  }));
	setup(); 
	add_money("gold",10);
 carry_object("/open/scholar/obj/literate_pen")->wield();
carry_object("/open/scholar/obj/s_leggings")->wear();
carry_object("/open/scholar/obj/s_neck")->wear();
carry_object("/open/scholar/obj/s_ring")->wear();
}
