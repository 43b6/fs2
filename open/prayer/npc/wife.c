
#include <command.h>

inherit NPC;

void create()
{
    set_name("����",({"communion wife","communion","wife"}));
    set("title", "����");
    set("gender", "Ů��");
    set("age",55);
    set("attitude","peaceful");
    set("long",@LONG

  �䱾�����ǲ�˹��,����ԭ����Ϊ�˲�˹�ݻ�̵�ʥ����,��������ħ��
  ������ϰ��.�Դ�Ѱ��ʥ����֮��,��Ҫ�ز�˹����,���ڻز�˹;��,��
  ��ʥ��̻̽�,����ʥ��׹��������,�㱳��ʦ��,Զ������!������ʥ��
  �̻ʴ���[ʥ���湦].

LONG);

    set("combat_exp",1000000);
    set("str",30);
    set("con",20);
    set("int",30);
    set("per",40);
    set("cps",30);
    set("kar",30);
    set("force",2000);
    set("max_force",2000);
	set("max_gin",3900);
	set("max_sen",3900);
    set("force_factor",10);
    set("max_kee",3500);
    set("kee",3500);
    set("limbs",({"ͷ","��","��","��","��","��"})); 
    set_skill("dragon-blade",120);
    set_skill("haoforce",100);
    set_skill("blade",100);
    set_skill("parry",100);
    set_skill("dodge",100); 
    map_skill("blade","dragon-blade");
    map_skill("parry","dragon-blade");
    map_skill("force","haoforce");
    set("chat_chance_combat",100);
    set("chat_msg_combat",({
    (: perform_action,"blade.power-dest" :),}));

    setup();
    add_money("gold",10);
    carry_object("/open/gblade/obj/moon-blade")->wield();
    carry_object("/open/prayer/obj/girl-cloth")->wear();
    carry_object("/open/prayer/obj/girl-topknot")->wear();
    carry_object("/open/prayer/obj/girl-wrists")->wear();
    carry_object("/open/prayer/obj/girl-neck")->wear();
}

