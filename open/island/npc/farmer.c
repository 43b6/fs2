


// guard.c

#include <ansi.h>

inherit NPC;
void create()
{
        set_name("ũ��", ({ "farmer" }) );
        set("gender", "����" );
        set("age",65);
        set("str", 27);
        set("cor",35);
        set("cps", 25);
        set("int", 15);
        set("long",
                "һλ�þ��ڴ˵���ũ��.\n");
        set("combat_exp",120000);
        set("attitude", "peaceful");
        set("chat_chance", 35);
        set("chat_msg", ({
             "ũ��˵: ��λ���յĽ�������������, ,����������!!\n",
             "ũ��˵: ����������ɽ ,��˵ס�����ѽ!! ��֪�������Ǽ� .\n",
             "ũ��˵: ������������� ,���Դ���û�г��ֹ�!!\n",
             (: "random_move" :),
        }) );
        set_skill("dodge", 120);
        setup();
        carry_object("/obj/cloth")->wear();
        add_money("gold", 5);
}


