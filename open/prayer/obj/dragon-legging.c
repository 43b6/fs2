inherit EQUIP;

void create()
{
        set_name("龙甲护膝",({"dragon legging","legging"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","用火龙鳞甲制成的护膝 , 能增强双脚的防御度 .\n");
        set("unit","件");
        set("value",30000);
        set("material","leather");
        set("armor_type","leggings");
        set("armor_prop/armor", 3);
        set("armor_prop/move",-1);
        }
        setup();
}                        