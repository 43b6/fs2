//book.c

inherit ITEM;

void create()
{
set_name("���ӱ���",({"book"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
"����һ���о�ı��֮�� .\n");
		set("value", 500);
    set("no_sell", 1);
    set("no_drop", 1);
    set("no_auc", 1);
    set("no_put",1);
   set("no_get", 1);
		set("material", "paper");
		set("skill", ([
      "name":      "plan",
											// to learn this skill.
			"sen_cost":		30,				// gin cost every time study this
			"difficulty":	20,				// the base int to learn this skill
											// modify is gin_cost's (difficulty - int)*5%
      "max_skill":     40,
											// from this object.
		]) );
	}
        setup();
}
