// snow-kee.c
// ѩ���ɵĻ�������..Chan Design
//
#include <ansi.h>
inherit SKILL;

string *parry_msg = ({
   HIC"$nѩ�Ի����ھ�����,ǿ��ĺ���Ӳ������$N�Ĺ����𿪡�\n"NOR,
   HIW"$nһ�֡�"HIY"����ʽ"HIW"��һ�֡�"HIG"�Ե�ʽ"HIW"�����������޾����������صĹ���������\n"NOR,
   WHT"$n�˽�����γ���������������ǰ֯��һ��������������$N�����ҹ��ƾ���ж����\n"NOR,
   HIC"$n������ת��˫�ּ���ʹ��ѩ����ѧ֮��"HIM"��Ԩ��"HIC"����$N�Ĺ�������ţ�뺣����$n������й��ȥ�� \n"NOR,
   HIW"$nʹ��ѩ�Ի�����֮�ռ����С�"HIC"--��--��--ѩ--��--"HIW"��\n"
   HIW"$n��ͬ��籩������������,ʹ�¶Ƚ�������,��$N������ȫʧȥ��Ч��\n"NOR,
            });

int valid_enable(string usage)
{
int family;
object me=this_player();
if ( me->query("family/family_name") == "ѩ����")
 return (usage=="parry");
else
 return notify_fail("ֻ��ѩ�����˲�����ѩ�Ի�����!!\n");
}

string query_parry_msg(string limb)
{
  int parry_pow;
  object me=this_player();
  if(!me) return parry_msg[random(sizeof(parry_msg))];
  parry_pow = (int)(me->query_skill("snow-kee", 1)/10);
  if ( parry_pow <= 8)
   return parry_msg[random(4)];
  else
   return parry_msg[random(sizeof(parry_msg))];
}

int valid_learn(object me)
{
if(me->query_skill("snowforce",1) < 60 )
   return notify_fail("���ѩ���ھ���������!!�޷���ϰѩ�Ի�������\n");
  return 1;
}


int practice_skill(object me)
{
        if((int)me->query("kee")<100)
                return notify_fail("�����������������ѩ�Ի�������\n");
        me->receive_wound("kee",10);
        return 1;
}

    string perform_action_file(string action)
{
           return CLASS_D("fighter")+"/snow-kee/"+action;
}
