#include <ansi.h>

inherit NPC;
void create()
{
     set_name("�½�����", ({"new boy","boy"}));
        set("gender", "����" );
        set("age", 15);
        set("str", 25);
        set("cor", 45);
        set("cps", 25);
        set("int", 30);
        set("long",
                "�ռ������ŵ�����, Ҳ�����ŵ��½����ӡ�\n");
        set("combat_exp",3000);
        set("chat_chance", 1);
        set("chat_msg", ({
                (: command ("sigh") :),
                (: command ("say ������ɽ��....�ƺ��뺣��....") :),
                (: command ("say ����ǧ��Ŀ....����һ��¥....") :),
        }) );
        set_skill("parry", 50);
        set_skill("unarmed", 50);
        set_skill("dodge", 30);
        set_skill("winter-steps", 30);
        map_skill("dodge","winter-steps");
        setup();
        add_money("silver", 5);
        carry_object("/obj/cloth")->wear();
}

