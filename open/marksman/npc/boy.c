#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
        set_name("С�к�", ({ "boy" }) );
        set("gender", "����" );
        set("age",15);
        set("str",20);
        set("cor",20);
        set("cps", 20);
        set("int", 10);
        set("long",
                "�ɰ������С�к�������Ŭ������ˣ�С�\n");
        set("combat_exp",2000);
set("max_kee",5000);
        set("attitude", "peaceful");
        set("chat_chance", 30);
        set("chat_msg", ({
        "С�к�������а��˵: ���磬���㣬����Ҫ��Ҫ��������Ϸ��\n",
      "С�к����ں��ھӵ�С����Ŭ������ˣ�С�\n",
        }) );
        setup();
        add_money("coin", 25);
        carry_object("/obj/cloth")->wear();

}
int accept_kill(object ob)
{
 command("say ����ѽ�����磬���㣬Ҫɱ��ѽ!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say ���磬���㣬���������棬�Ҳ����������ǡ�");
return 0;
}
