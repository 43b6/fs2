// dust.c

inherit COMBINED_ITEM;

void create()
{
	set_name("��涾",({"dark poison","dark","poison"}));
	set("unit", "��");
	set("base_unit", "��");
	set("base_weight", 1);
	set("can_throw",1);
	set("poison_type","dark_poison");
 set("poison_power",3);
        set("poison" , 40);
	set_amount(1);
	setup();
}
