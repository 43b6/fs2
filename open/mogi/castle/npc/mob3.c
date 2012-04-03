// mob3.c by roger

#include <ansi.h>
inherit NPC;

int kill_him(object);

void create() {
        
        set_name("ħ��̫��",({"ghost"}));
        set("long",
            "\nһֻȫ����ë��ͷ�ϳ�����ֻ�ǵĶ�����\n");

        set("age",3121);
        set("str",30);
        set("cor",30);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",2800);
        set("max_kee",9300);
        set("max_sen",3300);
        set("max_force",6200);
        set("force",6200);
        set("force_factor",20);
        set("combat_exp",2100000);
        set_skill("unarmed",95);
        set_skill("dodge",100);
        set_skill("nine-steps",100);
        set_skill("move",60);
        set_skill("parry",95);
        set_skill("mogi-strike1", 100);
        map_skill("unarmed", "mogi-strike1");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("limbs",({"ͷ��","�ز�","����","����","����","����"}));
        set("verbs",({"bite","claw"}));
        setup();
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
