//���ϸ��¥֮��ɳ���ﵶ�� by roger && taifar

#include <combat.h>
#include <ansi.h>
void sp_attack(object me,object victim,object weapon,int damage);
inherit SKILL;
mapping *action = ({
(["action":HIY"$N��Ծ���ϣ�����˲��ҫ�۴�Ŀ��һʽ"HIW"������ɳ��"HIY"��׹ֱ�£�ֻ��һ������Ю�ž��ҷ�ѹ����$nͷ��"NOR,
        "damage":       400,
        "force":        400,
        "post_action":          (: sp_attack:),
        "damage_type":  "����",
        "weapon"     :  "�鵶",
        ]),
(["action":HIY"$N��$w"HIY"����һ�գ����籪\�ԣ�˫�۷·�͸��$n���ģ�����һʽ"HIW"�������Į��"HIY"����������׹�ֱ��$n���ʶ�ȥ"NOR,
           "damage":           400,
           "force":            400,
           "post_action":          (: sp_attack:),
           "damage_type":  "����",
          ]),
(["action":HIY"$N�񵶼���ʹ��һʽ"HIW"�������ɳ��"HIY"��˲���ɳ��ʯ��ÿһ΢С��������ɱ������ɳ��$n��ȫ��������֮��"NOR,
           "damage":      400,
           "force":       400,
           "post_action":          (: sp_attack:),
           "damage_type":  "����",
           ]),

(["action":HIY"$Nʹ��������"HIW"����ɳ���ﵶ����"HIY"�е�һʽ"HIW"���ٵ��¶��"HIY"�����쳾ɳ֮��Ȧ������ɱ����������ȴ����ָ��$n��ü��"NOR,
        "damage":       400,
        "force":        400,
        "post_action":          (: sp_attack:),
        "damage_type": "����",
            ]),
(["action":HIY"$N����һʽ"HIW"������ɳ��"HIY"ʹ��ͻ��������$n���ò��ˣ�������׷����ֻ����ɳ��������ŵ�����$n��ȥ"NOR,
        "damage":       400,
        "force":        400,
        "post_action":          (: sp_attack:),
        "damage_type": "����",
        ]),

});

int valid_enable(string usage)
{
        return (usage=="blade")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

void sp_attack(object me,object victim, object weapon,int damage)
{
 object *enemy,target,env;
 int i,j;

 env = environment(me);
 enemy=me->query_enemy();
 i=sizeof(enemy);

 for(j=0;j < i;j++){
  target=enemy[j];
    if( env == environment(target) )
    {
     target->receive_damage("kee",150);
     COMBAT_D->report_status(target);
    }
                   }

}

