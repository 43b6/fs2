//����֮��(Ashura-Dance) Edit by del, ACKY
#include <ansi.h>
inherit SKILL;

mapping *action = ({
        ([      "action":
"$N�����������䣬���������̤���貽������"HIM"����֮��"NOR"�е�"HIC"���ȡ�"NOR"��"
"����\n$nʧ��֮�ʣ�$Nѩ�׵�˫���Ѿ��ƽ�$n��$l��",
                "damage": 220,
                "force" : 220,
                "damage_type": "����"
        ]),
        ([      "action":
"$N���ٻӶ����е����䣬ʹ��"HIM"����֮��"NOR"�е�"HIG"����"NOR"������Ʈ����ת��"
"���Ѿ�����\n$n����Χ������һ�ƴ���$n��$l��",
                "damage": 240,
                "force" : 240,
                "damage_type": "����"
        ]),
        ([      "action":
"$Nʹ��"HIM"����֮��"NOR"�е�"HIB"���ա�"NOR"��ѩ�׵�����ͻȻ����������ϼ�����ӵ�"
"����\n$n��˫�ۣ�����$n������֮�ʣ�$N��˫���Ѿ�����$n�ı���",
                "damage": 260,
                "force" : 260,
                "damage_type": "����"
        ]),

        ([      "action":
"$N������̤���貽�����Ž���̤��"HIM"����֮��"NOR"�е�"HIW"���ᡯ"NOR"�����ϴ����"
"������\n$n����ȫʧ��ͻȻ�����һ����$N��˫�������޵����㽫$n���Ű�Χ��",
                "damage": 280,
                "force" : 280,
                "damage_type": "����"
        ]),

        ([      "action":
HIM"������Χ���������֣�$N��ʼ��������֮���е�"HIR"���ޡ�"HIM"��ֻ��$N����"
"�ϵ�����\n������ȥ��¶��ѩ�׵ļ���������$n��Ϣ�����޷����ơ�"NOR,
                "damage" : 300,
                "force"  : 300,
                "damage_type" : "�߿���Ѫ"
        ]),

});

int valid_enable(string usage)
{
        return (usage=="unarmed") || (usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

