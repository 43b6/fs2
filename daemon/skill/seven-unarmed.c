#include <combat.h>
#include <ansi.h>
inherit SKILL;


void sp2(object me, object victim, object  weapon, int damage);
void sp4(object me,object victim,object weapon,int damage);

mapping *action= ({
 (["action":"$Nʹ�� [0;1;36;45m��[1mC[1m [1m��[1m��[1m [1m��[1mW[1m [1m��[1mQ[1m [1m��[1m��[0m  [0;1;33m��[1m��[1m [1m��[1m��[1m [1m��[1m}[1m [1m��[1m��[0m

              [0;1;32m��[1m��[1m [1m��[1ml[1m [1m��[1m��[1m [1m��[1m��[0m��[0;1;31m��[1m��[1m [1m��[1m��[1m [1m��[1m��[1m [1m��[1m��[0m��[0;1;35m��[1m��[1m [1m��[1m��[1m [1m��[1m��[1m [1m��[1mz[0m

             $N����$w,��$n�ĸ���Ѩ����ȥ,\n��$n����ı�������",
    "dodge":-10,
    "parry":20,
    "damage":90,
    "force":45,
    "damage_type":"����"
  ]),
 (["action":"$N����һ��������ʹ�� [0;1;36;45m��[1mC[1m [1m��[1m��[1m [1m��[1mW[1m [1m��[1mQ[1m [1m��[1m��[0m [0;1;33m��[1m��[1m [1m��[1m��[1m [1m��[1mg[1m [1m��[1m��[0m

             ��$wȭ��ԲתΪ�Σ����ܼ�������$n�����ȥ.",
    "dodge":40,
    "parry":50,
    "damage":100,
    "force":50,
    "damage_type":"����"
  ]),
  (["action":"$N��Ȼ����"+HIC"�ߺ�����ȭ"NOR"

                 ����ʽ"HIB"�������� ��"NOR+"

              �������б仯�����ֲ���֮ȭ�У���������֮����,�����޶�������׽��,��$n�ܺܵĴ��˹�ȥ",
    "dodge":10,
    "parry":10,
    "damage":155,
    "force":80,
    "damage_type":"����"
  ]),
  (["action":"$NͻȻ����һչ,ʹ��"+HIC"�ߺ�����ȭ"NOR"

                  ����ʽ"BLU"��Ժ����� ��"NOR+"

               ����ͻȻѸ���ڿն���,���е�ȭ�������������ת�������,��$n$1�ɱ���ȥ....",
    "dodge":30,
    "parry":20,
    "damage":145,
    "force":70,
    "damage_type":HIB"����"NOR"֮��",
  ]),
  (["action":"$Nʹ��"+HIC"�ߺ�����ȭ"NOR"

                 ����ʽ"HIR"��Ѫ��Ǳ�� ��"NOR+"

              $N��Ȼһ��Ϊ��,����ͬʱͦ$w������ǰ��ͬʱ����$n�ʺ�����Ѹ���ޱ�",
    "dodge":45,
    "parry":45,
    "damage":105,
    "force":100,
    "damage_type":"����"
  ]),
  (["action":"$N���"+HIC"�ߺ�����ȭ"NOR"֮

                "HIW"�꼫������ ��"NOR+"

              ˲����������֮����,���̽�ȭ�����ͻ�,ȭ�����ǵĺ�����ȥ$n$1�ľ��ϻ��˸�ܽ��....",
    "dodge":45,
    "parry":45,
    "damage":170,
    "force":100,
    "damage_type":"����"
  ]),
  (["action":"$N������,ʹ��"+HIC"�ߺ�����ȭ"NOR"����ʽ"HIM"��𺣷��� ��"NOR+",$N�����ɺ׵ķ���,�������ɺ׵�����,���л���$nҪ��,ʹ��$1���˲���....",
    "dodge":45,
    "parry":55,
    "damage":165,
    "force":100,
    "damage_type":"����"
  ]),
  (["action":"$N����һֻҰ���ı���,ʹ��"+HIC"�ߺ�����ȭ"NOR"

                �ڰ�ʽ"WHT"��ʯ�ػ��� ��"NOR+"

              ���ֽ�$wչ����ˢˢ��ȭ��ֻ��$n$1����������һ�����!~~~~",
    "dodge":-45,
    "parry":55,
    "damage":130,
    "force":90,
    "damage_type":"����"
  ]),
  (["action":"$N���һ��

               "+HIR"��~��~��~ף~��~ ��"NOR"

               ֮"HIC"���齣��"NOR+"�ھ�ʽ,$N�ۼ���ؼ�ĺ�Ȼ����,������������ɷ��ΰ�ľۼ���$w��,��$n$1�͹���ȥ",
    "dodge":35,
    "parry":-55,
    "damage":160,
    "force":80,
    "damage_type":"����"
   ]),
   (["action":"$Nʹ��"+HIC"�ߺ�����ȭ"NOR"

                 ��ʮʽ"HBYEL"��-��-��-��-��- ��"NOR+"

               $NͻȻ��ȭ��һ�£�$w����һ���׺���������ģ���$n$1ֱ���ȥ....",
    "dodge":45,
    "parry":55,
    "damage":195,
    "force":180,
    "damage_type":"����"
   ]),
   (["action":"$N���������,ʹ��"+HIC"�ߺ�����ȭ"NOR"�е�

               "HIB"�걯ʹĪ�� ��"NOR+"

               �ڱ���������Ī��������,����һҫ,ȭȭ����$n��Ҫ��....",
    "dodge":55,
    "parry":65,
    "damage":255,
    "force":110,
    "damage_type":"����"
    ]),

});


void sp4(object me,object victim,object weapon,int damage)
{
   int i = me->query("unarmed")*10 + me->query_skill("seven-unarmed");
   if (me->query_skill_mapped("force") == "seven-unarmed" && random(400) < 10 )
   {       message_vision(HIW"$N����𺣷��죬��$n����������$N�������С�\n"NOR,me,victim);
    victim->receive_damage("kee",random(i));
    me->add("kee",random(i));
   }
}
int valid_enable(string usage)
{
        return (usage=="unarmed"||usage=="parry");
}
mixed hit_ob(object me, object victim, int damage_bonus)
{
        if( damage_bonus < 100 ) return 0;

        if( random(damage_bonus/2) > victim->query_str() ) {
                victim->receive_wound("kee", (damage_bonus - 100) / 3 );
                switch(random(3)) {
                        case 0: return "��������������һ�����죬�����ǹ����������\n";
                        case 1: return "$N����һ�£�$n��$l������������һ�����죡\n";
                        case 2: return "ֻ����$n��$l��������һ�� ...\n";
                }
        }
}

