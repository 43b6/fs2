inherit NPC;

void create()
{
        set_name("���׾�β��", ({ "nine-switch tortoise","tortoise" }) );
        set("race", "Ұ��");
        set("age", 1000);
        set("long", "
��������ţͷһ����ͷ�����治֪����Ҫ��ôЭ���˴˵Ķ�����������
�ǻ��ƵĹ�ǣ������൱��Ư������˵�ڹ�ǵĻ���Խ�࣬��ʾ����Խ��
�������Ӡ���Ż�����ǧ���ˡ�
");
        set("str", 68);
        set("con", 40);
	  set("kee",10000);
	 set("max_kee",10000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "ͷ��", "���","β��"  }) );
        set("attitude","peacful");
	set("combat_exp",1000000);
	set_temp("apply/attack",100);
	set_temp("apply/dodge",100);
        set("chat_chance",10);
        set("chat_msg", ({
        "��β�����������š�\n",
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
if(ob->query("pass_gblade")<6)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<6)
	ob->set("pass_gblade",6);
::die();
}

