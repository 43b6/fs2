// guard.c

#include <ansi.h>

inherit NPC;
void create()
{
        set_name("��Ů", ({ "woman" }) );
        set("gender", "Ů��" );
        set("age",35);
        set("str", 17);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
	set("long",
                "һλ��ͨ�ĸ�Ů.\n");
        set("combat_exp",100);
	set("attitude", "peaceful");
        set("chat_chance", 30);
        set("chat_msg", ({
             "��Ů˵: ��ջ�ϰ�ÿ����ϴ�ذ�,��֪����ϴ��ô?\n",
             "��Ů˵: ̰��С��ͯ�����ƺ���Щ����.\n",
             "��Ů˵: �ɵ���ʿÿ������һ��������\n",
             (: random_move :),
        }) );
        set_skill("dodge", 5);
	setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin", 15);
}
