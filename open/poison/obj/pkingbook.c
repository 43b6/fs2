inherit ITEM;

void create()
{
	set_name("�����ľ�", ({"poison book","book"}) );
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "��");
		set("value", 0);
		set("material", "paper");
		set("skill", ([
			"name":   "poison",
			"exp_required":1500,
			"sen_cost":   30,
			"difficulty":  25,
			"max_skill":  40,
		]) );
		set("long", "����һ���������ö���ʽ���ķ������飬�ഫ����ʮ��
ǰһʹ�����ˣ�ǧ�ֶ�����������Ѫ������\n");
	}
	setup();
}

int valid_study(object me)
{
	if(me->query("family/family_name")!="ڤ��ħ��")
	return notify_fail("�㿴��������.\n");
	return 1;
}
