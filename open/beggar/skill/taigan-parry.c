//����ӡ�� by bss
#include <ansi.h>
inherit SKILL;

string *parry_msg =
({

        "\n"HIY"$n���ڵ���������������ת������������������������$N�������ھ���Ϊ���á�"NOR"\n",

        "\n"HIR"���$Nǿ��Ĺ��ƣ�$nǿ�˲���ӡ������$N��ǿ����ھ�Ӳ�Ǵ��������ĵ��ϣ�ʹ����������һ�������г���Ľ�ӡ��"NOR"\n",

        "\n"MAG"$n˫��ƽ�ƶ�������������һ�£�����ǰ�γ�һ����ǽ����$N���ҵĹ��Ƶ������ˡ�"NOR"\n",

});

int valid_enable(string usage) {
int family;
object me=this_player();
if ( me->query("family/family_name") != "����")
        return (usage=="parry");
else
 return notify_fail("ֻ�ж���̫������ò���ӡ��!!\n");

}

string query_parry_msg(string limb){

        return parry_msg[random(sizeof(parry_msg))];
}

int valid_learn(object me)
{
       if(me->query_skill("taiyiforce",1) < 60)
 {
   write("���̫�������������..�޷�ѧϰ����ӡ��\n");
   return 0;
 }
        return 1;
}









