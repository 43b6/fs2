// dust.c

inherit COMBINED_ITEM;

void create()
{
	set_name("�嶾",({"five poison","five","poison"}));
	set("unit", "��");
	set("base_unit", "��");
	set("base_weight", 1);
	set("poison_type","five_poison");
    set("can_throw",1);  
     set("poison_power", 3);
        set("poison" , 50);
	set_amount(1);
	setup();
}
