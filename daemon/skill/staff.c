// stabber.c

inherit SKILL;

mapping *actions = ({
	([  "action"     :	"$N��$w��ǰһ�ͣ�ֱ��$n$l",
	    "damage_type":	"����",
	]),
	([  "action"     :	"$N����$w����׼$n$l��ȥ",
	    "damage_type":	"����",
	]),
	([  "action"     :	"$N�߾�����$w����$n$l���˹�ȥ",
	    "damage_type":	"����",
	]),
	([  "action"     :	"$N��$wһ�ӣ���$n$l��������",
	    "damage_type":	"����",
	]),
	([  "action"     :	"$NѰ�ſ�϶������$w��׼$n$l���˹�ȥ",
	    "damage_type":	"����",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof( actions))];
}

