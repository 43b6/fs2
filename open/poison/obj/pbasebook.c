inherit ITEM;

void create()
{
	set_name("��������", ({"poison book","book"}) );
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "��");
		set("value", 0);
		set("material", "paper");
		set("skill", ([
			"name":   "poison",
			"exp_required":1,
			"sen_cost":   35,
			"difficulty":  15,
			"max_skill":  10,
		]) );
	set("long","����һ�����Ŷ�������ڤ��ħ�̵Ļ��������飬�����
��һЩ�������ö�֪ʶ��\n");
	set("no_drop",1);
	}
	setup();
}
int valid_learn(object me)
{
return 1;
}
