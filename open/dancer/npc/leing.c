//leing.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
        set_name("С��",({"leing"}));
        set("gender", "Ů��" );
        set("age", 19);
set("long", @LONG
����ҹ��С����ʳ�ĵ��ӣ����Ǹ����ʳ�书���ǲ����....
LONG
        );
        set("combat_exp",10000);
        set("attitude", "friendly");
        set_skill("dodge", 35);
        set_skill("dremagic", 35);
        set_skill("dreamdance", 45);
        set_skill("paull-steps", 45);
        set_skill("magic", 45);
        set_skill("unarmed", 35);
        set_skill("move", 35);
        set_skill("parry", 35);
        map_skill("unarmed","dreamdance");
        map_skill("parry","dreamdance");
        map_skill("dodge","paull-steps");
        map_skill("move","paull-steps");
        map_skill("magic","dremagic");
        set("vendor_goods", ({
                CAPITAL_OBJ"tea",
                "/obj/example/wineskin",
                "/obj/example/dumpling",
                "/obj/example/chicken_leg",
        }) );
        setup();
        carry_object("/open/gsword/obj/robe")->wear();
        add_money("coin",35);
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                say("С�῿����С����˵: ��λ"+RANK_D->query_respect(ob)
                        +"����Щ������!\n");
                        break;
                case 1:
                say("С��˻��ô\�ȵ�: "+RANK_D->query_respect(ob)
                        +"����������!?\n");
                        break;
        }
}
