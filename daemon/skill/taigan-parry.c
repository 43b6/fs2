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
        int level,skill;
        level=me->query("taigan_level",1);
        skill=me->query_skill("taigan-parry",1);
        if(me->query("class")!="taigan"){
                return notify_fail("ֻ��̫����ѧ����ӡ��");
                return 0;
                }
         if(me->query_skill("taiyiforce",1) < 60)
         {
         write("���̫���\����������..�޷�ѧϰ����ӡ��\n");
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








