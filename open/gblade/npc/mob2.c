inherit NPC;

void create()
{
        set_name("����", ({ "curious snake","snake" }) );
        set("race", "Ұ��");
        set("age", 630);
   set("long", "
�ഫ�������̹ţ�����������Ϊ�磬��Ϊ�ף�ĿͫΪ�磬������
�����ż�Ϊ������֮�ߣ����������������´󺵡�
");
	 set("str", 40);
        set("con", 45);
        set("kee",4500);
        set("max_kee",4500);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "ͷ��", "���","����"  }) );
	 set("attitude","peaceful");
        set("combat_exp",30000);
	set_temp("apply/attack",60);
	set_temp("apply/dodge",60);
        set("chat_chance",10);
        set("chat_msg", ({
        "���Ŷ�����������צ��\n",
         }) );
       setup();
}
void init()
{
  object ob;
        ::init();
        if(interactive(ob=this_player()) && !is_fighting())
        {
        remove_call_out("greeting");
        call_out("greeting",2,ob);
        }
}
void greeting(object ob)
{
	if(ob->query("pass_gblade")<2)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<2)
	ob->set("pass_gblade",2);
::die();
}
