inherit NPC;

void create()
{
	set_name("���ŵ���������",({"trainee"}));
	set("long","һ�����Ӻ������Ľ𵶵��� .\n");
	set("gender","����");
	set("combat_exp",3500);
	set("attitude","peaceful");
	set("age",16);
	set("class","blademan");
	set("str",20);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("blade",30);
	set_skill("dodge",30);
	set_skill("parry",30);
	setup();
	carry_object("/open/gblade/obj/woodblade")->wield();
	add_money("silver",1);
}
