//�����ľ�
//(�޸���linpo_book)
inherit ITEM;

void create()
{
	set_name("�����ľ�", ({ "book" }));
	set_weight(100);
	if( clonep() )
	  set_default_object(__FILE__);
	else 
	{
	  set("unit", "��");
	  set("long","����һ�������ľ�, ��������ź����ķ����ſھ���\n");
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
        if(me->query("family/family_name")!="��ɽ��")
	  return -1;
	return 1;
}  
