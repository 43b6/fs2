 

#include <ansi.h>
inherit SKILL;
inherit SSERVER;
string *dodge_msg=({
   "$nʹ��ѩ����ѧ�е�"HIW"����Ų�����"NOR"˫�Ųлã�����һת�����˿�ȥ��\n",
   "$nʹ���������е�"HIM"����Ӱ������"NOR"����΢�Σ�ʹ$N�������˿ա�\n",
   "$n��������������λ��ʹ��"HIG"����Ӱ���١�"NOR"���˿�ȥ��\n",
   "$nʹ��"HIC"��ת���Ρ�"NOR"��������У��������ɵر��˿�����\n",
   "$n����һ�Σ�ʹ��"HIB"����Ӱʽ��"NOR"ֻ��������Ӱ�������䣬��$N���Ĳ�֪����������ա�\n",
    });
string *array_msg=({
        "$n���ڶ�λ��һ��"HIW"������ʽ��"NOR"����$N��æ���ң�\n",
        "$n������λ��һ��"HIY"���Ե�ʽ��"NOR"��ͼ����$N�Ĺ��ƣ�\n",
        "$nվ����λ��һʽ"HIB"���Ϸ��ԡ�"NOR"�����������У�\n",
        "$nվ�ڱ�λ��һʽ"HIR"�������"NOR"�����͹�$N��\n",
        "$n���ڻ��ţ�һ��"HIC"������ʽ��"NOR"ʹ$N���������������ţ�\n",
	});
int valid_learn(object me)
{
	return 1;
}
string query_dodge_msg(string limb)
{
    if(!this_player()) return "";
	if(this_player()->query_temp("use_form")==1)
    message_vision( array_msg[random(sizeof(array_msg))],offensive_target(this_player()),this_player());
	return dodge_msg[random(sizeof(dodge_msg))];
}
int valid_enable(string  usage)  {
	return (usage=="dodge"||usage=="move");
}
int practice_skill(object me)
{
	if( (int)me->query("kee") < 30 )
		return notify_fail("�������������������Ӱ���ٲ���\n");
	me->receive_damage("kee", 30);
	return 1;
}
