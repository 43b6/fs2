//�������� by bss
#include <ansi.h>
#include <combat.h>
inherit SKILL;

string *dodge_msg = ({

        "\n"HIC"$n�Ų��沽��������ң�����������Ƶ���$N�����ʹ$N�Ĺ�����ա�"NOR"\n",

        "\n"HIC"$n�Ľ��º�Ȼ�ӿ죬����һ������Ȼ��$N����ǰ��ʧ����$N��֪���롣"NOR"\n",

        "\n"HIC"$n��������ͣ�˫����أ����μ�ת����һ��������$N���Դܹ��������\n$N�ı�ɱ��ʽ��"NOR"\n",

        "\n"HIC"$n����վ�����������ǰ�����Ұ�\����ǡ�õĶ����$N����ʽ��"NOR"\n",

        "\n"HIC"$n�����岻�ϵ�תȦ������С�Ŀռ��п��ٵ��ƶ���ʹ$N�Ҳ���$n��ȷʵλ\n�ã���ʽ��ա�"NOR"\n",

});



int valid_enable(string usage) {
        return (usage=="dodge")||(usage=="move");

}

int valid_learn(object me)
{
        int level,skill;
        level=me->query("taigan_level",1);
        skill=me->query_skill("taigan-steps",1);
        if(me->query("class")!="taigan"){
                return notify_fail("ֻ��̫����ѧ��������");
                return 0;
                }
        switch(level){
                case 5:
                        return 1;
                        break;
                case 6:
                        if(skill>80){
                                return notify_fail("��Ĺ�Ʒ�������޷�ѧϰ��������似��\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 7:
                        if(skill>60){
                                return notify_fail("��Ĺ�Ʒ�������޷�ѧϰ��������似��\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 8:
                        if(skill>40){
                                return notify_fail("��Ĺ�Ʒ�������޷�ѧϰ��������似��\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 9:
                        if(skill>20){
                                return notify_fail("��Ĺ�Ʒ�������޷�ѧϰ��������似��\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                default:
                        write("�㲻��̫�࣬�޷�ѧϰ�����似��\n");
                        return 0;
                        break;
  }
}

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if((int)me->query("kee")<5)
                return notify_fail("���������������������������\n");
        me->receive_wound("kee",5);
        return 1;
}

