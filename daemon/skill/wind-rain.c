//���ϸ��¥skill ֮��������
//���ǽ��ϸ��¥npc�ı�־,ʹ����һ��parry skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;

string *parry_msg = ({
 "$nʹ��һʽ"HIY"������Ʈ��"NOR"���������Ϲ���ȫ��ֱ��$N�����ƶ��ţ�������$N�Ĺ���\n",
 "$nһʽ"HIC"��ɴ����硯"NOR"�������������ԥ�ؾ���$n����Ϯ��ֻ��һ��һ֮̽���Ѵ������˵�λ��\n",
 "$n����ֹ����Ϣ���ӣ�$N��һ��һ������$n���£�˲�䣬$n�ɶԶ���ʹ��"HIW"��ǧ�ۜ`ϸ��"NOR"�㿪��$N�Ĺ���\n",
 "$n��������˲�����ض�׹ʹ��"HIG"�������ꡯ"NOR"��������ǧ����ָ��$N�ֻ���$N������\n",
 "$nԪת˫��ʹ��һʽ"HIM"�������¥��"NOR"�����ٻ�ת��������֯��һƬ�⻷������ʹ$N�Ĺ��������ɻ�\n",
});

int valid_enable(string usage)
{
	return (usage=="parry");
}


string query_parry_msg(string limb)
{
	return parry_msg[random(sizeof(parry_msg))];
}


