inherit NPC;
#include <ansi.h>
#include <marksman.h>
void create()
{
        set_name("��������", ({ "bow coach","bow","coach" }) );
set("class","marksman");
create_family("������",3,"����");
        set("gender", "����" );
        set("age", 25);
        set("long", "һλ����Ŭ������Ҫ�ѹ��������õĴ��ƽ�����\n");
set("combat_exp",70000);
set("max_kee",800);
        set("max_force",500);
set_skill("archery",60);
set_skill("dodge",60);
set_skill("parry",60);
set_skill("rain-steps",60);
set_skill("iceforce",80);
map_skill("force","iceforce");
set_skill("god-shooting",60);
        map_skill("parry","rain-steps");
        map_skill("archery","god-shooting");
        set_temp("apply/attack",10);
        set_temp("apply/dodge",10);
        set("force_factor",5);
        set("chat_msg",({
        "����˵�ţ����Ұѹ����úã�û�гԷ�ѽ�� ",
        }));
          setup();
carry_object(C_OBJ"/arrow-5");
carry_object(C_OBJ"/bow-5")->wield();
}
int accept_kill(object ob)
{
 command("say ���ǳ���ʲô����������ɱ��!");
 command("say ��!!!������!!");
command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say �ð�!����һ�°ɡ�");
command("cmd holdup arrow with bow");
return 1;
}

