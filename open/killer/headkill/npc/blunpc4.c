#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_special_fight();

void create()
{
        set("nickname","����𵶸���");
        set_name("����",({"balo"}));
        set("long","�������������У�ר�޽𵶼��ɵĸ��֣���˵��������Ԫ��֮�� .\n");
        set("gender","����");
        set("class","blademan");
        set("combat_exp",2500000);
        set("attitude","heroism");
        set("age",66);
                set("str", 99);
                set("cor", 24);
                set("cps", 28);
                set("per", 24);
                set("int", 42);
        set("max_gin", 2000);
        set("gin", 1000);
        set("max_kee", 6000);
        set("kee", 6000);
        set("max_sen", 2000);
        set("sen", 2000);
        set("force",5000);
        set_skill("literate",100);
        set("max_force",5000);
        set_skill("move",100);
        set_skill("force",100);
        set_skill("dodge",90);
        set_skill("parry",90);
        set_skill("blade",120);
        set_skill("gold-blade",120);
        set_skill("fly-steps",100);
        set_skill("sixforce",100);
        set_skill("fast-blade", 120);
        map_skill("blade","fast-blade");
        map_skill("parry","gold-blade");
        map_skill("dodge","fly-steps");
        map_skill("move","fly-steps");
        map_skill("force","sixforce");
        set_temp("apply/armor",100);
        set("force_factor",10);
        set("chat_chance_combat",50);
        set("chat_msg_combat",({
        (: do_special_fight :),
    }));
        setup();
        carry_object("/daemon/class/blademan/obj/gold-blade")->wield();
    carry_object("/open/killer/obj/k_ring.c")->wear();
	carry_object("/open/killer/weapon/k_boot2.c")->wear();
	carry_object("/open/killer/weapon/k_arm2.c")->wear();
	carry_object("/open/killer/weapon/k_head2.c")->wear();
        add_money("gold",10);
}

string do_special_fight()
{

        if( query_skill_mapped("blade") == "gold-blade" ) {
            command("perform blade.gold-dest");
            if( !query_temp("fast/time") )
                map_skill("blade", "fast-blade");
        }
        else if( query_skill_mapped("blade") == "fast-blade" ) { 
            command("perform blade.fast-dest");
            map_skill("blade", "gold-blade");
        }
        command("perform blade.gold-dest");
        return "";
}
