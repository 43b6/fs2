//��������ɰ�
//���lotch����ץplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("��ǧ��",({"guard rin","rin","guard"}));
        set("class","fighter");
        set("title",HIW"��(��)"NOR);
        set("long",
        "\n���ǰ�����ĵ�һ���ؽ���\n");
        set("str",40);
        set("cor",25);
        set("gender","����");
        set("attitude","heroism");
        set("family/family_name","ѩ����");
        set("max_gin",7000);
        set("max_kee",8000);
        set("max_sen",7000);
        set("max_force",8000);
        set("force",8000);
        set("age",40);
        set("combat_exp",7000000);
        set("quests/read_snow",2);
        set("bellicosity",5000);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("stabber",200);
        set_skill("snow-martial",100);
        set_skill("force",200);
        set_skill("snowforce",150);
        set_skill("snow-kee",100);
        set_skill("winter-steps",100);
        map_skill("dodge","winter-steps");
        map_skill("move","winter-steps");
        map_skill("force","snowforce");
        map_skill("unarmed","snow-martial");
        map_skill("parry","snow-kee");
        set("functions/snow-powerup/level",100);
        set("functions/ice-fingers/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("unarmed.ice-fingers") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
setup();
        carry_object(SNOW_OBJ"figring")->wield();
        add_money("gold",50);
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield pen");
        command("say �޴�!!���а�!!!");
        command("kill "+who->query("id"));
        command("perform snow-kee.snow-powerup");
        me->delete_busy();
        command("exert roar");
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
        if(random(100) < 10 )
        {
message_vision(HIG"\n��ǧ��͵͵���˾�ת�����裬ʹ���������ָ���\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
