#include <ansi.h>
inherit NPC;

void create()
{
        set_name("˾ͽ����",({"scholar se","se"}));
        set("title","������");
        set("gender","Ů��");
        set("race", "����");
	set("age", 45);
	set("long", "����λ��������֮��λ,�ڽ�������������.\n");
	set("str", 45);
        set("max_kee", 1300);
        set("kee", 1300);
        set("max_force", 1800);
set_skill("literate",100);
        set("force", 1800);
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
carry_object("/daemon/class/scholar/obj/gold_fan")->wield();
}
