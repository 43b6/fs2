inherit NPC;
#include <ansi.h>

#include <marksman.h>
void create()
{
        set_name("������", ({ "guard" }) );
        set("class","blademan");
        set("gender", "����" );
        set("age", 25);
        set("long", "������������ȫ���������Է�ֹ����Ǳ�롣\n");
set("combat_exp",100000);
        set("max_force",500);
set_skill("archery",50);
set_skill("dodge",50);
set("force",500);
set_skill("parry",50);
set_skill("god-shooting",30);
set_skill("rain-steps",30);
        map_skill("parry","rain-steps");
        map_skill("archery","god-shooting");
        set_temp("apply/attack",10);
        set_temp("apply/dodge",10);
        set("force_factor",5);
        set("chat_msg",({
        "�����ȵ��� ���ź��ˣ���������ʲô�ġ� ",
        }));
          setup();
carry_object(C_OBJ"/arrow-2");
carry_object(C_OBJ"/bow-2")->wield();
}
int accept_kill(object ob)
{
 command("say ����۾�����ƨ������?����ɱ��!");
 command("say ������!!");
command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say ������Ҫ��ְλ��û�п������档");
return 0;
}

