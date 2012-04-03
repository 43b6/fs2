#include <ansi.h>
#include <dragon.h>
inherit NPC;

int kill_him(object);

void create() {
        set_name("��������",({"student"}));
        set("long",
            "\n���������ȹ����ĵ���,������빬��ǰ�İ�ȫ��\n");
        set("age",3037);
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",2000);
        set("max_kee",3000);
        set("max_sen",2000);
        set("max_force",4000);
        set("force_factor",10);
        set("combat_exp",1900000);
        set_skill("unarmed",100);
        set_skill("dodge",100);
        set_skill("nine-steps",100);
        set_skill("move",50);
        set_skill("parry",100);
        set_skill("hell-evil", 100);
        map_skill("unarmed", "hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
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

