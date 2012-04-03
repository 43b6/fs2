// meditate.c

#include <skill.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	int sen_cost, mana_gain;

	seteuid(getuid());
	
	if( me->is_fighting() ) return notify_fail("ս����ڤ˼����������\n");

	if( !arg
	||	!sscanf(arg, "%d", sen_cost) )
		return notify_fail("��Ҫ�����پ���ڤ˼��\n");

	if( sen_cost < 10 ) return notify_fail("������Ҫ�� 10 �㡸�񡱲���ڤ˼��\n");

	if( (int)me->query("sen") < sen_cost )
		return notify_fail("�����ھ���̫���ˣ�����ڤ˼������ʧ����Զ�Ѳ�������\n");

	if( (int)me->query("kee") * 100 / (int)me->query("max_kee") < 70 )
		return notify_fail("����������״��̫���ˣ��޷����о���\n");

	if( (int)me->query("gin") * 100 / (int)me->query("max_gin") < 70 )
		return notify_fail("����������״��̫�����ˣ��޷�����ڤ˼��״̬��\n");

	write("����ϥ����������ڤ˼��һ�����\n");

	me->receive_damage("sen", sen_cost);

	// This function ranged from 1 to 15 when sen_cost = 30
	mana_gain = sen_cost * ((int)me->query_skill("spells") 
		+ (int)me->query("spi")*2 ) / 300;

	if( mana_gain < 1 ) {
		write("���ǵ��������۾���ֻ��������һƬ�հס�\n");
		return 1;
	}

	me->add("mana", mana_gain );

	if( (int)me->query("mana") > (int)me->query("max_mana") * 2) {
	if( (int)me->query("max_mana") >= (int)me->query_skill("spells")*10 && me->query("class")!="dancer" && me->query("class")!="taoist") {
			write("����ķ������ӵ�˲�����Ȼ��������һƬ���ң��ƺ�ħ���������Ѿ�����ƿ����\n");
		}else if( (int)me->query("max_mana") >= (int)me->query_skill("spells")*20)
		write("����ķ������ӵ�˲�����Ȼ��������һƬ���ң��ƺ�ħ���������Ѿ�����ƿ����\n");
		else {
			write("���ħ������ˣ�\n");
			me->add("max_mana", 1);
		}
		me->set("mana", me->query("max_mana"));
	}	
	
	return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ : meditate [<�ķѡ��񡱵�����Ԥ��ֵ 30>]
ָ��˵�� : 
           ����ڤ˼��������ľ�������Ч�ؼ�������
    ���ܹ�����ʩչ���������������������Լ��ķ�����

��ο� help stat 
HELP
        );
        return 1;
}