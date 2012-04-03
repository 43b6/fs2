// henma-steps.c
#include <ansi.h>
inherit SKILL;

string *dodge_msg = 
({
      
      "$nʹ��"MAG"�������Ӱ��"NOR"��������㣬����ת��"HIG"��������ӭ��������"NOR"������һ����\n������"HIG"������������Ʈ��  �����繳ӳ���ۡ�"NOR"��������Ϣ������$N�Ŀ�籩���Ĺ�����\n",
      "$n����"MAG"�������Ӱ��"NOR"������б�У�����أ�"HIY"���갴����¥��ա�"NOR"���ڿշ�Ծ����\n������"HIY"��Խ��Ī�������  ���⹲��ǧ���ơ�"NOR"����ʧ�������У�ʹ��$N��ȫ�޷����֡�\n",
      "$nб��"MAG"�������Ӱ��"NOR"����ʵ���飬Ծ�ջ�����"HIG"�������޲�����졯"NOR"������Ծ����\nԭ����"HIG"��ϼӰ���������  ɽᰵ�ӿ��ɽ�С�"NOR"��˲���$N�����ԣ�бб���������˹�ȥ��\n",
      "$n��̤"MAG"�������Ӱ��"NOR"������Ӱ����ʵ�ѷ֣�"HIG"����ʰ����ů���Ρ�"NOR"��б��ԶԶ��ȥ\n������"HIG"��������ɽ������  ��Ω��ˮȥ���ơ�"NOR"�����κ������һ�ᣬ���������Ʈ�˿�ȥ! \n",
      "$n���"MAG"�������Ӱ��"NOR"����̤������Ȼ������"HIY"����·�������ͷס�"NOR"�����ζ�ʧ�ټ�\n����Ի"HIY"��������ظ�����  �ǐo������Ʈ����"NOR"������΢΢��࣬ʹ$N�����������ж��ȥ��",

});

int valid_enable(string usage) 
{
        return (usage=="dodge")||(usage=="move");
}

string query_dodge_msg(string limb)
{
  int dodge_pow;
  object me=this_player();

  if(!me) return dodge_msg[random(sizeof(dodge_msg))];
        dodge_pow = (int)(me->query_skill("henma-steps", 1)/10);
        if ( dodge_pow <= 5)
              return dodge_msg[random(4)];
        else
              return dodge_msg[random(sizeof(dodge_msg))];
}

int valid_learn(object me)
{
        if(me->query ("combat_exp") <= (me->query_skill("linpo-steps",1)*6) )
          return notify_fail("���ս�����鲻�㣬�޷��������Ӱ�о�������\n");
        return 1;
}


int practice_skill(object me)
{
        if((int)me->query("kee")<5)
                return notify_fail("����������������������Ӱ��\n");
        me->receive_wound("kee",5);
        return 1;
}

