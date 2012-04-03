// mob4.c by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;

int kill_him(object);

void create() {
        
        set_name("ǧ��ʯħ",({"ghost monitor","ghost"}));
        set("long",
            "\nһֻ�Ѿ��ü�ǧ���������\n");

        set("age",3121);
        set("str",30);
        set("cor",30);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",12800);
        set("max_kee",13000);
        set("max_sen",13300);
        set("max_force",9000);
        set("force",9000);
        set("force_factor",35);
        set("combat_exp",4400000);
        set_skill("unarmed",110);
        set_skill("dodge",100);
        set_skill("nine-steps",100);
        set_skill("move",90);
        set_skill("parry",95);
        set_skill("mogi-strike1", 110);
        map_skill("unarmed", "hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("limbs",({"ͷ��","�ز�","����","����"}));
        set("verbs",({"bite","claw"}));
        setup();
        carry_object(C_OBJ"/ghost-cloth")->wear();
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
