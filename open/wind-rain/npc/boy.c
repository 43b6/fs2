inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
        object ob;
	set_name("ͯ��",({"boy"}));
	set("long","
�����æͥ԰�е�С����, 
�÷ֵ��̴�����Ů�ǵĹ���
��, ���ն���һ��.
");
	set("gender","����");
	set("combat_exp",9000);
	set("attitude","peaceful");
	set("age",14);
	set("class","soldier");
	set("str",30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_kee",700);
	set_skill("unarmed",5);
	set_skill("dodge",5);
        set_skill("move",5);
/*
        set("chat_chance", 5);
	set("chat_msg", ({
	"\nͯ��˵�����ˡ�������ͣ��ס���绰����������\n",
        "\nͯ��̾�����������ϸ��ڵĴ����ҹ��˯��һֱ������������Ҳû˯:(\n",
	}));
*/
	setup();
	add_money("silver",10);
}

