//��������ɰ�
//���lotch����ץplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("��  �",({"guard hu","hu","guard"}));
        set("class","swordsman");
        set("title",HIY"��(��)"NOR);
        set("long",
        "\n���ǰ�����ĵ�����ؽ���\n");
        set("str",40);
        set("cor",25);
        set("gender","����");
        set("attitude","heroism");
        set("family/family_name","�ɽ���");
        set("max_gin",7000);
        set("max_kee",8000);
        set("max_sen",7000);
        set("max_force",8000);
        set("force",8000);
        set("age",40);
        set("force_factor",20);
        set("combat_exp",7000000);
        set("quests/read_snow",2);
        set("bellicosity",5000);
        set_skill("sword",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("sha-array",100);
        set_skill("array",100);
        set_skill("shasword",100);
        set_skill("sun_fire_sword",100);
        set_skill("force",200);
        set_skill("shaforce",150);
        set_skill("winter-steps",100);
        map_skill("dodge","winter-steps");
        map_skill("move","winter-steps");
        map_skill("force","shaforce");
        map_skill("sword","sun_fire_sword");
        map_skill("parry","shasowrd");
        set("functions/sha_kee/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("parry.sha_kee") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
setup();
        carry_object("/open/gsword/obj/dragon-sword.c")->wield();
        carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
        add_money("gold",50);
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield pen");
        command("say �޴�!!���а�!!!");
        command("kill "+who->query("id"));
        command("perform parry.sha_kee");
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
        if(random(100) < 10 )
        {
message_vision(HIG"\n��  �͵͵���˾�ת�����裬ʹ���������ָ���\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
