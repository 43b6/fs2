#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
        set_name("ƽ��", ({ "man" }) );
        set("gender", "����" );
        set("age",30);
        set("str",35);
        set("cor",35);
        set("cps", 25);
        set("int", 15);
        set("long",
                "һλס�ڳ�ɳ�ǳǵ��ϰ��գ�ÿ������Ŭ���Ĺ�����\n");
set("combat_exp",5000);
set("max_kee",3400);
        set("attitude", "peaceful");
        set_skill("parry", 15);
        set_skill("dodge", 5);
        set("chat_chance", 30);
        set("chat_msg", ({
        "ƽ������˵��ÿ�춼Ҫȥ�����÷�ม�\n",
        }) );

        setup();
        add_money("coin", 25);
        carry_object("/obj/cloth")->wear();
        carry_object(COMMON_OBJ"pill");
}

int accept_kill(object ob)
{
 command("say �������ƽ�������Ҳ��Ҫɱ��������������!");
 command("say ��ƴ����ҲҪɱ���㣬������!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("hmm");
command("say �����û�����˶�����������һ���µ����˶���");
return 1;
}
