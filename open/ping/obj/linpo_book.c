// �貨΢������

inherit ITEM;

void create()
{
	set_name("�貨΢������", ({ "book" }));
	set_weight(100);
	if( clonep() )
	  set_default_object(__FILE__);
	else 
	{
	  set("unit", "��");
	  set("long","����һ���貨΢�������ľ���, ��ͷ��������ֵĲ�����\n");
          set("value", 500);
	  set("material", "paper");
	  set("skill", ([
	  "name" : "linpo-steps",	// name of the skill
          "exp_required" :  500,
				        // to learn this skill.
	  "sen_cost" : 30,		// gin cost every time study this
          "difficulty" : 20,
					// modify is gin_cost's (difficulty - int)*5%
          "max_skill":  45
	  ]) );
	}
    set("linpo_quest",1);
}

int valid_learn(object me)
{
        if(me->query("family/family_name")!="�μ�")
	  return -1;
	return 1;
}  
