// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
void create() {
        
        set_name("��ħ",({"drunk ghost","ghost"}));
        set("long",
            "\n�ȵ�����������ħ�������ߵ��е�ס�����ȥ·��\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","����");
        set("gender","����");
        set("attitude","peaceful");
        set("class","fighter");
        set("bellicosity",800);
        set("max_gin",2800);
        set("max_kee",9000);
        set("kee",9000);
        set("max_sen",7300);
        set("max_force",7500);
        set("force",7500);
        set("force_factor",35);
        set("combat_exp",2750000);
        set_skill("unarmed",120);
        set_skill("dodge",110);
        set_skill("nine-steps",120);
        set_skill("move",30);
        set_skill("parry",110);
        set_skill("drunk", 110);
        set_skill("literate",130);
        set_skill("force",120);
        set_skill("badforce",120);
        map_skill("unarmed", "drunk");
        map_skill("dodge","nine-steps");
        map_skill("parry","badstrike");
        map_skill("move","nine-steps");
        map_skill("force","badforce");
        set("limbs",({"ͷ��","�ز�","����","����"}));
        set("verbs",({"bite","claw"}));
        setup();
        carry_object(C_OBJ"/sspill");
        carry_object("/open/gsword/obj/silver_sword");
        add_money("gold",10);
 }
int accept_fight(object who)
{
 write(HIY"��ħ˵�� : ��....�Ǻ�...\n"NOR);
return 0;
}
int accept_kill(object who)
{
 who=this_player();
 command("say �ð�...����ƴ���ȭ���");
 command("kill "+who->query("id"));
 return 1;
}
