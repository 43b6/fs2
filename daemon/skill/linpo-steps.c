// linbo-steps.c
#include <ansi.h>
inherit SKILL;

string *dodge_msg =
({
"$nչ��[1;36m���貨΢����[0m������������̤[1m�����ڡ�[0m����ת[1m���ȼá�[0m��[1;33m�������ϣ�է��է����[0m��бб�Ķ��$N��\n",
"ֻ��$nʩչ[1;36m���貨΢����[0m������[1m��̩��[0mλ��һ��ת���ҽ�̤��[1m���ơ�[0mλ��[1;33m����Ѹ���գ�Ʈ������[0m�������Ƶ�$N���\n",
"$n̤��[1;36m���貨΢����[0m��������Ȼ��Ȼ��[1m������[0mλб�У�̤����[1m���ϡ�[0mλ��[1;33m��������Ժ����������ɶ�δ�衱[0m���������ɵض��$N����ʽ��\n",
"$nʹ��[1;36m���貨΢����[0m����[1m��ԥ��[0mλ̤[1m���ۡ�[0mλ��[1;33m���������裬����������[0m�������$N�����ƹ���\n",
"$nչ��[1;36m���貨΢����[0m������б̤[1m���ơ�[0mλ��[1;33m���������壬����������[0m����������Ʈ�˿�ȥ��\n",
"$nб̤[1;36m���貨΢����[0m�����ߺ��ͣ�����[1;33m������������֮���£�ƮƮ��������֮��ѩ��[0m�㡣\n",
});

int valid_enable(string usage)
{
        return (usage=="dodge")||(usage=="move");
}

int valid_learn(object me)
{
        if(me->query_skill("literate",1)*2 <= me->query_skill("linpo-steps",1))
        {
          write("���֪ʶ���㣬�޷�����貨΢�����׾���ʮ���Եľ�Ҫ�仯��\n");
          return 0;
        }
        return 1;
}

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if((int)me->query("kee")<5)
                return notify_fail("������������������貨΢����\n");
        me->receive_wound("kee",5);
        return 1;
}
/*ϣ������Ƴɿ�������
1.���ڵĸ���
2.���˵�exp���Լ���exp
3.�Ƿ������ʹ��linpo-steps��dodge and move��
*/
int can_flee(object me,int exit_number)
{
    object *enemy;
    int i,enemy_num,enemy_exp,me_exp,ratio;

    if(!me) return 0;
    if(!me->query("marks/linpo-steps")) return 0;
    if(me->query("force") <100) return 0;
    if(me->query_skill_mapped("dodge") != "linpo-steps" ||
       me->query_skill_mapped("move") != "linpo-steps") return 0;
    enemy=me->query_enemy();
   if(!sizeof(enemy)) return 0;
/*
    if(sizeof(enemy) <1){
     message_vision(
"$N��Ȼ����"HIC"���貨΢����"NOR"��Ҫּ���ڣ��Ų�����"HIY"�����޳�����Σ��������ֹ���ڣ�
����������"NOR",��ʱһƬ��Ӱ�׷ɣ��õ���ͷ���ۻ�\n",me);
     message_vision(HIM"$N"HIM"��׼ʱ����ʹ���貨΢��������սȦ!!\n"NOR,me);
     return 1;
    }
*/
    me_exp=me->query("combat_exp");
    enemy_exp=0;
    enemy_num=0;
    for(i=0;i<sizeof(enemy);i++){
      if(!enemy[i]) continue;
      if(enemy[i]->query("combat_exp") < (int)(me_exp*2/3)) continue;
      enemy_exp+=enemy[i]->query("combat_exp");
      enemy_num++;
    }
    if(!enemy_num){
     message_vision(
"$N��Ȼ����"HIC"���貨΢����"NOR"��Ҫּ���ڣ��Ų�����"HIY"�����޳�����Σ��������ֹ���ڣ�
����������"NOR",��ʱһƬ��Ӱ�׷ɣ��õ���ͷ���ۻ�\n",me);
     message_vision(HIM"$N"HIM"��׼ʱ����ʹ���貨΢��������սȦ!!\n"NOR,me);
     return 1;
    }
    enemy_exp/=enemy_num;
    if(exit_number >=4) ratio=100;
    if(exit_number ==3) ratio=82;
    if(exit_number ==2) ratio=66;
    if(exit_number ==1) ratio=50;
    if(exit_number ==0) return 0;
    if(!me->is_busy() && ratio > random(110) && me->query("kee")<=(me->query("max_kee")/3)) {
      if(enemy_exp < me_exp * 2){
       message_vision(
"$N ����Ĭ���"HIC"���貨΢����"NOR"����ʮ���Բ������ԡ����ġ���ʼ�������ڡ�
 �����ȼá��������ˡ�������һ��Ȧ������������������˳����\�ѵ��˵ľ�����\n"NOR,me);
        message_vision(HIM"$N"HIM"��׼ʱ����ʹ���貨΢��������սȦ!!\n"NOR,me);
        me->add("force",-200);
        return 1;
      }
      else{
        if((100*me_exp/enemy_exp) > random(110)){
          me->add("force",-200);
       message_vision(
"$N ����Ĭ���"HIC"���貨΢����"NOR"����ʮ���Բ������ԡ����ġ���ʼ�������ڡ�
 �����ȼá��������ˡ�������һ��Ȧ������������������˳����\�ѵ��˵ľ�����\n"NOR,me);
          message_vision(HIM"$N"HIM"��׼ʱ����ʹ���貨΢��������սȦ!!\n"NOR,me);
          return 1;
        }
      }
    }
    return 0;
}
