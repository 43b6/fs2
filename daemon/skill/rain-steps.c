// henma-steps.c
#include <ansi.h>
inherit SKILL;

string *dodge_msg = 
({
      

"$nʹ��"HIW"�����Ϸɡ�"NOR",���������Ѱ�����ɣ��ܿ�$N�Ĺ�����\n",

"$n�ȳ�"HIW"���ɺ׳��졯"NOR",���廯��һֻ���ֱ����ն�ȥ����ʧ��$N֮ǰ��\n",

"$nб��"HIW"��������ת��"NOR",���Ų�æ����Ϣһ����$n���Ϸ���һ�������Լ��ڱ�ס�ˣ���$N��ǰ��ʧ��\n",

"$nʹ��"HIW"���Բ���Ӱ��"NOR",������ǧ�������أ���$N�Ƶ�����ȥ!\n",

"$n̤��"HIW"������޼���"NOR",����һת����������Ϣ�ĳ�����$N�����׼��ʹ������һ����\n",

});

int valid_enable(string usage) 
{
        return (usage=="dodge")||(usage=="move");
}

string query_dodge_msg(string limb)
{
  int dodge_pow;
  object me=this_player();

    if(!me) return "";
        dodge_pow = (int)(me->query_skill("rain-steps", 1)/10);
        if ( dodge_pow <= 6)
              return dodge_msg[random(4)];
        else
              return dodge_msg[random(sizeof(dodge_msg))];
}

int valid_learn(object me)
{
if(me->query("combat_exp")<(me->query_skill("rain-steps",1)*5))
      
   return notify_fail("���ս�����鲻�㣬�޷���������������еľ��塣\n");
        return 1;
}


int practice_skill(object me)
{
        if((int)me->query("kee")<5)
                return notify_fail("������������������������١�\n");
        me->receive_wound("kee",5);
        return 1;
}

