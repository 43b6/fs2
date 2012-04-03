#include <ansi.h>
#include <dragon.h>
inherit NPC;

int kill_him(object);

void create() {
        set_name("����",({"snake ghost","ghost"}));
        set("long",
            "\n�����������׶���ע�������ܣ��������Ƕ��ˡ�\n");
        set("age",3100);
        set("race","����");
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",2000);
        set("max_kee",3000);
        set("max_sen",2000);
        set("max_force",1600);
        set("force_factor",10);
        set("combat_exp",1300000);
        set_skill("unarmed",80);
        set_skill("dodge",90);
        set_skill("nine-steps",90);
        set_skill("move",70);
        set_skill("parry",80);
        set_skill("hell-evil", 80);
        map_skill("unarmed", "hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("limbs",({"ͷ��","�ز�","�����","��ڽ�","����","����"}));
        set("verbs",({"bite","claw"}));
        setup();
carry_object(C_OBJ"/ghostar")->wear();
 }

void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) {
           remove_call_out("kill_him");
           call_out("kill_him",0,obj);
        }
 }

void heart_beat()
{
        if( random(5) < 2 ){
        if(!is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
            if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
                           }
        }
        :: heart_beat();
}       
