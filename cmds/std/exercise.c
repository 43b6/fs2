// exercise.c
// spi < skill����ʱ�ӵ�����ֵֻ��1
// ʥ��ĵ���superforce lv��100֮ǰ��û������ֵ
//
// refix by chan

#include <skill.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        int kee_cost, force_gain,spi,sk_mount,con;
        string ena_force;
        seteuid(getuid());
        if(me->query_condition("ff_poison"))
          return notify_fail("����Ѫʧ�����޷�������\n");
        if(me->query_temp("saving_die"))
          return notify_fail("�����ھ���, û�а취����!!!\n");
        if( me->is_fighting() )
                return notify_fail("ս���в������ڹ������߻���ħ��\n");
        ena_force = me->query_skill_mapped("force");
        if( !stringp(ena_force) )
                return notify_fail("��������� enable ѡ����Ҫ�õ��ڹ��ķ���\n");

        if( !arg ) kee_cost = 30;
        else if (!sscanf(arg, "%d", kee_cost))
                return notify_fail("��Ҫ��������������\n");

        if( kee_cost < 10 ) return notify_fail("������Ҫ�� 10 �㡸��������������\n");

        if( (int)me->query("kee") < kee_cost )
                return notify_fail("�����ڵ���̫���ˣ��޷�������Ϣ����ȫ������\n");

        if( (int)me->query("sen") * 100 / (int)me->query("max_sen") < 70 )
                return notify_fail("�����ھ���״��̫���ˣ��޷�����רһ��\n");

        if( (int)me->query("gin") * 100 / (int)me->query("max_gin") < 70 )
                return notify_fail("�����ھ����������޷�������Ϣ��������\n");

        write("�������������ù���һ����Ϣ��ʼ������������\n");

        me->add("kee", -kee_cost);

        // This function ranged from 1 to 15 when kee_cost = 30
        // �˹�������(con)�й�
force_gain=kee_cost*(me->query("max_force")+me->query("con")*2)/2000;
if(me->query("class")=="fighter") force_gain=force_gain*1.2;
//ԭ����if(me->query("class")=="fighter") force_gain=force_gain*1.5;

// 98/6/4 ppl ��Ӧ�����ַ����޷�����max_force
//������� swordsman force lv 50 ,max_force ==250, kee 166
//���һ��exercise kee 160 ,force_gain~=160(250+40)/2000=23 �ѹ����˽�swordsman ȥ��
//��������벻����ô���....����force�͵�class���Ҳһ��
//�����Һ�chan��Ϊ��Ҫ��ppl֪���и�exercise...��Ȼϵͳ����,tintin��ʼ����
//so ���ȼ�������,Ȼ���ٽ������۽���ķ���....:) ...Roger
/*ȡ��......
if(me->query("class")=="swordsman" || me->query("class")=="poisoner"
|| me->query("class")=="taoist" || me->query("class")=="dancer")
force_gain=force_gain*1.2; //������Ϊ lv 50 �� max_force only 250
                          //����һ����һ����������kee,force_gain~=46
                            //����ֱ�����...̫����....����������:by chan
        // �����������?  ask by wade..

*/
        if( force_gain < 1 ) {
                write("���ǵ����й���ϣ�ֻ����ȫ��i�顣\n");
                return 1;
        }

        // me->add("force", force_gain );
        // ��������
        me->add("force",force_gain);

        if( (int)me->query("force") > (int)me->query("max_force") * 2) {
                if( (int)me->query("max_force") >= 
                ((int)me->query_skill("force",1)/5 +
         me->query_skill("force") ) *10
                  )
                {
                        write("�������Ϣ�鲼ȫ����ʱȴû�й��������ļ����ƺ�������Ϊ�Ѿ�������ƿ����\n");
                } else {
                        write("���������ǿ�ˣ�\n");
                        me->add("max_force", 1);
                }
                me->set("force", me->query("max_force"));
        }        
        if((random(me->query_skill("force",1))*4+me->query_skill("force",1))<
            random(me->query_skill(me->query_skill_mapped("force"),1))
           )
        {
          tell_object(me,
            "��������Ĺ�������������������ǿ��������������Ѫʧ����\n");
          me->apply_condition("ff_poison",(30-random(me->query("con")))/2);
        }
if(me->query("class")=="prayer"&&(ena_force=="superforce"))
if(me->query_skill("superforce",1) < 100) //�����ķ���lv 100֮ǰû������ֵ
     return 1;
con=me->query("con"); //�������ʵ�����
con=con*6+20;
if(con < 100) //��֤������һ��
   con = 100;
if(me->query("class")=="fighter") //���߷ſ�һ�����
  con=con*1.2;
if(me->query_skill(ena_force,1) > con)  
     return 1;
spi=me->query("spi");
sk_mount=me->query_skills();
sk_mount=sizeof(sk_mount);
if(spi > sk_mount)
me->improve_skill(ena_force,5);
else
me->improve_skill(ena_force,1);
        return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : exercise [<�ķѡ�����������Ԥ��ֵ 30>]
ָ��˵�� :
           �����������������ڵ����ڸ�����������������
         ѵ�����弡���������������������������������
         ��ʽ����������������
�����ο� :
           help stats
HELP
        );
        return 1;
}
