inherit ITEM;

void create()
{
        set_name("夜明珠", ({ "pearl" }) );
        set("unit", "颗");
        set("long", "这是一颗大夜明珠。\n");
	set("light_up",-1);
	set("value", 2500);
        setup();
}
