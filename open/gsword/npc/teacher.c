#include <ansi.h>
inherit NPC;

void create()
{
        set_name("����",({"yen chou","yen","chou"}));
        set("title","˽����ʦ");
        set("gender","����");
        set("race", "����");
	set("age", 55);
	set("long", "��˵����һλ֪������ʦ,�������������н���.\n");
	set("str", 30);
        set("max_kee", 550);
        set("kee", 550);
        set("max_force", 700);
        set("force", 700);
        set_skill("parry",65);
        set("combat_exp",120000);
        set_skill("knowpen", 70);
        set_skill("stabber", 60);
        set_skill("force",60);
        set("force_factor", 10);
        map_skill("stabber","knowpen");	
        set_skill("dodge",60);
	set_skill("winter-steps", 60);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	set("chat_msg_combat",({
     	   (: perform_action, "stabber.movedown" :)
     	  }));
	setup(); 
	add_money("silver",60);
        carry_object("/open/gsword/obj/pen2")->wield();
}
