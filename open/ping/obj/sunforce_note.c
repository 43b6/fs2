// 一阳心法秘笈...学一阳心法中的 exert 招式才有用...不能 study..:P 

inherit ITEM;

void create()
{
	set_name("一阳心法秘笈", ({ "sunforce note","note" }));
	set_weight(100);
	if( clonep() )
	  set_default_object(__FILE__);
	else 
	{
	  set("unit", "本");
	  set("long","这是由柳毅风所寻回的, 里头记载了一阳心法的秘密, 可惜你完全看不懂。\n");
          set("value", 0);
	  set("material", "paper");
	  set("skill", ([
	  "name" : "sunforce",
	  "sen_cost" : 100,
          "max_skill": 1
	  ]) );
	}
}

int valid_learn(object me)
{
	return -1;
}                          