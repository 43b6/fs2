inherit ITEM;

void create()
{
        set_name("拜帖", ({ "card" }) );
 if( clonep() )
                set_default_object(__FILE__);
 else {
        set("unit", "张");
        set("long", "这是一张冥蛊魔教的拜帖。\n");
	set("value", 0);
}
        setup();
}
