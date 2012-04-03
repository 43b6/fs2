// blade_book.c

inherit ITEM;

void create()
{
	set_name("��������", ({ "book" }));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
			"����һ���򵥵Ľ���,���һ����ݶ��ҵĵ�.\n"
			"Ȼ��������ѧ��,�⵽���ʺϳ�ѧ�ߵĺ���.\n");
		set("value", 10);
		set("material", "paper");
		set("skill", ([
			"name": 		"sword",		// name of the skill
                        "exp_required": 500,
											// to learn this skill.
                        "sen_cost":             30,
                        "difficulty":   30,
											// modify is gin_cost's (difficulty - int)*5%
                        "max_skill":    30,
											// from this object.
		]) );
	}
        setup();
}
