
// һ���ķ�����
#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(HIY"һ���ķ�����"NOR, ({"sunforce book","book" }));
        set_weight(100);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long","������Ƕμ������书��Ҫ��һ���ķ�������, Ȼ������
֮���С�����Ϊ�ʡ�ȴ��ǰ�����˱��治�ƶ�ʧ�� ��\n");
          set("value",1000);
          set("material", "paper");
          set("skill", ([
          "name" : "sunforce",          // name of the skill
          "exp_required" : 1000,
                                        // to learn this skill.
          "sen_cost" : 25,              // gin cost every time study this
          "difficulty" : 25,
                                        // modify is gin_cost's (difficulty - int)*5%
          "max_skill":  51
          ]) );
        }
}

int valid_learn(object me)
{
        if(me->query("family/family_name")!="�μ�")
          return -1;
        return 1;
}
