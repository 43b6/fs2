inherit ITEM;

void create()
{
	set_name("�����޷�", ({"base whip book","whip book","book"}) );
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "��");
		set("value",100);
		set("material", "paper");
		set("skill", ([
			"name" : "whip",
			"exp_required": 1000,
			"sen_cost" : 35,
			"difficulty" : 15,
			"max_skill":  30,
		]) );
	set("long","����һ�������޷������ϼ��ظ��ֳ��޻���ʹ��������������");
	}
	setup();
}
int valid_learn(object me)
{
 return 1;
}
