// mob4.c by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;

int kill_him(object);

void create() {
        
        set_name("��ָ��ħ",({"eight-fingers ghost","ghost"}));
        set("long",
            "\n���ع������ȵ�������ħ��\n");

        set("age",3321);
        set("str",35);
        set("cor",30);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",2800);
        set("max_kee",10000);
        set("max_sen",3300);
        set("max_force",16000);
        set("force",16000);
        set("force_factor",30);
        set("combat_exp",3200000);
        set_skill("unarmed",120);
        set_skill("dodge",110);
        set_skill("nine-steps",120);
        set_skill("move",30);
        set_skill("parry",100);
        set_skill("mogi-strike1",120);
        map_skill("unarmed", "mogi-strike1");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("limbs",({"ͷ��","�ز�","����","����","�˸���ָ"}));
        set("verbs",({"bite","claw"}));
        setup();
        carry_object(C_OBJ"/ghost-legging")->wear();
        add_money("gold",15);
 }

void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) {
           remove_call_out("kill_him");
           call_out("kill_him",0,obj);
        }
 }

/*   ������ʱ����  int kill_him(object obj) {
//        if(obj->query("race") == "����") return 1;
        if(obj->query("race") == "Ұ��") return 1;
        if(obj->query("max_force") > 999 ||
           obj->query("combat_exp") > 299999)
           command("kill "+obj->query("id"));
        return 1;
}*/
