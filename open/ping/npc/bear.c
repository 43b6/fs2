inherit NPC;

void create()
{
        set_name("Ұ��", ({ "bear" }) );
	set("race", "Ұ��");
	set("age", 5);
        set("long", "Ұ�ܸ߸ߵ�վ��,�Ӷ����Ĵ�צɨ����.\n");
	set("str", 45);
	set("cor", 45);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp",2371);
	set_temp("apply/armor", 40);
        set_temp("apply/attack", 15);
	set("random_move",2);
	set("chat_chance",10);
/*      set("chat_msg", ({
	    (: this_object(),"random_move" :),
                       }) ); */
	set_skill("dodge",30);
	setup();               
	add_money("coin",200);

}

