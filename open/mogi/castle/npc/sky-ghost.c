// mob4.c by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;

int kill_him(object);

void create() {
        
        set_name("��а��",({"sky-ghost","ghost"}));
        set("long",
            "\n��������¥�ݵĹ�����\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","peaceful");
        set("bellicosity",8800);
        set("max_gin",8800);
        set("max_kee",8500);
        set("max_sen",8300);
        set("max_force",8500);
        set("force",8500);
        set("force_factor",43);
        set("combat_exp",3750000);
        set_skill("unarmed",120);
        set_skill("blade",90);
        set_skill("dragon-blade",100);
        set_skill("dodge",110);
        set_skill("nine-steps",110);
        set_skill("move",50);
        set_skill("parry",110);
        set_skill("hell-evil", 120);
        map_skill("unarmed", "hell-evil");
        map_skill("blade","dragon-blade");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("limbs",({"ͷ��","�ز�","����","����"}));
        set("verbs",({"bite","claw"}));
        setup();
        carry_object(C_OBJ"/sky-blade")->wield();
        carry_object(C_OBJ"/ninepill");
        add_money("gold",20);
 }
void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,ghost;
 ob=this_object();
 ghost=present( "ghost",environment(ob) );
 if(str=="askgod ghost" || str=="askgod sky-ghost"){
 write(HIY"��а����Ц������ħ���ĵ�������ǰ�����ʲ�!?������ħ������ࡣ��ȥ����!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}
int accept_fight(object who)
{
return notify_fail("��а��˵�� : ��û�������档\n");
}
int accept_kill(object who)
{
 who=this_player();
 command("hehe "+who->query("id"));
 command("kill "+who->query("id"));
 return 1;
}

