#include <ansi.h>

inherit NPC;
void create()
{
        set_name("�ϸ�Ů", ({ "old woman","old","woman" }) );
        set("gender", "Ů��" );
        set("age",60);
        set("str", 20);
        set("cor",30);
        set("cps", 30);
        set("int", 20);
        set("long",
                "һλ�����Ըߵ��ϸ�Ů.\n");
        set("combat_exp",6000);
set("max_kee",3500);
        set("attitude", "peaceful");
        set_skill("dodge", 7);
        set("chat_chance", 30);
        set("chat_msg", ({
        "�ϸ�Ů������ʣ�С�һҪ��Ҫ�Ե㶫��ѽ?\n",
        }) );

        setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin", 15);
}
int accept_kill(object ob)
{
 command("say ����Ϊ���˼��Ǻ��۸��ģ����ҵ�����");
 command("say ������!!");
 command("holdwith arrow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("smile");
command("say ���У������ʪ���������޷����֡�");
return 0;
}
