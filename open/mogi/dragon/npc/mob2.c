#include <ansi.h>
#include <dragon.h>
inherit NPC;

int kill_him(object);

void create() {
        set_name("Ц����ظ",({"ghost"}));
        set("long",
            "\n�����������׶���ע�������ܣ��������Ƕ��ˡ�\n");
        set("age",3000);
        set("race","����");
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",2500);
        set("max_kee",2000);
        set("max_sen",2500);
        set("force",2000);
        set("max_force",2000);
        set("force_factor",10);
        set("combat_exp",1200000);
        set_skill("unarmed",90);
        set_skill("dodge",90);
        set_skill("nine-steps",90);
        set_skill("move",70);
        set_skill("parry",100);
        set_skill("hell-evil", 100);
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
