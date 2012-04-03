// guard.c

#include <ansi.h>

inherit NPC;
void create()
{        
	set_name("�ɽ��ɽ�ͯ", ({ "sword boy", "boy" }) );
	set("gender", "����" );
	set("age", 18);
	set("str", 35);
	set("cor", 45);
	set("cps", 25);
	set("int", 25);
	set("long",
                "һλ�ɽ��ɵ�С��ͯ,�����Ͽ���Щ����,\n"
		"����������������,��ɲ�ҪС����.\n" );
        set_skill("sword", 20);
	set("combat_exp",717);
	set("attitude", "peaceful");
	set("chat_chance", 15);
	set("chat_msg", ({
		"��ͯ˵: ����������ɽ����,û�²�Ҫ����.\n",
		"��ͯ˵: Ҫ����ɽ����,����ȷ�����Ѿ��˽�����֮��.\n",
		"��ͯ˵: ������·,�ɽ��ɿɲ�����...\n",
	}) );
	set("inquiry", ([
		"����": "�����ж���֪���㴳��ô��ɽ����...\n",
		"�޼�����": "���Ǳ�������.\n",
		"��ɽ����": "���Ǳ��ŵ�����,����ò�Ҫ����!!\n",
	]) );
        set_skill("shasword", 13);
        map_skill("sword","shasword");
        set_skill("sword",15);
        set_skill("unarmed", 15);
	set_skill("parry", 30);
	set_skill("dodge", 25);
	setup();
	add_money("coin",100);
        carry_object("/open/gsword/obj/wrists")->wear();
        carry_object("/open/gsword/obj/map1");
        carry_object("/open/gsword/obj/suit")->wear();
        carry_object("/open/gsword/obj/boot-1")->wear();
        carry_object("/open/gsword/obj/woodsword")->wield();
}
