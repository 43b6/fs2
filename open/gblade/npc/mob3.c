inherit NPC;

void create()
{
        set_name("����˫ͷ��", ({ "two-heads snake","snake" }) );
        set("race", "Ұ��");
        set("age", 500);
        set("long", "
һ��ʮ���ɳ��ľ��ߣ�����˶�����ͷ������ǰ������ȥ������ʱҫ��
�����Ķ����������ţ��ӿ���ɢ�����ĳ�ζ����������
");
        set("str", 40);
        set("con", 55);
        set("kee",4000);
        set("max_kee",4000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "ͷ��", "�㲿","β��"  }) );
        set("attitude","peacful");
        set("combat_exp",98000);
	set_temp("apply/dodge",70);
	 set_temp("apply/attack",80);
	set("chat_chance",10);
        set("chat_msg", ({
        "����˫ͷ���ſ�ѩ����һ�ھͰ�һֻ��֪���Ĺ���������ȥ��\n",
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
  if(ob->query("pass_gblade")<3)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<3)
	ob->set("pass_gblade",3);
::die();
}
