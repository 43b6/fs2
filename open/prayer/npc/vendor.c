///u/r/rence/npc/vendor.c

#include "/open/open.h"
inherit F_VENDOR;

void create()
{
        set_name("����̯��",({"vendor"}));
        set("gender", "����" );
        set("age", 27);
set("long", @LONG
��������ר����̯��ЩС��������,������г�(list)����Щʲô...
LONG
        );
        set("combat_exp",135);
        set("attitude", "friendly");
        set_skill("dodge", 60);
        set_skill("hammer", 30);
        set_skill("parry", 27);
        set("chat_chance",3);                              //˵���Ļ���
        set("vendor_goods", ({
                COMMON_OBJ"bandage",
                COMMON_OBJ"pill",
                COMMON_OBJ"pill1",
 COMMON_OBJ"mass",
                COMMON_OBJ"plaster1",
                GS_OBJ"map",
                CAPITAL_OBJ"tea",
                "/obj/example/wineskin",
                "/obj/example/dumpling",
                "/obj/example/chicken_leg",
        }) );
        setup();
        carry_object("/obj/example/chicken_leg")->wield();
        carry_object("/open/gsword/obj/robe")->wear();
        add_money("coin",35);
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(3) ) {
                case 0:
 say("С���ܹ���������˵: ��λ"+RANK_D->query_respect(ob)
                        +"����Щ������!\n");
                        break;
                case 1:
                say("С��˻��ô\�ȵ�: "+RANK_D->query_respect(ob)
                        +"����������!?\n");
                        break;
                case 2:
                say("С����������: ��������,"+RANK_D->query_respect(ob)
                        +"Ҫ�Ļ����ҿ��������һ���!\n");
                        break;
  }
}

