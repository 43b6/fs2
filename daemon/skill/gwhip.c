// coding by ken 
// fix by borstquc
// Chan����QC 08/27/98 ֮ǰ����ǿ�˵�.����..
//fix by airke
#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void hurt(object me, object victim, object weapon, int damage);
void bleed(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);

string pit();

string *parry_msg = ({
        "��$n���Ų�æ������һ�ݣ�һʽ"HIW"��"HIB"�����㾦"HIW"��"NOR"ֱȡ$N˫�ۣ�$Nһ��֮�¸Ͻ����лؼ�!\n",
	"$n���в���"HIW"��"HIY"��ת����"HIW"��"NOR"ʹ�ĵ���Ӧ�֣��ѽ�$N�Ĺ���ж�ĺ����������ԡ�\n",
        "$n���з���һ���������ǧ���ַ�������$N�Ĺ���\n",
        "$n��������������һ������$N��ȥ��ж��ƫ��׼ͷ\n",
	"��$n��״������һ��"HIW"��"MAG"�������"HIW"��"NOR"��׼$w���ƽ�����ס����������һ��$N��$w��������Щ���ֶ���!!\n",
        });

string query_parry_msg(string limb)
{
      
        return parry_msg[random(sizeof(parry_msg))] ;
      
}

mapping *action = ({
        ([      "action":               "$Nʹ��һ�С���β�̡�������$w��������$n��$l",
                "dodge":                -10,
                "damage":               20,
                "damage_type":  "����",
                
        ]),
        
        ([      "action":               "һ�С����·ת����$N����$w��һ�����߰����$n��$l",
                "dodge":                -20,
                 "damage":               25,
                "damage_type": "����",
                   
        ]),

        ([      "action":               "$N����$w�鶯������һ�С���β˦��������$w����$n��$l",
                "dodge":                -20,
                "damage":                35,
                "damage_type":  "����",
                
        ]),

        ([      "action":               "$N����$w���й�ֱ����һʽ�����ն�������׼$n��$l�̳�",
                "parry":                -20,
                "dodge":                -10,
                "damage":                40,
                "damage_type":  "����",
                
        ]),

        ([      "action":               "$N����һԾ����$w�ھ����ȣ���"HIY"������\��"NOR"����׼$n��·ֱֱѹ��",
                "dodge":                -30,
                "force":                60,
                "damage":               50,
                "damage_type":  "����",
                
        ]),

        ([      "action":               "$N������ǰһ��$w����˦����һ�С�"HIG"������"NOR"��ֱ��$n��$l",
                "parry":                -10,
                "dodge":                -20,
                "force":                 40,
                "damage":                60,
                "damage_type":  "����",
                
        ]),

        ([      "action":               "$N����$w����һ�֣�ʹһ�С�"HIR"˫����"NOR"�������ֶ�׼$n$l��ȥ",
                "parry":                -25,
                "dodge":                -20,
                "force":                 40,
                "damage":                 70,
                "damage_type":  "����",                
        ]),

        ([      "action":               "$N����ʹ��һʽ��"HIM"�������"NOR"�������ζ�Ȼ�������ߣ�$wƮȻ���������д���ֱָ$n��$l",
                "dodge":                -10,
		"force":		40,
                     "damage":                75,
                "damage_type":  "����",
               
        ]),
        
        ([      "action":               "$N��̤���ǲ�����һ�죬һ�С�"HIW"���Ͽ�"NOR"��$w���ջ���һ�����������ն��$n",
                "parry":                -20,
                "dodge":                -25,
                "damage":	         80,
                "damage_type":  "����",
        
        ]),

        ([      "action":               "$Nһ�С�"HIC"�����"NOR"��������$w���籩��ص���$n$l",
                "parry":                -20,
                "force":                 60,
                "damage":                75,
                "damage_type":  "����",
                
        ]),

        ([      "action":               "$N��Хһ������������һʽ��"HIB"��������"NOR"����$w��Ѹ��֮����$n��ȥ",
                "dodge":                -30,
                "force":                 60,
                "damage":                80,
                "damage_type":  "����",
        ]),

        ([      "action":               "$N����$w�迪����"MAG"������"NOR"��һ�������������������������ɺգ�һ˲�佫$n$l���ÿ�������",
                "dodge":               -25,
		"force":                40,
                "damage":                80,
                "damage_type":  "����",
                
        ]),
});



int valid_learn(object me)
{
        object ob;

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "whip" )
                write("�������װ�������������޷���\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="whip" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
     int whipski=me->query_skill("whip");   
     if( whipski < 40 )
         return action[random(4)];
     if( whipski < 60 )
         return action[random(7)];
     if( whipski < 80 )
         return action[random(7)+4];
     
     return action[random(8)+4];
}

int practice_skill(object me)
{
        me->receive_damage("kee", 10);
        me->add("force", -15);
        write("�㰴����ѧ����һ�������޷���\n");
        return 1;
}

string skill_improved(string me)
{
         tell_object(this_player(),"��ı޷������гɣ���ñ���ǰ������\n");
}
string perform_action_file(string action)
{
        return CLASS_D("taoist") + "/gwhip/" + action;
}
