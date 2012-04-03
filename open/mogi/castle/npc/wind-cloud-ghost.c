// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
void create() {
        
        set_name("Ѫ���ɵ�",({"wind cloud ghost","ghost"}));
        set("long",
            "\n���������ҵ���������\n");

        set("age",3121);
        set("str",25);
        set("cor",25);
        set("race","����");
        set("gender","����");
        set("attitude","peaceful");
        set("class","fighter");
        set("max_gin",3300);
        set("max_kee",1000);
        set("max_sen",3300);
        set("max_force",5000);
        set("force",5000);
        set("force_factor",5);
        set("combat_exp",1500000);
        set_skill("unarmed",80);
        set_skill("dodge",90);
        set_skill("nine-steps",90);
        set_skill("move",40);
        set_skill("parry",100);
        set_skill("fole-ken",100);
        set_skill("force",100);
        set_skill("badforce",100);
        set_skill("literate",130);
        map_skill("unarmed", "fole-ken");
        map_skill("dodge","nine-steps");
        map_skill("parry","badstrike");
        map_skill("move","nine-steps");
        map_skill("force","badforce");
        set("limbs",({"ͷ��","�ز�","����","����"}));
        set("verbs",({"bite","claw"}));
        setup();
        add_money("gold",5);
 }
int accept_kill(object who)
{
 who=this_player();
 command("hehe "+who->query("id"));
 command("kill "+who->query("id"));
 return 1;
}
