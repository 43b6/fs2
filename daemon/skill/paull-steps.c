// lum-steps.c
#include <ansi.h> 
inherit SKILL;
inherit SSERVER;          
string *dodge_msg = ({
"$n��¶������΢Ц������һת��һ��[1;35m���¶�������[0m�����Ų�æ����������$N��ɱ��.\n",
"$n�����ᆈ[1;35m����������������������ˡ�[0m��һ˫��������û�ǧ��˫��$N����ǰ˲����ֺ�
�����˵���Ӱ����֪���ĸ��������. \n",
"ֻ��$nȹ��һ��\��$n����Ӱ��ת��$N��󣬲�����$N¶��ǳ��һЦ.\n",
"$n�����ԭ����ת�������[1;35m���仨ɢ�£���ˮҫ�ǡ�[0m�����Ӻ����������ǰ����ʵ������
��ʤ�գ�ֻ��$N����վ��������������ʲô .\n",
"$n����������ǣ���������һ��[1;35m����������У���˿���ʡ�[0m���������Ӱ΢���ľ���
��$n��Ӱ����ش�$N�����Ʈ��.\n",
"$����$n���Ų�æ�������̧��һʽ[1;35m������׷�¡�[0m��$n����Ӱ�ѳ����ڰ���У����������@�㣬�����Ʈ����$N��Ӱ��һ����.\n",
"��Ӱ΢���İ��壬[1;35m������Ī��סһ�ţ������ᳪ��Ů����[0m����$n���趯�£�����һ��ʢ����
�ʻ������޵Ĳʵ�.\n"
});
 
int valid_skill_usage(string usage)
{
        return (usage=="dodge") || (usage=="move");
}
 int valid_enable(string usage)
 {
        return( usage=="dodge" || usage=="move") ;
 }
 
int valid_learn(object me)
{
        if( (int)me->query("max_force") < 10 )
                return notify_fail("�������������û�а취������Ӱ΢�� .\n");
 
        return 1;
}
string perform_action_file(string action)
{
return CLASS_D("dancer")+"/paull-steps/"+action;
} 
string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}
 
int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 5 )
                return notify_fail("�������������������������Ӱ΢�� .\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        return 1;
}
