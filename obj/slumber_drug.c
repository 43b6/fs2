// slumber_drug.c

inherit COMBINED_ITEM;

void create()
{
	set_name("�ɺ�ҩ", ({ "slumber drug", "drug" }) );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long",
			"����Ѱ�������ֵ��������������ɺ�ҩ������԰�����(pour)��\n"
			"��ˮ֮��ʹ�á�\n" );
		set("unit", "��");
		set("base_value", 20);
		set("base_unit", "��");
		set("base_weight", 30);
	}
	set_amount(1);
	setup();
}

void init()
{
	add_action("do_pour", "pour");
}

int do_pour(string arg)
{
	string me, what;
	object ob;
	function f;

	if( !arg
	||	sscanf(arg, "%s in %s", me, what)!=2
	||	!id(me) )
		return notify_fail("ָ���ʽ: pour <ҩ��> in <��Ʒ>\n");

	ob = present(what, this_player());
	if( !ob )
		return notify_fail("������û�� " + what + " ����������\n");
	if( !ob->query("liquid_remaining") )
		return notify_fail(ob->name() + "��ʲôҲû�У���װЩˮ�Ʋ����ܻ�ҩ�ۡ�\n");
	f = (: call_other, __FILE__, "drink_drug" :);
	ob->set("drink_func", bind(f, ob));
	ob->add("slumber_drug", 100);
	message_vision("$N��һЩ" + name() + "����" + ob->name() 
		+ "��ҡ���˼��¡�\n", this_player());
	add_amount(-1);
	return 1;
}

int drink_drug(object ob)
{
	this_player()->apply_condition("slumber_drug",
		(int)this_player()->query_condition("slumber_drug") 
		+ (int)ob->query("slumber_drug") );
	return 0;
}


