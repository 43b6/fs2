inherit NPC;
#include <ansi.h>
#include <marksman.h>
void create()
{
        set_name("����", ({ "chang yang","chang","yang" }) );
set("class","marksman");
create_family("������",3,"����");
        set("gender", "����" );
        set("age", 40);
        set("long", "������������Ļ���֮һ��\n");
        set("nickname",HIY"�󻤷�"NOR);
set("combat_exp",200000);
        set("max_force",1000);
	set("force",1000);
        set_skill("archery",85);
	set_skill("god-shooting",85);
	set_skill("force",50);
	set_skill("iceforce",50);
set_skill("dodge",80);
set_skill("parry",80);
set_skill("rain-steps",70);
        map_skill("parry","rain-steps");
        map_skill("archery","god-shooting");
	map_skill("dodge","rain-steps");
	map_skill("force","iceforce");
        set_temp("apply/attack",10);
        set_temp("apply/dodge",10);
        set("force_factor",5);
set("functions/ten_kee/level",65);
set("chat_chance_combat",10);
set("chat_msg_combat", ({
(: perform_action("archery.ten_kee") :),
}));
          setup();
carry_object(C_OBJ"/arrow-7");
carry_object(C_OBJ"/bow-7")->wield();
}
int accept_kill(object ob)
{
 command("say �治֪���û�п��������˭��?��ɱ��!");
 command("say ������!!");
command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say �����ͷ��һ��ɢ���Ҿ������漸�е����˶��ɡ�");
command("cmd holdup arrow with bow");
return 1;
}
