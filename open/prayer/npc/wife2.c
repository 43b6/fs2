
#include <command.h>

inherit NPC;

void create()
{
    set_name("����",({"warrior-wife","warrior","wife"}));
    set("title", "������");
    set("gender", "Ů��");
    set("age",32);
    set("attitude","peaceful");
    set("long",@LONG

	����ʥ��̸������ķ���. �����ɵ�Ů����. ��Ϊ�������
	����Ϊ��÷����, ��������ʥ��̺�, ��Զ������Ѱ�ٰ���
	!!�ڴ����ܷ򳪸�����Ҹ�!!

LONG);

    set("combat_exp",1200000);
    set("str",30);
    set("con",20);
    set("int",30);
    set("per",40);
    set("cps",30);
    set("kar",30);
    set("force",2000);
    set("max_force",2000);
    set("max_gin",3900);
    set("max_sen",3900);
    set("force_factor",10);
    set("max_kee",1500);
    set("kee",1500);
    set("limbs",({"ͷ","��","��","��","��","��"})); 
    set_skill("universe",100);
    set_skill("superforce",100);
    set_skill("unarmed",100);
    set_skill("force",100);
    set_skill("parry",100);
    set_skill("dodge",100); 
    map_skill("unarmed","universe");
    map_skill("parry","dragon-blade");
    map_skill("force","superforce");

    setup();
    carry_object("/open/prayer/obj/girl-cloth")->wear();
    carry_object("/open/prayer/obj/girl-topknot")->wear();
    carry_object("/open/prayer/obj/girl-wrists")->wear();
    carry_object("/open/prayer/obj/girl-neck")->wear();
    carry_object("/open/prayer/obj/dragon-icer")->wield();
    add_money("gold",10);
}

