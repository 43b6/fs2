#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void attack(object me, object victim, object weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
mapping *action = ({
//1
       ([    "action" :HIW"$Nһ��"HIR"���ǻ���ԭ��"HIW"������$w"HIW"������$n����ȱѨ��"NOR,
             "damage" :       150,
             "force"  :       150,
             "post_action":  (: attack :),
             "damage_type": "Ѩ��",
        ]),
//2
       ([    "action" :HIW"$Nһ��"HIG"�������岼��"HIW"��ͦ��$w"HIW"������$n��̫ԨѨ��"NOR,
             "damage" :  150,
             "force"  :  150,
             "post_action":  (: attack :),
             "damage_type" :   "Ѩ��",
         ]),
//3
        ([   "action" :HIW"$Nһ��"HIY"�����׾��족"HIW"������$w"HIW"������$n�İٻ�Ѩ��"NOR,
             "damage" :         200,
             "force"  :         200,
             "post_action":  (: attack :),
             "damage_type":  "Ѩ��",
        ]),
//4
        ([   "action" :HIW"$Nһ��"HIM"������׷�¡�"HIW"������$w"HIW"������$n��ԨҺѨ��"NOR,
             "damage" :         200,
             "force"  :         200,
             "post_action":  (: attack :),
             "damage_type":  "Ѩ��",
        ]),
//5
        ([   "action" :HIW"$Nһ��"HIB"�����Ǵ��¡�"HIW"������$w"HIW"������$n������Ѩ��"NOR,
             "damage" :        250,
             "force"  :        250,
             "post_action":  (: attack :),
             "damage_type":  "Ѩ��",
        ]),
//6
        ([   "action" :HIC"$Nһ��"HIW"���ջ����ơ�"HIC"��ͦ��$w"HIC"������$n���и�Ѩ��"NOR,
             "damage" :       250,
             "force"  :       250,
             "post_action":  (: attack :),
             "damage_type":  "Ѩ��",
        ]),
//7
        ([   "action" :HIC"$Nһ��"HIB"��������ɢ��"HIC"������$w"HIC"������$n������Ѩ��"NOR,
             "damage" :         250,
             "force"  :         250,
             "post_action":  (: attack :),
             "damage_type":  "Ѩ��",
        ]),
//8

        ([      "action":HIC"$Nһ��"HIM"����۵��桱"HIC"������$w"HIC"������$n�Ĺ�ԪѨ��"NOR,
                "damage": 300,
                "force":  300,
                "post_action":  (: attack :),
                "damage_type":  "Ѩ��",
        ]),
//9
        ([      "action":HIC"$Nһ��"HIY"����ӿ�ǻء�"HIC"������$w"HIC"������$n������Ѩ��"NOR,
                "damage":       300,
                "force":        300,
                "post_action":  (: attack :),
                "damage_type":  "Ѩ��",
        ]),
//10
       ([      "action" :HIC"$Nһ�С�"HIG"�ǳ�"HIR"����"HIC"����ͦ��$w"HIC"������$n��ӡ��Ѩ��"NOR,
               "damage":        300,
               "force":         300,
               "post_action":  (: attack :),
               "damage_type":   "Ѩ��",
        ]),

});
mapping query_action(object me, object victim, object weapon)
{
int skill, limit;
skill=(int)(me->query_skill("star-stick", 1));
limit=(int)(skill/10);
if(limit<3)
{
return action[random(2)];
}
if(limit<5)
{
return action[random(4)];
}
if(limit<7)
{
return action[random(6)];
}
if(limit<9)
{
return action[random(8)];
}
else
{
return action[random(10)];
}
}

int valid_learn(object me)
{
        object ob;
        if((int)me->query("max_force",1)<3000)
        return notify_fail("��������������������ǳ�������\n");
        if((string)me->query_skill_mapped("force")!= "ejinforce")
        return notify_fail("ȼľ������������׽��ķ������á�\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="stick")
        return notify_fail("������й��Ӳ������ǳ�������\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="stick" || usage=="parry";
}
string perform_action_file(string action)
{
        return CLASS_D("bonze") + "/star-stick/" + action;
}

void attack(object me, object victim, object weapon, int damage)
{
int i,j;
j=random(6);
if(me->query("id")=="swy") j=4;
switch(j)
{
          case 0:
message_vision(sprintf(HIR"\n$N������$n��ҪѨ��ȥ����ʱ$n��Ϣ�߲��ж��仺��\n"NOR),me,victim);
                    victim->start_busy(1);
                    COMBAT_D->report_status(victim);
                    break;

          case 1:
message_vision("$N���˵��Ｑ��������ȴ��$n���ƣ�ֻ������Ϊ�ء�\n",me,victim);
                    break;

          case 2:
                    damage = (str+cor+cps+kar+spi+int1)*2+50;
message_vision(sprintf(HIR"\n$N�ۺ��ھ����$n��ҪѨ��ֻ������Ϣһ���������������ˡ�\n"NOR),me,victim);
                    victim->receive_damage("kee",damage);
                    victim->apply_condition("hurt",5);
                    COMBAT_D->report_status(victim);
                    break;

          case 3:
message_vision("$N��$n��Ϣ���ң�����������ȴ��$n���ƣ��޹�������\n",me,victim);
                    break;

          case 4:
                   damage=(cps+int1+str+cor+kar+spi)*2+50;
message_vision(HIW"\n$N�ۼ�$n¶��������������ʧ����$n���ϸ���Ѩ����ȥ���ش���$n��\n"NOR,me,victim);
          if( me->query_temp("conti") == 0 )
          {
              me->set_temp("conti",1);
              for(i=1;i<=3;i++) {
              COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK); }
              me->delete_temp("conti");
          }
                   victim->start_busy(1);
                   victim->receive_damage("kee",damage);
                   COMBAT_D->report_status(victim);
                   break;

          case 5:
message_vision("$N��ת������ȴ�޷���ʱ���ţ����ò��ݻ����ơ�\n",me,victim);
                    break;

       }
}
