//���� make by chun,fix by onion


inherit NPC;


void create()
{
	set_name("����ʿ",({"gold-blade guard","guard"}));
	set("gender","����");
	set("age",25);
	set("class","blademan");
	set("force",600);
	set("max_force",600);
	set("force_factor",5);
	set("str",25);
set("long","����֮������ʿ ,���˿��������������ڡ�\n");
	set("combat_exp",40000);
	set_skill("blade",70);
	set_skill("dodge",40);
	set_skill("parry",40);
	set_skill("gold-blade",60);
	set_skill("fly-steps",40);
	set_skill("sixforce",40);
	map_skill("blade","gold-blade");
	map_skill("parry","gold-blade");
	map_skill("dodge","fly-steps");
	map_skill("move","fly-steps");
	map_skill("force","sixforce");
	setup();
	carry_object("/open/gblade/obj/blade2.c")->wield();
	   carry_object("/open/gblade/obj/gold-boots")->wear();
	   carry_object("/open/gblade/obj/gold-robe")->wear();
	carry_object("/open/gblade/obj/gold-armor")->wear();
	add_money("gold",2);
}


void init()
{
	object ob;
	::init();
	if(interactive(ob =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
	call_out("greeting",2,ob);
	add_action("do_nod","nod");
	}
}

int accept_fight(object who)
{
return notify_fail("����ʿ˵�� : �Բ��� , ��û������ĥ����\n");
}

void greeting(object ob)
{
if(!ob->query("family/family_name")&&ob->query("class")=="blademan")
{
command("say ��������ʦ����\n");
}
	if( ob->query("family/family_name")=="����")
	{
        command("smile "+ob->query("id"));
        }
	if( ob->query("class")=="poisoner" )
        kill_ob(ob);
	if( ob->query("class")=="killer" )
        kill_ob(ob);
}

 int do_nod()
 {
 object ob;
 ob=this_player();
	if(!ob->query("family/family_name")&&ob->query("class")=="blademan")
	call_out("do_act1",4);
  return 0;
 }
  void do_act1()
  {
command("say ԭ��������Ľ��ү�����������µ�ѽ�����ܽ�ȥ�ˡ�\n");
this_player()->set_temp("allow-enter",1);
  }
