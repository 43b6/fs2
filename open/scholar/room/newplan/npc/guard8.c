//��������ɰ�
//���lotch����ץplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("�깫��\",({"guard bero","bero","guard"}));
        set("class","blademan");
        set("title",HIB"��(��)"NOR);
        set("long",
        "\n���ǰ���������һ�����ؽ���\n");
        set("str",40);
        set("cor",25);
        set("gender","����");
        set("attitude","heroism");
        set("family/family_name","ħ��Ī��");
        set("max_gin",7000);
        set("mblade-new",1 );
        set("mblade",1);
        set("evil-mblade",1) ;
        set("m_blade",1);
        set("get-evil-mblade",1);
        set("mblade2",1);
        set("mblade",1);
        set("env/get_mblade","yes");
        set("env/а������","yes");
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
        command("say �޴�!!���а�!!!");
        command("kill "+who->query("id"));
        command("perform blade.mdragon-dest");
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
        if(random(100)<10)
        {
 message_vision(HIG"\n�깫��\͵͵���˾�ת�����裬ʹ���������ָ���\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
