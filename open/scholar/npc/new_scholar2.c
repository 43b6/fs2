#include <ansi.h>

inherit NPC;
void create()
{
        set_name("�½�����", ({ "new man","man"}));
        set("gender", "����" );
        set("age", 20);
        set("str", 25);
        set("cor", 45);
        set("cps", 25);
        set("int", 30);
        set("long",
                "�ռ������ŵ�����, Ҳ�����ŵ��½����ӡ�\n");
        set("combat_exp",8000);
        set("chat_chance", 1);
        set("chat_msg", ({
                (: command ("sigh") :),
                (: command ("say ��ǰ���¹�....���Ƶ���˪...."):),
                (: command ("say ��ͷ������....��ͷ˼����....") :),
        }) );
        set_skill("parry", 70);
        set_skill("unarmed", 70);
        set_skill("dodge", 40);
        set_skill("winter-steps", 40);
        map_skill("dodge","winter-steps");
        setup();
        add_money("silver",30);
        carry_object("/obj/cloth")->wear();
}

