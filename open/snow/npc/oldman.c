// oldman.c

inherit NPC;

int give_you( object me )
{
	object obj;
	command("say �����˰� !");
	command("say ��Ӱ����ѩ���Թ��������ȷ��ʮ��������");
	if( !present( "cold pill" , this_object() ) ) return 1;
	command("say ����һ��ҩ�������Է�ֹ���ж���");
	message_vision("$N��$nһ��ҩ����\n",this_object(),me);
	obj = present( "cold pill",this_object());
	if( obj ) obj->move( me );
}
void create()
{
	set_name("����",({ "oldman" }));
	set("gender", "����" );
	set("age",64);
	set("long","�㿴������һ�����ص����ߣ��������ƺ���������\n");
	set("combat_exp",1000000);

	set("kee",2000);
	set("max_kee",2000);
	set("force",3000);
	set("max_force",3000);
	set("force_factor",20);
	set_temp("apply/damage",60);
	set_temp("apply/armor",40);
	set_skill("unarmed",100);
	set_skill("snow-martial",120);
	map_skill("unarmed","snow-martial");
	set_skill("force",100);
	set_skill("snowforce",100);
	map_skill("force","snowforce");
	set_skill("dodge",100);
	set_skill("black-steps",120);
	map_skill("dodge","black-steps");
	setup();
	carry_object("/open/snow/obj/cold_pill");
}
void init()
{
	object me = this_player();
	if( !present( "cold pill" , me ) && !me->query_temp("no_fear_poison") )
		call_out("give_you",1,me);
}
