//��ɳ����()

inherit ITEM;

void create()
{
        set_name("[33m��ɳ����[0m", ({ "ironhand book","book" }));
        set_weight(750);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long","����һ������[33m��ɳ��[0m��ȭ��, ����¼��˾ͽһ�ҵ�[33m��ɳ��[0m����ѧ��\n");
          set("value", 800);
          set("material", "paper");
          set("no_drop", 1);
          set("no_get", 1);
          set("no_sell", 1);
          set("no_auc", 1);
          set("no_give", 1);
          set("skill", ([
          "name" : "ironhand",  // name of the skill
          "exp_required" :  300000,     // to learn this skill.
          "sen_cost" : 20,              // gin cost every time study this
          "difficulty" : 25,             // modify is gin_cost's (difficulty - int)*5%
          "max_skill":  30
          ]) );
        }
}

int valid_learn(object me)
{
        if( me->query("family/master_name")!="˾ͽ��" && (int)me->query("combat_exp") <= 300000 )
          return -1;
        return 1;
}
