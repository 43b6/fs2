// mogi npc dodge ֮ ��ҹ���첽
#include <ansi.h>
inherit SKILL;

string *dodge_msg = ({
"$nƮɢ�����ߵ��޼�ʹ��һʽ"HIM"����Ӱ���١�"NOR"�ڱ����е�˲�仯ʵΪ�飬�ܿ���$N�Ĺ���\n",
"$nһʽ"HIM"����Ӱ�޻ꡯ"NOR"����Ӱ�����黯�ã�$N����һ��ȴֻ�Ǵ�����\n",
"$n̤�����ʹ��һʽ"HIM"��ҹӰ�޺ۡ�"NOR"������Ϊ�����糾��磬��$N��ô��Ҳ�Ȳ���$n����\n",
"$nħ����ɢʹ��һʽ"HIM"��ħӰ����"NOR"��ħ����$n�����γ�һĤ����������������$N�Ĺ���\n",
"$n�������ƣ���Ӱҡҷ���ˣ�ʹ����һʽ"HIM"��ٻӰ������"NOR"��������Щ΢�Ŀռ�ǡ�ɶ��$N�Ĺ���",
});

int valid_skill_usage(string usage)
{
	return (usage=="dodge") || (usage=="move");
}
 int valid_enable(string usage)
 {
        return( usage=="dodge" || usage=="move") ;
 }

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}
