#include <ansi.h>
inherit NPC;

void create()
{
        set_name("����",({"scholar water","scholar","water"}));
        set("title","ˮ��");
        set("gender","����");
        set("race", "����");
	set("age", 33);
	set("long", "��������ˮ�õ�����, ����ˮ���ж���.\n");
	set("str", 33);
        set("max_kee", 650);
        set("kee", 650);
        set("max_force", 600);
        set("force", 600);
        set_skill("parry",70);
        set("combat_exp",65000);
        set_skill("knowpen", 70);
        set_skill("stabber", 70);
        set_skill("force",70);
        set("force_factor", 5);
        map_skill("stabber","knowpen");	
        set_skill("dodge",70);
	set_skill("winter-steps", 70);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	setup(); 
	add_money("silver",20);
carry_object("/open/scholar/obj/pen3")->wield();
}
