#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
        set_name("СŮ��", ({ "girl" }) );
        set("gender", "Ů��" );
        set("age",9);
        set("long",
                "һλ��������ɰ���СŮ����\n");
        set("combat_exp",2500);
        set("attitude", "peaceful");
set("max_kee",4500);
        set("chat_chance", 30);
        set("chat_msg", ({
        "СŮ��������а�����������С������׽�Բء�\n",
        }) );
        setup();
        add_money("coin", 10);
        carry_object("/obj/cloth")->wear();
}
int accept_kill(object ob)
{
 command("cry");
 command("say �ְ�!����!����������!���磬����Ҫɱ��!!!");
 command("holdwith arrow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say �ð�!!���Ǿ���������ɡ�");
return 1;
}
