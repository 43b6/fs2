// dumpling.c

inherit ITEM;
								
void create()
{
	set_name("卤蛋", ({ "egg" }) );
	set_weight(60);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一粒又大又香的卤蛋，真想一口把它吞掉。\n");
		set("unit", "颗");
		set("value", 10);
		set("食物", ([
                        "剩" : 2,       // 可以吃几口
                        "供应": 30,     // 每一口填饱肚子的量
                ]) );
	}
        setup();
}
