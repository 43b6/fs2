
#include <ansi.h>
inherit SKILL;

string *parry_msg =
({

        "\n$n����"HIB"��"HIW"��"HIY"��"HIR"��"NOR"�еľ���"HIC"�����⡱"NOR"������һ�����������⣬���ⲻ�ɶᣬ�����ǿ�����ʽ��ʹ$N�ջ����еĹ�����\n",

        "\n$n����"HIB"��"HIW"��"HIY"��"HIR"��"NOR"�еľ���"HIM"��ľ�硱"NOR"��$n�������Ȼ��ø���ľһ�㣬ʹ��$N����ʽ��ȫʧȥ��Ч�á�\n",

        "\n$n����"HIB"��"HIW"��"HIY"��"HIR"��"NOR"�еľ���"HIG"�����衱"NOR"����ʽ�������ķ��������赲ס��$N��ʹ$N�Ĺ���ʧȥЧ��\n",

        "\n$n����"HIB"��"HIW"��"HIY"��"HIR"��"NOR"�еľ���"HIY"��������"NOR"��������������ݵ����񲻿ɵ���ʹ$N��ȫ���Ҷ�$n������\n",

        "\n$n����"HIB"��"HIW"��"HIY"��"HIR"��"NOR"�еľ���"HIB"�����ڡ�"NOR"��$n�������������������𣬳����д���������$N�赲��ʹ��$N��ʽ����ˡ�\n",

        "\n$n����"HIB"��"HIW"��"HIY"��"HIR"��"NOR"�еľ���"HIR"��������"NOR"�����μ���������ת��ɵ�������$n�����γ�һ����ǽ����$N����ʽ��ȫ����ˡ�\n",

        "\n$n����"HIB"��"HIW"��"HIY"��"HIR"��"NOR"�еľ���"MAG"�����ޡ�"NOR"���Ҽ����ޣ��޼����ң�$n�����Ȼ�䲻����һ����ʧ��$N����ǰ��\n",

});

int valid_enable(string usage) {
        return (usage=="parry");

}

string query_parry_msg(string limb){

        return parry_msg[random(sizeof(parry_msg))];
}

int valid_learn(object me)
{
        return 1;
}
