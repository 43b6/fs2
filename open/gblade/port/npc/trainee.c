inherit NPC;

void create()
{
	set_name("���ŵ���������",({"trainee"}));
	set("long","�����ڽ����еĽ��ɵ��� , �㿴�����Ż���
������� , ������Ϊ���� .\n");
	set("gender","����");
	set("combat_exp",8000);
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
	 set_skill("fly-steps",30);
	 set_skill("gold-blade",30);
	map_skill("dodge","fly-steps");
	map_skill("blade","gold-blade");
	set("chat_chance",10);
	set("chat_msg",({
	"���ŵ���������˵�� : �����������ұ�ְ֮��Ҳ !\n",
	"���ŵ��������ӵ��������˵�� : ��һ��Ҫ�ڽ����Ϻúô��������� !\n",
	}));
	setup();
	carry_object("/open/gblade/obj/g-blade")->wield();
	add_money("silver",5);
}
