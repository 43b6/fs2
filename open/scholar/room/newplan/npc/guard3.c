//��������ɰ�
//���lotch����ץplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;


void create() {
        set_name("��  ��",({"guard wuo","wuo","guard"}));
        set("class","scholar");
        set("family/family_name","�μ�");
        set("title",HIR"��(��)"NOR);
        set("long",
        "\n���ǰ�����ĵ������ؽ���\n");
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
        set("six_spsp",1);  
        set("force_factor",20);
        set("combat_exp",7000000);
        set("bellicosity",5000);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("stabber",120);
        set_skill("force",200);
        set_skill("sunforce",200);
        set_skill("six-fingers",100);
        set_skill("linpo-steps",100);
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("force","sunforce");
        map_skill("stabber","six-fingers");
        map_skill("parry","six-fingers");
        set("functions/handwriting/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("stabber.handwriting") :),
}));
setup();
        carry_object(PING_OBJ"cloud_fan")->wield();
        add_money("gold",50);
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield all");
        command("say �޴�!!���а�!!!");
        command("kill "+who->query("id"));
        command("perform six-fingers.handwriting");
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
message_vision(HIG"\n�ѕ�͵͵���˾�ת�����裬ʹ���������ָ���\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
