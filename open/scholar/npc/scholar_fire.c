#include <ansi.h>
inherit NPC;

void create()
{
        set_name("����",({"scholar fire","scholar","fire"}));
        set("title","����");
        set("gender","����");
        set("race", "����");
	set("age", 22);
	set("long", "�������ڻ��õ�����, ���ڻ����ж���.\n");
	set("str", 30);
        set("max_kee", 550);
        set("kee", 550);
        set("max_force", 300);
        set("force", 300);
        set_skill("parry",40);
        set("combat_exp",20000);
        set_skill("knowpen", 40);
        set_skill("stabber", 40);
        set_skill("force",40);
        set("force_factor", 2);
        map_skill("stabber","knowpen");	
        set_skill("dodge",40);
	set_skill("winter-steps", 40);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	setup(); 
	add_money("silver",10);
carry_object("/open/scholar/obj/pen3")->wield();
}
