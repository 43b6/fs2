// fire-kee.c
// ��ɽ�ɵĻ�������..Chan Design
//
#include <combat.h>
#include <ansi.h>

inherit SKILL;

string *parry_msg =
({
   MAG"���$N���ҵĹ���,$n���˺����ķ�,˲��$N������������,�����ҵĹ��ƻ�֮����\n"NOR,
   YEL"$n������ĺ�����������,��Ѫ����.����������˫��,��˫�۵ֵ�$N��ʹ���ı�ɱ��ʽ\n"NOR,
   HIR"$n���һ��,�䡫��һ��!!!ȫ��������ɢ\n,$N��$n�ĺ��ջ����������γɵ���ǽ����,�������޷���������\n"NOR,
   MAG"$n������,�������������˿,ȫ��ɢ��������������,�䡫��һ��!!\n$N�Ĺ�������������,�޷���������\n"NOR,
   HIW"$nʹ�����ջ�������֮�ռ����С�"HIY"--��--��--��--��--"HIW"��\n"
   HIR"$n��ͬ��ɽ���������ȵ�����,����������,��$N������ȫʧȥ��Ч��\n"NOR,
});

int valid_enable(string usage)
{
int family;
object me=this_player();
if ( me->query("family/family_name") == "��ɽ��")
 return (usage=="parry");
else
 return notify_fail("ֻ����ɽ���Ӳ����ú��ջ�������!!\n");
}

string query_parry_msg(string limb)
{
  int parry_pow;
  object me=this_player();
  parry_pow = (int)(me->query_skill("fire-kee", 1)/10);
  if ( parry_pow <= 8)
   return parry_msg[random(4)];
  else
   return parry_msg[random(sizeof(parry_msg))];
}

int valid_learn(object me)
{
  if(me->query ("combat_exp") <= (me->query_skill("fire-kee",1)*6) )
   return notify_fail("���ս�����鲻�㣬�޷�������ջ�����������֮����\n");
  if(me->query_skill("haoforce") < 60 )
   return notify_fail("��ĺ����ķ���������!!�޷���ϰ���ջ���������\n");
  return 1;
}


int practice_skill(object me)
{
        if((int)me->query("kee")<100)
                return notify_fail("��������������������ջ���������\n");
        me->receive_wound("kee",10);
        return 1;
}

