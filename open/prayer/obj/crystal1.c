//����ˮ��(1~5������ķ�)
#include <command.h>

inherit ITEM;

void create()
{
        set_name("��ˮ��", ({ "white-crystal","crystal" }));
        set("title", "�����ķ�֮");
        set_weight(400);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long","����һ���ᷢ���ˮ��, �������[36m���챦�������ķ�[0m�������ھ���\n");
          set("value", 500);
          set("material", "gem");
          set("no_drop", 1);
          set("no_get", 1);
          set("no_sell", 1);
          set("no_auc", 1);
          set("no_give", 1);
          set("skill", ([
          "name" : "superforce",    // name of the skill
          "exp_required" :  5000,  // to learn this skill.
          "sen_cost" : 25,              // gin cost every time study this
          "difficulty" : 10,             // modify is gin_cost's (difficulty - int)*5%
          "max_skill":  50
          ]) );
        }
}

int valid_learn(object me)
{
        if(me->query("family/family_name")!="ʥ���")
          return -1;
        return 1;
}
