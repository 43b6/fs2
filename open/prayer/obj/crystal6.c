//����ˮ��(��ʮ���������ķ�)

inherit ITEM;

void create()
{
        set_name("[32m��ˮ��[0m", ({ "green-crystal","crystal" }));
        set("title", "�����ķ�֮");
        set_weight(750);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long","����һ���᷺��[32m���̹�â��ˮ��[0m, �������[36m���챦����ʮ��[32m�������ķ�[0m�������ھ���\n");
          set("value", 800);
          set("material", "gem");
          set("no_drop", 1);
          set("no_get", 1);
          set("no_sell", 1);
          set("no_auc", 1);
          set("no_give", 1);
          set("skill", ([
          "name" : "superforce",  // name of the skill
          "exp_required" :  2400000,     // to learn this skill.
          "sen_cost" : 60,              // gin cost every time study this
          "difficulty" : 25,             // modify is gin_cost's (difficulty - int)*5%
          "max_skill":  250
          ]) );
        }
}

int valid_learn(object me)
{
        if(me->query("family/family_name")!="ʥ���")
          return -1;
        return 1;
}
