#include <ansi.h>
inherit NPC;

void create()
{
        set_name("����",({"scholar wind","scholar","wind"}));
        set("title","����");
        set("gender","����");
        set("race", "����");
	set("age", 25);
	set("long", "�������ڷ��õ�����, ���ڷ����ж���.\n");
	set("str", 30);
        set("max_kee", 550);
        set("kee", 550);
        set("max_force", 400);
        set("force", 400);
        set_skill("parry",50);
        set("combat_exp",35000);
        set_skill("knowpen", 50);
        set_skill("stabber", 50);
        set_skill("force",50);
        set("force_factor", 3);
        map_skill("stabber","knowpen");	
        set_skill("dodge",50);
	set_skill("winter-steps", 50);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	setup(); 
	add_money("silver",15);
carry_object("/open/scholar/obj/pen3")->wield();
}
