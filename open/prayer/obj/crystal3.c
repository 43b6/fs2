//����ˮ��(���߲��׺��ķ�)

inherit ITEM;

void create()
{
        set_name("[34m��ˮ��[0m", ({ "blue-crystal","crystal" }));
        set("title", "�����ķ�֮");
        set_weight(600);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long","����һ���ᷢ��[34m��ɫ��â��ˮ��, �������[36m���챦�����߲�[34m��׺��ķ�[0m�������ھ���\n");
          set("value", 700);
          set("no_drop", 1);
          set("no_get", 1);
          set("no_sell", 1);
          set("no_auc", 1);
          set("no_give", 1);
          set("material", "gem");
          set("skill", ([
          "name" : "superforce",  // name of the skill
          "exp_required" :  900000,     // to learn this skill.
          "sen_cost" : 30,              // gin cost every time study this
          "difficulty" : 25,             // modify is gin_cost's (difficulty - int)*5%
          "max_skill":  110
          ]) );
        }
}

int valid_learn(object me)
{
        if(me->query("family/family_name")!="ʥ���")
          return -1;
        return 1;
}
