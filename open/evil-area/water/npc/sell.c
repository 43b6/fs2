inherit F_VENDOR;

void create()
{
	set_name("ë��",({"hair worm","worm"}));
	set("long","
�����������Ψһһ���������๵ͨ�ĹƳ棬����ͨ��������֮����
�������ڿ��Ը���������������˵���з���һ����������ȥ��������
��������ζ���ĵ�ҩ��\n");
	set("age",1782);
	set_skill("unarmed",100);
	set_skill("move",100);
	set_skill("dodge",100);
	set_skill("force",100);
        set("gender", "����" );
	set("kar",10);
	set("per",10);
	set("str",10);
	set("cor",10);
	set("int",30);
	set("combat_exp",100000);
	set("max_gin",10000);
	set("max_kee",10000);
	set("max_sen",10000);
	set("max_force",100000);
        set("force_factor",10);
        set("vendor_goods", ({
		"/open/evil-area/npc/obj/enemy_pill",
		"/open/evil-area/npc/obj/damage_pill",
		"/open/evil-area/water/npc/obj/d_pill",
        }) );
	setup();
}




void greeting(object ob)
{

        if( !ob || environment(ob) != environment() )
		return;
	if( ob->query_temp("evil/water/killed") )
		command("say �������ص��˰�...��Ϊ�β�ɱ����֮�����...��\n");
	else
		command("say ��������ʲô...����û������Ҫ�Ķ���...\n");
	command("say �ð�...����Ҳ����Щ��������Ҫ...�Ҷ��������ǽ��ɫ�Ķ�����������Ȥ�ġ�\n");
	command("say ����������������������Щ�ƽ���ҽ��װ�...\n");
}
