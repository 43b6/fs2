inherit NPC;

string do_ask (object me);

void create()
{
        set_name("��ع��", ({ "shoue",}) );
        set("long", "
���ҵĶ�С��ʵ�ڲ�����һ�������������ݵģ�һ˫���������ۣ�����
���������������Ƕ����ˣ�������Ҷ����ü����������������ɧ����
�溬��������¶������δ��Ц���š�
");
        
	set("title","�����Ҷ�С��");
        set("age", 19);
        set("int", 30);
        set("cps", 24);
        set("str", 23);
        set("cor", 22);
        set("spi", 29);
        set("con", 26);
        set("kar", 27);
        set("per", 29);
	set( "force_factor", 5);
	set("combat_exp",100000);
	set("force",500);
	set("max_force",500);
	set_skill("blade", 60);
	set_skill("dodge", 40);
        set_skill("parry", 60);
	set_skill("unarmed",40);
	set_skill("force", 40);
	set_skill("gold-blade",70);
	set_skill("sixforce",30);
	set_skill("fly-steps",50);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");


        set( "gender", "Ů��");


        set("limbs", ({ "ͷ��",  "˫��", "˫��", "����" ,"����","����"}) );
     
        set("attitude", "peaceful");

        set("chat_chance", 6);
        set("chat_msg", ({
        }) );

      
        setup();
	carry_object("/open/gblade/obj/moon-blade")->wield();
	carry_object("/open/gblade/obj/agraffe.c")->wear();
	carry_object("/open/gblade/obj/topknot.c")->wear();
	carry_object("/open/gblade/obj/boots2.c")->wear();
        add_money("gold",15);
}


