#include <ansi.h>
inherit NPC;

void create()
{
        set_name("�ű���", ({ "chung-bi moon","moon" }) );
        set("gender","Ů��");
        set("race", "����");
        set("title", "������");
        set("bellicosity", 1000);
        set("attitude", "killer");
        set("age", 55);
        set("long", "�ֲ��ĳ�Ů ,�ƺ������...��ǧ��С�� :~~~\n");
        set("str", 30);
        set("spi", 5);
        set("max_kee", 1000);
        set("kee", 1000);
        set("max_force", 1000);
        set("force", 1000);
        set_skill("dodge",80);
        set("combat_exp",200000);
        set_skill("unarmed", 80);
        set("force_factor", 20);
        set("chat_chance",10);
        set("chat_msg",({
               "�ű���˵�� :�ǺǺ�! �������µ�һ������ !\n",
                }));
        setup();
        carry_object("/u/h/houng/eq/cape1.c")->wear();
}



