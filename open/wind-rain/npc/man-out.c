inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
        object ob;
	set_name("ͥ԰�̴�",({"man"}));
	set("long","
��������ͥ԰�д�С���ع�
���ĳ���, ������Ѳ��ͥ԰
�Ƿ�����Ҫ���޵ĵط�.
");
	set("gender","����");
	set("combat_exp",20000);
	set("attitude","peaceful");
	set("age",25);
	set("class","soldier");
	set("str",30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_kee",1000);
	set_skill("unarmed",5);
	set_skill("dodge",5);
        set_skill("move",5);
/*
        set("chat_chance", 5);
	set("chat_msg", ({
	"\nͥ԰�̴�˵ : �J�J�����������������Ϻ�һ��С�˻�������:D~~\n",
        "\nͥ԰�̴�˵ : С�ֵܣ�֪����Ϊʲô��ô���¡�����Ϊ�Ҷ��ȡ���ţ��\n",
	}));
*/
	setup();
	add_money("silver",10);
}

