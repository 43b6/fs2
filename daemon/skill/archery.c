// archery.c  ����
#include <ansi.h>
inherit SKILL;

mapping *arrows_action = ({
        ([     "action" :      "$N��$c����$w֮�ϣ���$n��$l��ȥ",
               "parry" :       -20,
               "dodge" :       -10,
               "damage_type" : "����",
        ]),
});
mapping *bow_action = ({
        ([  "action":               "$N����$w�ݺݵ���$n$l��ȥ",
            "damage_type":  "����",
        ]),
        ([  "action":               "$N�����ػ���$w���Ŵ���$n",
            "damage_type":  "����",
        ]),
});
mapping query_action(object me, object weapon)
{
  int skill_level, limit;
  object wpn = me->query_temp("weapon");
  int i;
  i=wpn->query("arrow/amount");
  if( i == 1 ) {
          tell_object(me,
  HIY"\n���" + wpn->query("arrow/name") + "�Ѿ������ˣ���\n\n"NOR);
          wpn->set("arrow/id","none");
          wpn->set("arrow/name","�յ�");
          wpn->set("weapon_prop/damage",wpn->query("bow/attack"));
          me->set_temp("apply/damage",wpn->query("bow/attack"));
  }
  if( i > 0 ) {
          i--;
          wpn->set("arrow/amount",i);
          return arrows_action[random(sizeof(arrows_action))];
  }
  if( i <= 0 ) {
          return bow_action[random(sizeof(bow_action))];
  }
}
