inherit NPC;

void create()
{
        set_name("�ݵؾ���", ({ "big rat","rat" }) );
        set("race", "Ұ��");
        set("age", 600);
        set("long", "
����Сɽ�ľ���վ������ǰ����ʱ������Լ�����С���������������
��һ� ��Ķ�λ�������Ĵ�������������ǳԿ���һ����
�㿴�˿��ݵؾ����ڵص��ٶȣ����������ص��ǲ��Ǿ������ڵġ�
");
        set("str", 60);
        set("con", 55);
        set("kee",7000);
        set("max_kee",7000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "ͷ��", "��צ","β��"  }) );
        set("attitude","peacful");
	 set("combat_exp",400000);
	 set_temp("apply/attack",100);
	set_temp("apply/dodge",100);
        set("chat_chance",10);
        set("chat_msg", ({
        "�ݵؾ����à�����צ�����ڵ��棬Ƭ�̰ѵ����ڳ���һ���󶴡�\n",
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
if(ob->query("pass_gblade")<5)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<5)
	ob->set("pass_gblade",5);
::die();
}

