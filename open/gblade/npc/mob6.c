
inherit NPC;
void create()
{
        set_name("����Ӧ��", ({ "dragon" }) );
        set("race", "Ұ��");
        set("age", 650);
        set("long", "
����Ӧ�������ž���ֱ�������ƣ��޴��צ�ӣ��ƺ���ʱҪ����������
���飬���в�ʱ���һ�����棬�յ���ڵĵص�һƬ������
");
        set("str", 65);
        set("con", 55);
	set("kee",8000);
	set("max_kee",8000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "ͷ��", "��צ","β��"  }) );
        set("attitude","peacful");
	set("combat_exp",1000000);
	set_temp("apply/attack",100);
	set_temp("apply/dodge",100);
        set("chat_chance",10);
        set("chat_msg", ({
        "����Ӧ���ӿ������һ�����棬�������üë���յ��ˡ�\n",
	"����Ӧ����צ��һ�ģ��ض�ɽҡ��ͷ�ϵ���ʯӦ�����ºü�������\n",
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
if(ob->query("pass_gblade")<7)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<7)
	ob->set("pass_gblade",7);
::die();
}

