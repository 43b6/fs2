inherit NPC;

void create()
{
	set_name("ɽè", ({ "cat" }) );
	set("race", "Ұ��");
	set("age", 4);
	set("long", "һֻ�׺ݼ�����ɽè.\n");
	set("str", 55);
	set("cor", 25);
        set("spi", 45);
        set("con", 40);
       set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );

      set("verbs", ({ "bite"}));
	set("combat_exp",15000);
	set_temp("apply/armor", 90);
	set_temp("apply/attact", 30);
	set("attitude","aggressive");
	set("chat_chance",10);
	set("chat_msg", ({
	    (: this_object(),"random_move" :),
	               }) );
	set_skill("dodge",50);
        set_skill("unarmed",10);
	setup();               
	add_money("coin",900);

}

