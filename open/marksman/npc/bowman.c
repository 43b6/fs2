inherit NPC;
#include <ansi.h>
#include <marksman.h>
void create()
{
        set_name("����������", ({ "bowman" }) );
set("class","marksman");
create_family("������",4,"����");
        set("gender", "����" );
        set("age", 25);
        set("long", "һλ����Ŭ������Ҫ�ѹ������õ����֡�\n");
set("combat_exp",50000);
set("max_kee",800);
        set("max_force",500);
set_skill("dodge",50);
set_skill("parry",50);
set_skill("archery",50);
set_skill("god-shooting",30);
set_skill("rain-steps",50);
map_skill("parry","rain-steps");
map_skill("force","iceforce");
set_skill("iceforce",50);
        map_skill("archery","god-shooting");
        set_temp("apply/attack",10);
        set_temp("apply/dodge",10);
        set("force_factor",5);
        set("chat_msg",({
        "����������Ŭ����˵�ţ���һ��������ʦ�����ҵĹ���Ŭ��ѧϰ�� ",
        }));
          setup();
carry_object(C_OBJ"/bow-1")->wield();
carry_object(C_OBJ"/arrow-1");
carry_object(C_OBJ"/book");
}
int accept_kill(object ob)
{
 command("say �㾹�Ҷ����ҵ�ͷ������������ǻ�Ĳ��ͷ���!");
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


