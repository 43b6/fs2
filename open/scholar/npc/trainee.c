#include <ansi.h>
inherit NPC;

void create()
{
        set_name("�м�����",({"scholar"}));
        set("gender","����");
        set("race", "����");
	set("age", 33);
        set("family/family_name","����");
	set("long","����֪ʶ���ı�ܵ����ϵ���ʶ���ʸ����м�����֮�ƺ�.\n");
	set("str", 33);
        set("max_kee", 700);
        set("kee", 700);
        set("max_force", 1200);
        set("force",1200);
        set_skill("parry",80);
        set("combat_exp",130000);
        set_skill("knowpen", 80);
        set_skill("stabber", 80);
        set_skill("force",80);
        set_skill("poetforce",80);
        map_skill("force","poetforce");
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
	add_money("silver",20);
carry_object("/open/scholar/obj/pen2")->wield();
}
