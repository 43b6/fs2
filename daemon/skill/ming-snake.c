// lys-skill
//QC..OK..by Chan 8/29/98

inherit SKILL;


string *parry_msg=
    ({
      "$n�����ޣ�ʹ��ڤ�߱޷�����ʽ����$N�Ĺ���һһ��ȥ\n",
      "ֻ��$n����һת���ᶶ����$l��Ȧ��һ���޻�����$N��$w��ȥ\n",
      "$n����$l����$l���һ��ȦȦ����ס���������\n",
      "$n��æ֮�ʣ�ʹ��һ�С�Χκ���ԡ�������ֱ�����Ƶ�$N���Ʒ���\n",
    });
mapping *action = ({
([ "action":"$N����$wһ�ӣ�ʹ��һ��[33m�����߳�����[0m�����ƾ��ˣ�ֱ��$n��ȥ",
        "dodge": -20,
        "parry": 25,
        "damage": 50,
        "damage_type":  "����",
]),

([ "action":"$Nʹ��һ��[35m�����߰˷���[0m��$w�����߰�������˷�����$n",
        "dodge": -15,
        "parry": 35,
        "damage": 45,
        "damage_type":  "����",
]),

([ "action":"$Nʹ��һ��[1;34m������է�֡�[0m��$w�������֣�������������$n�޷�׽��$N�ı�·",
        "dodge": 10,
        "parry": 40,
        "damage": 40,
        "damage_type":  "����",
]),

([ "action":"$N����һ�ӣ�ʹ��һ��[31m������������[0m������һ��������$w��$n��ɨ��ȥ",
        "dodge": -15,
        "parry": 25,
        "damage": 55,
        "damage_type":  "����",
]),

([ "action":"$N�Ӷ�$w��ʹ��һ��[1;33m�����������[0m������ǧ��������ͬʱ�����ֱ��$n����Ѩ",
        "dodge": -10,
        "parry": 35,
        "damage": 60,
        "damage_type":  "����",
]),

([ "action":"$N����$wһ����Ȧ��һȦȦ�޻���һ��[1;32m�����߲���[0m����$n��ȥ",
	"dodge": 35,
        "parry": 50,
    "damage": 70,
        "damage_type":  "����",
]),

([ "action":"$N����һб��ʹ��һ��[1;31m�����ʴ�ġ�[0m����ʱ�����Ӱ������Ю��һ���ȷ���$n����",
        "dodge": 20,
        "parry": 45,
     "damage": 80,
        "damage_type":  "����",
]),

([ "action":"[1;35m$N$w΢�ӣ�ʹ��һ��[1;36m����ڤ�û���[1;35m��
ʹ��֮�첻����Ӱ��ֻ�ź������죬а����ɷ��Χ��$n����[0m",
        "dodge": 25,
        "parry": 50,
    "damage":80,
        "damage_type":  "����",
]),

});

int valid_enable(string usage)
{
        return usage=="whip" || usage=="parry";
}
string query_parry_msg(string limb)
{
  int parry_pow;
  object me;
  me=this_player();
  if(!me) return parry_msg[random(sizeof(parry_msg))];
        parry_pow = (int)( me->query_skill("ming-snake", 1)/10);
          if ( parry_pow < 3)
                return parry_msg[random(2)];
            else

                return parry_msg[random(sizeof(parry_msg))];
}
mapping query_action(object me, object weapon)
{
	int skill_level, limit;
	skill_level = (int)(me->query_skill("ming-snake",1));
	limit = (int)(skill_level/10);
	if(limit < 4)
		return action[random(3)];
	if(limit < 8)
		return action[random(limit)];
	else
		return action[random(sizeof(action))];
}
int vaid_learn(object me)
{
	object ob;
	if(!(ob=me->query_temp("weapon")) || (string)ob->query("skill_type")!="whip")
                return notify_fail("���ñ���ôѧѽ!����û�и��\n");
	return 1;
}
int practice_skill(object me)
{
	object ob;
	if(!(ob=me->query_temp("weapon")) || (string)ob->query("skill_type")!="whip")
		return notify_fail("���ñ������ϰ�޷���\n");
	if( (int)me->query("kee")< 40)
		return notify_fail("��������? ������������ˣ�������Ϣһ�������ɡ�\n");
	if( (int)me->query("force")< 5 )
                return notify_fail("������������ˣ��ҿ��㻹����Ϣһ�������ɡ�\n");
	me->receive_damage("kee", 40);
	me->add("force",-5);
	return 1;
}
	
string perform_action_file(string action)
{
        return CLASS_D("poisoner")+"/ming-snake/"+action;
 }

