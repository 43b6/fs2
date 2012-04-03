//by roger
#include <ansi.h>
inherit NPC;

int kill_him(object);

void create() {
        set("title","�ص�С��");
        set_name("��������",({"blood ghost","ghost"}));
        set("long",
            "\n������ħ�ű����ص�С��,������Ĵ����ŭ���ѡ�\n");

        set("age",2937);
        set("str",25);
        set("cor",25);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",2000);
        set("max_kee",6100);
        set("max_sen",2000);
        set("max_force",4000);
        set("force",4000);
        set("force_factor",20);
        set("combat_exp",2100000);
        set_skill("unarmed",80);
        set_skill("dodge",90);
        set_skill("nine-steps",90);
        set_skill("move",60);
        set_skill("parry",80);
        set_skill("hell-evil", 80);
        map_skill("unarmed", "hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("limbs",({"ͷ��","�ز�","�����","��ڽ�","����","����"}));
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
