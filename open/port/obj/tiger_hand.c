inherit EQUIP;
void create()
{
	set_name("虎皮手套",({"tiger hands","hands"}));
	set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
虎皮制成的手套 , 能大量提高本身的破坏力
");
        set("unit", "双");
	set("value",4000);
        set("material","cloth");
	set("armor_type", "hands");
	set("armor_prop/armor",10);
	set("armor_prop/attack",5);
        }
        setup();
}
