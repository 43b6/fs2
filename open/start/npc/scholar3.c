#include <ansi.h>
inherit NPC;

void create()
{
        set_name("�Ϲ�����",({"scholar lin","lin"}));
        set("title","������");
        set("gender","����");
        set("race", "����");
	set("age", 42);
	set("long", "����λ��������֮��λ,�ڽ�������������.\n");
	set("str", 40);
        set("max_kee", 1200);
        set("kee", 1200);
        set("max_force", 1700);
set_skill("literate",100);
        set("force", 1700);
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
carry_object("/daemon/class/scholar/obj/sun_fan")->wield();
}
