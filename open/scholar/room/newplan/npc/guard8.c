//五儒生完成版
//会放lotch及会抓plan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("申公豹\",({"guard bero","bero","guard"}));
        set("class","blademan");
        set("title",HIB"艮(雷)"NOR);
        set("long",
        "\n他是八卦阵的最后一个个守将。\n");
        set("str",40);
        set("cor",25);
        set("gender","男性");
        set("attitude","heroism");
        set("family/family_name","魔刀莫测");
        set("max_gin",7000);
        set("mblade-new",1 );
        set("mblade",1);
        set("evil-mblade",1) ;
        set("m_blade",1);
        set("get-evil-mblade",1);
        set("mblade2",1);
        set("mblade",1);
        set("env/get_mblade","yes");
        set("env/邪刀连击","yes");
        set("new-by-swy",1 );
        set("max_kee",8000);
        set("max_sen",7000);
          set("max_force",20000);
          set("force",20000);
        set("age",40);
        set("force_factor",20);
        set("combat_exp",7000000);
        set("no_mount",1);
        set("bellicosity",15000);
        set_skill("blade",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("fast-blade",100);
        set_skill("dragon-blade",120);
        set_skill("force",200);
        set_skill("sixforce",150);
        set_skill("winter-steps",100);
        map_skill("dodge","winter-steps");
        map_skill("move","winter-steps");
        map_skill("force","sixforce");
        map_skill("blade","dragon-blade");
        map_skill("blade","dragon-blade");
        set("functions/mdragon-dest/level",100);
        set("functions/power-dest/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("blade.mdragon-dest") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
setup();
carry_object("/open/main/obj/shiblade")->wield();
        add_money("gold",50);
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("say 愚蠢!!接招吧!!!");
        command("kill "+who->query("id"));
        command("perform blade.mdragon-dest");
        me->delete_busy();
        command("exert roar");
        return 1;
}
int accept_fight(object who)
{
        who=this_player();
        command("say 如果不敢和我较量, 那就别来这边送死!!");
          return 0;
}
void heart_beat()
{
        object ob=this_object();
        if( is_fighting() ){
        if(random(100)<10)
        {
 message_vision(HIG"\n申公豹\偷偷吃了九转雄蛇丸，使身上气力恢复。\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
