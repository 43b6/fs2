// made by ccat
// refix by onion
// refix by chan
// 加上药性
inherit F_MEDICINE;
void create()
{
        set_name("灵芝仙丹", ({"super pill","pill"}) );
        set("long",
"此物乃蜀中将军自蜀山神峰采来之神药,专克血气失调.\n"+
"此要须经药师调配(check item),方得食用(eat pill).\n");
        set("unit", "盒");
        set("base_unit", "粒");
        set("no_sell",1);
          set("value",20000);
        set("base_weight", 50);
        set("cure_type","poison");
        set("cure_poison_type","ff_poison");
        set("medicine_sick",120);
        set_amount(1);
       set("medicine_power",5);
        setup();
}

