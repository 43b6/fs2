inherit NPC;

void create()
{
        set_name("�������", ({ "butterfly" }) );
        set("race", "Ұ��");
        set("age", 1);
        set("long", "
ϡ�������ĺ�������������ڻ��Լ䣬��̬�Եĸ����浾����ţ���ϸ
һ�ƣ�������ͷ����һĨ�����İߵ㣬ɫ���������һ�㡣");
        set("str", 10);
        set("cor", 20);
        set("verbs", ({ "bite"}));
                set("limbs", ({ "ͷ��", "����",  }) );
        set("combat_exp",600);
	set("chat_chance",10);
	/*
        set("chat_msg", ({
	(: this_object(),"random_move" :),
                       }) );
	*/
        setup();

}
