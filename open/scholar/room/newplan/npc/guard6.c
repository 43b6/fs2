//��������ɰ�
//���lotch����ץplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("ѩ  ��",({"guard shice","shice","guard"}));
        set("class","poisoner");
        set("title",HIC"��(��)"NOR);
        set("long",
        "\n���ǰ�����ĵ������ؽ���\n");
        set("str",40);
        set("cor",25);
        set("gender","Ů��");
        set("attitude","heroism");
        set("family_name", "ڤ��ħ��");
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
        set_skill("whip",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("forever-love",100);
        set_skill("force",200);
        set_skill("poisonforce",150);
        set_skill("coldpoison",100);
        set_skill("winter-steps",100);
        set_skill("ming-snake",100);
        map_skill("dodge","winter-steps");
        map_skill("move","winter-steps");
        map_skill("force","poisonforce");
        map_skill("parry","ming-snake");
        map_skill("whip","forever-love");
        map_skill("poison","coldpoison");
        set("functions/melt-bone/level",100);
        set("functions/suck/level",50);
        set("functions/firefinger/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("poison.melt-bone") :),
(: perform_action("poison.firefinger") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
setup();
carry_object("/open/poison/obj/bleed_whip")->wield();
carry_object("/obj/poison/faint_poison");
carry_object("/obj/poison/dark_poison");
carry_object("/obj/poison/five_poison");
carry_object("/obj/poison/rose_poison");
        add_money("gold",50);
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield pen");
        command("grin");
        command("say �ȳ����ҵĶ���");
        command("cmd throw dark to "+who->query("id"));
        command("cmd throw rose to "+who->query("id"));
        command("cmd throw five to "+who->query("id"));
        command("kill "+who->query("id"));
        command("perform coldpoison.melt-bone");
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
        if(random(100) < 30 )
        {
message_vision(HIG"\nѩ  ��͵͵���˾�ת�����裬ʹ���������ָ���\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
