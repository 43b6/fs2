inherit NPC;

void create()
{
	 set_name("����",({"blade man","man"}));
	set("long","�ڽ������߶���ƽ������ , �ȵ����� , ǿ�����������һ�� !\n");
	set("gender","����");
	set("combat_exp",2000);
	set("attitude","peaceful");
	set("age",22);
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
	set("chat_chance",10);
	set("chat_msg",({
	"����˵�� : �� , ˭��Ӯ����������֮�� !\n",
	}));
	setup();
	carry_object("/open/gblade/obj/blade")->wield();
	add_money("silver",1);
}
