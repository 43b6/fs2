inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
	set_name("ͥ԰��Ů",({"girl"}));
	set("long","
��������ͥ԰�л����ݲݵ�
�Ů, �����������ά�ֽ�
��ϸ��¥����������.
");
	set("gender","Ů��");
	set("combat_exp",13000);
	set("attitude","peaceful");
	set("age",25);
	set("class","soldier");
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_kee",800);
	set_skill("dagger",5);
	set_skill("dodge",5);
        set_skill("move",5);
        
        set("chat_chance", 5);
	set("chat_msg", ({
	"\nͥ԰��Ů˵ : �벻Ҫ�Ҷ����������˼�����������̫�����ں���Ү:(\n",
        "\nͥ԰��Ů˵ : �����㣬�����Զ��������������ۡ�\n",
	}));
        //carry_object(C_OBJ"/dagger-1")->wield();
        
	setup();
	add_money("silver",10);
}

