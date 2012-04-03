//by roger
#include <ansi.h>
inherit NPC;

int kill_him(object);

void create() {
        
        set_name("׷Ӱ����",({"ghost"}));
        set("long",
            "\nһֻȫ���ë��ͷ�ϳ�����ֻ�ǵĶ�����\n");

        set("age",3021);
        set("str",30);
        set("cor",30);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",2400);
        set("max_kee",6200);
        set("max_sen",3000);
        set("max_force",6200);
        set("force",6000);
        set("force_factor",10);
        set("combat_exp",1900000);
        set_skill("unarmed",90);
        set_skill("dodge",95);
        set_skill("nine-steps",95);
        set_skill("move",90);
        set_skill("parry",90);
        set_skill("hell-evil", 90);
        map_skill("unarmed", "hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("limbs",({"ͷ��","�ز�","���","�ƽ�","����","����"}));
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
