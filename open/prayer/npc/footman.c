#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("����",({"footman"}));
    set("gender", "Ů��");
    set("age",14);
    set("attitude","peaceful");
    set("long",@LONG

	�������ͻ�ʳ���շ����ĵĹ���.

LONG);
 
    set("combat_exp",100);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
#include <ansi.h>
    set("cps",30);
    set("kar",20);
    set("max_kee",30);
    set("kee",30);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("dodge",10);
    set("chat_chance",3);                              //˵���Ļ���
    set("chat_msg",({                                  
    HIC+"����˵ : ��˵������������ʫ����Ůɢ�������������!!\n"+NOR,
 }));
 
    setup();
    add_money("coin",10);
    carry_object("/open/prayer/obj/communion-cloth")->wear();
}

