// dust.c

inherit COMBINED_ITEM;

void create()
{
	set_name("��õ�嶾",({"rose poison","rose","poison"}));
	set("unit", "��");
	set("base_unit", "��");
	set("base_weight", 1);
	set("can_throw",1);
	set("poison_type","rose_poison");
 set("poison_power",3);
        set("poison" , 30);
	set_amount(1);
	setup();
}
