//��������ɰ�
//���lotch����ץplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("������",({"guard lins","lins","guard"}));
        set("class","prayer");
        set("title",HIG"��(��)"NOR);
        set("long",
        "\n���ǰ�����ĵ��ĸ��ؽ���\n");
        set("str",40);
        set("cor",25);
        set("gender","����");
        set("attitude","heroism");
        set("max_gin",7000);
        set("max_kee",8000);
        set("max_sen",7000);
        set("max_force",8000);
        set("force",8000);
        set("age",40);
        set("force_factor",20);
        set("combat_exp",7000000);
        set("bellicosity",5000);
        set_skill("unarmed",150);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("superforce",150);
        set_skill("parry",120);
        set_skill("universe",140);
        set_skill("force",200);
        set_skill("fire-array",130);
        set_skill("shift-steps",150);
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("unarmed","universe");
        map_skill("array","fire-array");
        map_skill("force","superforce");
        set("functions/blood/level",60);
        set("functions/tengin/level",120);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
                (: perform_action, "force.blood3" :),
                (: perform_action, "universe.tengin" :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
setup();
        create_family("ʥ���",1,"�̻�");
        carry_object("/open/prayer/obj/dragon-icer")->wield();
        carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield pen");
        command("say �޴�!!���а�!!!");
        command("kill "+who->query("id"));
                (: perform_action, "universe.tengin" :),
        me->delete_busy();
        return 1;
}
int accept_fight(object who)
{
        who=this_player();
        command("say ������Һ��ҽ���, �Ǿͱ����������!!");
          return 0;
}
void heart_beat()
{
        object ob=this_object();
        if( is_fighting() ){
        if(random(100) <30 )
        {
message_vision(HIG"\n������͵͵���˾�ת�����裬ʹ���������ָ���\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
