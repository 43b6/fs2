inherit NPC;

void create()
{
        set_name("���Ÿ��", ({ "gold-brachium roc","roc" }) );
        set("race", "Ұ��");
        set("age", 550);
        set("long", "
����������ë��������˫�ۣ���һֻ�ټ����������ޣ�����ǿ�������ĳ�
�򣬼����˫צ��������ѵĹ���������Ҳ�������е�����ò�Ҫ�Ǡ���
");
        set("str", 40);
        set("con", 55);
        set("kee",4000);
        set("max_kee",4000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "ͷ��", "צ��","���","˫��"  }) );
        set("attitude","peacful");
        set("combat_exp",100000);
	set_temp("apply/attack",100);
	 set_temp("apply/dodge",100);
        set("chat_chance",10);
        set("chat_msg", ({
        "���Ÿ��չ��˫��Ķ��W������ǿ�紵�������������ʹ��\n",
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
if(ob->query("pass_gblade")<4)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<4)
	ob->set("pass_gblade",4);
::die();
}

