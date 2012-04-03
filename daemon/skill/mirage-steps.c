// mirage-steps.c  //��Ӱ���ݲ�// write by cch

inherit SKILL;
#include <ansi.h>
string *dodge_msg = ({
	"$n˫��һ��,"CYN".......һ�����̴ӵص�ð��........ "+NOR",
һ��"HIC"��������������"+NOR",$n�Ѳ�֪ȥ��,$N�ƺ������Ծ�,��֪��γ��С�\n",
	"ֻ��$n��Ӱһ��,�ڿն���,ʹ��"HIB"���Ǵ���Ӱ�䡯"+NOR",����������������,
����һ�������Բ��,$n����ʽ������ա�\n",
	"$nʹ����Ӱ���ٲ�֮"HIY"��������μ���"+NOR",��������,��Ӱ���û���λ,
$N����ʽʼ�ղ�������,�����ıܹ�ÿһ�С�\n",
	"$n����ʹ��һ��"HIG"����Ӱӳ������"+NOR",����һ��,����һ��,�����Ƶ�$N���\n",
	"$n��Ӱ΢��,��̤�������²�,����һ��"HIW"����Ӱ���˳ա�"+NOR",����Ʈ����,
������$N�Ĺ���֮��,$n��������ԭ�ء�\n",
	"$n��շ���,ʹ��һ��"HIC"���ӻص��ﲨ��"+NOR",š��һ��,������ҵ�Ʈ��,
$N��ʽδ��,$n����Ʈ�����߿���֮����\n",
        "$n��ʱ��������,������ת,�ۿ�$N���Ʊƽ�,����������,���Ǽ�,һ������,
$N��Ȼ�Էֲ�����ʵ,�������Ӱ��ȥ. \n",  
      
});

int valid_enable(string usage)
{
	return (usage=="dodge") || (usage=="move");
}

int valid_learn(object me)
{
        if(me->query ("combat_exp") <= (me->query_skill("mirage-steps",1)*6) )
                return notify_fail("���ʵս���鲻��,�޷���Ჽ��֮���¡�\n");
	if( (int)me->query("max_force") < 50 )
		return notify_fail("�����������,�޷�����Ӱ���ݲ���\n");

	return 1;
}

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 10 )  
             return notify_fail("���������������������Ӱ���ݲ�����\n");
        if( (int)me->query("force") < 30 )
             return notify_fail("��������������޷�������Ӱ���ݲ�����\n");
	me->receive_damage("kee", 30);
	me->add("force", -3);
	return 1;
}
