
inherit NPC;
string give_book();
int i=1;

void create()
{
	set_name("��Т��",({"shou hon","hon"}));
	set("gender", "����");
	set("age", 27);
	set("long",
		"��Ԫ��֮�ܳ�����֮һ , ����������ָ���½���ͽ
��ϰ�������� , �㷢������������һ���� .\n");

	set("attitude", "heroism");
	set("combat_exp", 10000);

	set("str", 30);
	set("int", 30);
	set("cor", 30);
	set("cps", 30);
	set("con", 30);

	set("force", 400);
	set("force_factor", 4);
	set("max_force",400);

	set("chat_chance_combat", 40);
   /*
	set("chat_msg_combat", ({
		(: exert_function, "powerup" :),
		(: exert_function, "recover" :),
	}) );
   */
	create_family("����",6,"����");

	set_skill("force", 30);
	set_skill("unarmed",30);
	set_skill("blade",50);
	set_skill("parry",40);
	set_skill("dodge",20);
	set_skill("gold-blade",40);
	set_skill("fly-steps",30);
	set_skill("sixforce",30);
	map_skill("force", "sixforce");
	map_skill("parry", "gold-blade");
	map_skill("blade", "gold-blade");
	map_skill("dodge", "fly-steps");
	map_skill("move", "fly-steps");
	set("inquiry",([
	"��"   :   "�� , ����һ������ \n",
	"��С��"  :  (:give_book:)
	]));

	setup();

	carry_object("/open/gblade/obj/gold-blade")->wield();
	carry_object("/open/gblade/obj/blade-book");
	add_money("gold",1);
}

void init()
{
	::init();
	add_action("do_accept", "accept");
}
string give_book()
{
	if(!this_player()->query_temp("can-get"))
	return "�� , ���Ǹ���Ů�� ";
	command("say �ɶ�������˵�� ?");
	command("blush");
	if(i<1)
	{
	return "�ҵ�����ˆ� , �´��������ҽ�� !";
	}
	this_player()->delete_temp("can-get");
	command("say �Ȿ����� , ��ɱ�˵��ȥ� !");
	command("give "+this_player()->query("id")+" book");
	i=i-1;
	return "�м� , �м� !";
}

