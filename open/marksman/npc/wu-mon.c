inherit NPC;
#include <ansi.h>
#include <marksman.h>
void create()
{
        set_name("����", ({ "wu mon","wu","mon" }) );
set("class","marksman");
        set("gender", "����" );
        set("age", 40);
        set("long", "������������Ļ���֮һ��\n");
        set("nickname",HIB"�һ���"NOR);
set("combat_exp",200000);
set("max_kee",2500);
        set("max_force",1000);
	set("force",1000);
        set_skill("archery",85);
	set_skill("iceforce",50);
set("functions/ten_kee/level",60);
	set_skill("force",50);
	set_skill("rain-steps",50);
        set_skill("dodge",50);
        set_skill("parry",50);
        set_skill("god-shooting",85);
create_family("������",3,"����");
        map_skill("parry","rain-steps");
        map_skill("archery","god-shooting");
	map_skill("dodge","rain-steps");
	map_skill("force","iceforce");
        set_temp("apply/attack",10);
        set_temp("apply/dodge",10);
        set("force_factor",5);
set("chat_chance_combat",5);
set("chat_msg_combat",({
(: perform_action("archery.ten_kee") :),
}));
          setup();
carry_object(C_OBJ"/arrow-6");
carry_object(C_OBJ"/bow-6")->wield();
}
int accept_kill(object ob)
{
 command("say ����Ϊ�����������Ǻ��۸��ģ����ҵ����Ǽ���������!");
 command("say ������!!");
command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say �ð�!!�Ҿ��������档");
command("cmd holdup arrow with bow");
return 1;
}


