

inherit NPC;
void create()
{
        set_name("����",({"man"}));
        set("title","ħ������");
	set("gender", "����" );
        set("age",31);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
	set("long","ħ������ͨ����, ��æ���Լ�����!\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
            "����: ��˵��а������һֻǧ����, ͷ�ϵ���Ŀ�����ڵĵ�Ԫ����.\n",
            "����: ħ���������ɽ��ֲ���(��Ҷ����).\n",
            "����: ��˵�ü���ǰ��λ�ɽ��ĸ��ֱ�������ħ�ű���.\n",
              (: this_object(),"random_move" :),
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
         	
}

