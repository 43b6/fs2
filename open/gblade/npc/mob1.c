inherit NPC;

void create()
{
        set_name("��ͷ��", ({ "fly-head adultoid","adultoid" }) );
        set("race", "Ұ��");
        set("age", 500);
        set("long", "
�Ϲ�ʱ�����еĹ��ޣ�����繷�����ܾ��ˣ���Ȯ��֮���ߡ���ͷ�ܷɣ�
�Զ�Ϊ��
");
        set("str", 40);
        set("con", 55);
        set("kee",4000);
        set("max_kee",4000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "ͷ��", "����","����"  }) );
	 set("attitude","peaceful");
	 set("combat_exp",10000);
	set_temp("apply/attack",50);
	set_temp("apply/dodge",50);
        set("chat_chance",10);
        set("chat_msg", ({
        "��ͷ�޵�ͷ���˳�ȥ����������˼�Ȧ���ֻص����Լ����ϡ�\n",
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
	if(ob->query("pass_gblade")<1)
	this_object()->kill_ob(ob);
}
void die()
{
	object ob;
	ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<1)
	ob->set("pass_gblade",1);
::die();
}
