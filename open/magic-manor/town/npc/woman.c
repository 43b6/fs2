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
                "�����ڷ������һλ��ͨ�ĸ�Ů��\n");
        set("combat_exp",1500);
        set("attitude", "peaceful");

        set("chat_chance", 15);
	set("chat_msg",({
	(: random_move :),
        }));

        set_skill("dodge", 15);
        setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin", 25);
                
}
