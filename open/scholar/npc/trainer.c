#include <ansi.h>
inherit NPC;

void create()
{
        set_name("�߼�����",({"scholar"}));
        set("gender","����");
        set("race", "����");
	set("age", 35);
        set("long","����֪ʶ���ı�ܵ����ϵ���ʶ���ʸ���߼�����֮�ƺ�.\n");
	set("str", 33);
        set("family/family_name","����");
        set("max_kee", 900);
        set("kee", 900);
        set("max_force", 1800);
        set("force",1800);
        set_skill("parry",90);
        set("combat_exp",210000);
        set_skill("knowpen", 90);
        set_skill("stabber", 90);
        set_skill("force",90);
        set_skill("poetforce",90);
        map_skill("force","poetforce");
        set("force_factor", 10);
        map_skill("stabber","knowpen");	
        set_skill("dodge",90);
	set_skill("winter-steps", 90);
        map_skill("dodge","winter-steps");
     set("chat_chance_combat", 50);
        set("chat_msg_combat",({
           (: perform_action, "stabber.movedown" :)
          }));
	setup(); 
	add_money("silver",20);
carry_object("/open/scholar/obj/pen")->wield();
}
