
inherit NPC;
void create()
{
        set_name("С��", ({ "small genie","genie" }) );
        set("title","ħ������");
        set("race","Ұ��");
	set("gender", "����" );
        set("age",132);
	set("long","����ħ���ľ���, �͵ȵ�ħ��.\n");
	set("combat_exp",1000);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
              (: this_object(),"random_move" :),
            "С�������ҽ�, ��֪���ڽ�Щʲô?\n",
            "С��¶�����µ�����, ���ڽ��俴����.\n",
        }) );
	set_skill("parry", 20);
        set_skill("dodge", 20);
	setup();
        add_money("coin", 50);
         	
}

