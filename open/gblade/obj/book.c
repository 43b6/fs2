//book.c

inherit ITEM;

void create()
{
	set_name("���־�",({"book"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
			"һ��ƽ�������־� .\n");
		set("value", 500);
		set("material", "paper");
		set("skill", ([
			"name":			"literate",
											// to learn this skill.
			"sen_cost":		30,				// gin cost every time study this
			"difficulty":	20,				// the base int to learn this skill
											// modify is gin_cost's (difficulty - int)*5%
                        "max_skill":    30,
											// from this object.
		]) );
	}
        setup();
}
