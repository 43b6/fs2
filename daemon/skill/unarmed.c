// stabber.c

#include <ansi.h>
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

void skill_improved(object me)
{
        int s;

        s = me->query_skill("unarmed",1);
        if( s%10==9 && (int)me->query("str") < s/4) {
                tell_object(me, HIW "�������������գ������������ˡ�\n" NOR);
                me->add("str", 2);
        }
}
string perform_action_file( string func)
{
return PERFORM_D("unarmed/") + func;
}
