#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
        set_name("����", ({ "old man","old","man" }) );
        set("gender", "����" );
        set("age",60);
        set("str",35);
        set("cor",35);
        set("cps", 25);
        set("int", 15);
        set("long",
                "һλ��ͷ����ͷ�ӣ����������ﵽ��������ȥ��\n");
        set("combat_exp",5000);
set("max_kee",4000);
        set("attitude", "peaceful");
        set("chat_chance", 30);
        set("chat_msg", ({
      "��үү������˵����!�ѵ�Ҫ�Ժ�Ҫ������ҩ��������?\n",
        }) );
        set_skill("parry", 20);
        set_skill("dodge", 7);
        setup();
        add_money("coin", 25);
        carry_object("/obj/cloth")->wear();
        carry_object(COMMON_OBJ"pill");
}
int accept_kill(object ob)
{
 command("say ������������˼Ҷ����Ź����������!");
 command("say ����ѽ!!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say ż������!�Ҷ���ô������������档");
return 0;
}
