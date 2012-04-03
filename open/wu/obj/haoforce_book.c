//浩日心经
//(修改至linpo_book)
inherit ITEM;

void create()
{
	set_name("浩日心经", ({ "book" }));
	set_weight(100);
	if( clonep() )
	  set_default_object(__FILE__);
	else 
	{
	  set("unit", "本");
	  set("long","这是一本浩日心经, 上面记载着浩日心法独门口诀。\n");
          set("value", 500);
	  set("material", "paper");
	  set("skill", ([
	  "name" : "haoforce",	// name of the skill
          "exp_required" :  500,
				        // to learn this skill.
	  "sen_cost" : 35,		// gin cost every time study this
          "difficulty" : 20,
					// modify is gin_cost's (difficulty - int)*5%
          "max_skill":  50
	  ]) );
	}
}

int valid_learn(object me)
{
        if(me->query("family/family_name")!="泷山派")
	  return -1;
	return 1;
}  
