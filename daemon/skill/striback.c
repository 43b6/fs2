#include <ansi.h>
inherit SKILL;
void striback(object me,object victim);

string *parry_msg = ({
 "$n����$N�Ĺ��ƣ��Ų�һת����Ȼת����һʽ[1;37m��а�ת�ơ�[0m��˲�����ס��$N�Ĺ��ƣ�ת��Ϊ��\n",
 "$n���һ������$N����һ���ػ�ʱ��ʹ��һ��[1;36m�����������䡯[0m��$N������Ӳ������$N�Ĺ��ƱƵ�$N��ǰ\n",
 "$nע����$N�Ĳ�㹥�ƣ��ŷ�һ�ݣ������һ��[1;35m��ɱԪ�塯[0m�������$N�Ĺ�����δʹ��ǰ��ס��棬Ӳ�ǰ�$NԪ���˻أ�ʹ��$NԪ������\n",
 "$nע�⵽$N����չ�����ƣ��漴�������ᣬ�������ۣ��ó���һ��[1;34m���򾪾���[0m��$n��׼��$N�Ĺ�����δչ�����ס������������׼��$N����δ���˵�������\n",
 "$n�ۿ���$Nǿ���Ƽ�������$n���ϣ���Ȼ����һ�𣬽Ų���ת�ɷ磬ʹ��������[1;31m�����ľ���[0m��ֻ����$N�����Ӻ�Ȼ���Ͳ�ǰ��$n����$Nͷ�Ϲ���\n",
                    });

int valid_enable(string usage)
{
  object me=this_player();
  if ( me->query("class") == "bandit" )
    return (usage=="parry");
 else
    return notify_fail("���ֲ��Ǹ������� ,ƾɶ������ ?\n");
}

string query_parry_msg(string limb)
{
  int sb;
  object me=this_player();
  sb = me->query_skill("evilstriback");
  if ( sb <= 80 )
  {
    call_out("striback",me);
  return parry_msg[random(4)];
  }
  else
  {
    call_out("striback",me);
  return parry_msg[random(sizeof(parry_msg))];
  }
}

int valid_learn(object me)
{
  if(me->query_skill("badstrike",1)<30)
    return notify_fail("ȭ�Ź�����ʵ�����з���Ϊ ?\n");
  else if (me->query_skill("badforce",1)<30)
    return notify_fail("��ѧ�������� ,С��\n");
  else if (me->query_skill("ghost-steps",1)<30)
    return notify_fail("�Ṧ���߻���Ҫ�Ƶл��� ?\n");
  return 1; 
}

void striback(object me,object victim)
{
  int esb;
  esb = (me->query_skill("evilstriback")/10);
  if ( random(esb) >= 5 )
  {
    victim->start_busy(1);
    message_vision("[1;33m$N�ɹ��Ľ�$n�Ĺ��Ʒ�ת��ȥ ![0m\n", me, victim);
  }
  else
  {
    message_vision("[1;32m$N����˷�������!![0m\n", me, victim);
  }
}

