#include <ansi.h>
inherit NPC;
void create()
{
        set_name("��Ů", ({ "woman"}) );
        set("gender", "Ů��" );
        set("age",30);
        set("str", 17);
        set("cor",35);
        set("cps", 25);
        set("int", 15);
        set("long",
                "һλ����æ�Ű������Ϲ�����.\n");
        set("combat_exp",8000);
set("max_kee",3000);
        set("attitude", "peaceful");

        set_skill("dodge", 7);
        set("chat_chance",20);
        set("chat_msg",({
        "��Ů������˵����!������ϴ������·���\n",
        }));
        setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin", 15);
}
int accept_kill(object ob)
{
 command("say ����ΪŮ���Ǻ��۸�����?");
 command("say ������!!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say ��!!���������������漸�аɡ�");
return 1;
}

