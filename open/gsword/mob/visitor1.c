// guard.c

#include <ansi.h>

inherit NPC;
void create()
{
	set_name("�����ο�", ({ "visitor", "man" }) );
	set("gender", "����" );
	set("age", 45);
	set("str", 15);
	set("cor", 45);
	set("cps", 25);
	set("int", 15);
	set("long",
		"һλ�������յ��ο�.�������ҵط��ж��ܼ�,\n"
		"һ��Ҳû������ĵ���...\n" );
	set("combat_exp",578);
	set("attitude", "peaceful");
	set("chat_chance", 10);
	set("chat_msg", ({
		"�����ο�˵: ����ɽ�羰�治��...\n",
		"�����ο�˵: �������Ǹ������ĺõط�...\n",
	}) );
	set_skill("sword", 25);
	set_skill("parry", 20);
	set_skill("dodge", 20);
	setup();
	add_money("silver",6);
        carry_object("/open/gsword/obj/sword")->wield();
        carry_object("/open/gsword/obj/robe")->wear();
        carry_object("/open/gsword/obj/sword_book.c");
         	
}

