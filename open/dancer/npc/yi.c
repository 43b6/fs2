//yi.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
        set_name("С��",({"yi"}));
        set("gender", "Ů��" );
        set("age", 18);
        set("long", @LONG
����ҹ��С���ϸ���ҩ���ĵ��ӣ�ҹ��С����ҩ�Ķ���������
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
        COMMON_OBJ"bandage",
        COMMON_OBJ"pill",
        COMMON_OBJ"pill1",
        COMMON_OBJ"pill2",
        COMMON_OBJ"plaster",
        COMMON_OBJ"plaster1",
        COMMON_OBJ"plaster2",
        }) );
        setup();
        add_money("silver",5);
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(3) ) {
                case 0:
                say("С��������˵: ��λ"+RANK_D->query_respect(ob)
                    +"����Щ���Ʋ�Ʒ��!\n");
                break;
                case 1:
                say("С�������ĵ�: ���ʲôҩ�Ķ��� "+RANK_D->query_respect(ob)
                    +"Ҫ����������!?\n");
                break;
                case 2:
                say("С����������: ������, "+RANK_D->query_respect(ob)
                    +"Ҫ�Ļ����ҿ��������һ���!\n");
                break;
        }
}
