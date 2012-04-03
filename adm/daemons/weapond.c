
// weapond.c
 
#include <ansi.h>
#include <combat.h>
 
mapping weapon_actions = ([
        "hit": ([
                "damage_type":  "ײ��",
                "action":               "$N�Ӷ�$w��ײ��$n��$l",
                "parry":                20,
                ]),
        
        "claw": ([
                "damage_type":  "ץ��",
                "action":              "$N��$w��$n��$lץȥ",
                "parry": -20,         
                ]),
                 
        "slash": ([
                "damage_type":  "����",
                "action":               "$N�Ӷ�$w��ն��$n��$l",
                "parry":                20,
                "post_action":  (: call_other,__FILE__,"damage_weapon" :),
                ]),
        
        "slice": ([
                "damage_type":  "����",
                "action":               "$N��$w��$n��$l��ȥ",
                "dodge":                20,
                ]),
        "chop": ([
                "damage_type":  "����",
                "action":               "$N��$w����$n��$l������ȥ",
                "parry":                -20,
                ]),
        "hack": ([
                "action":               "$N����$w����׼$n��$lһ���ҿ�",
                "damage_type":  "����",
                "damage":               30,
                "dodge":                30,
                ]),
        "thrust": ([
                "damage_type":  "����",
                "action":               "$N��$w��$n��$l��ȥ",
                "dodge":                15,
                "parry":                -15,
                ]),
        "pierce": ([
                "action":               "$N��$w��$n��$l�ݺݵ�һͱ",
                "damage_type":  "����",
                "dodge":                -30,
                "parry":                -30,
                ]),
        "whip": ([
                "action":               "$N��$wһ���$n��$l��ȥ",
                "damage_type":  "����",
                "dodge":                -20,
                "parry":                30,
                ]),
        "impale": ([
                "action":               "$N��$w��$n��$lֱ����ȥ",
                "damage_type":  "����",
                "dodge":                -10,
                "parry":                -10,
                ]),
        "bash": ([
                "action":               "$N����$w����$n��$l����һ��",
                "damage_type":  "����",
                "post_action":  (: call_other, __FILE__, "bash_weapon" :),
                ]),
        "crush": ([
                "action":               "$N�߸߾���$w����$n��$l��ͷ����",
                "damage_type":  "����",
                "post_action":  (: call_other, __FILE__, "bash_weapon" :),
                ]),
        "slam": ([
                "action":               "$N����$w����¶�׹⣬�͵ض�׼$n��$l���˹�ȥ",
                "damage_type":  "����",
                "post_action":  (: call_other, __FILE__, "bash_weapon" :),
                ]),
        "throw": ([
                "action":               "$N��$w��׼$n��$l���˹�ȥ",
                "damage_type":  "����",
                "post_action":  (: call_other, __FILE__, "throw_weapon" :),
                ]),
        "arrow": ([
                "action":               "$N��$w��׼$n��$l���˹�ȥ",
                "damage_type":  "����",
                "post_action":  (: call_other, __FILE__, "arrow_weapon" :),
                ]),
        "bow"  : ([
                "action":               "$N��$w��׼$n��$l���˹�ȥ",
                "damage_type":  "����",
                "post_action":  (: call_other, __FILE__, "bash_weapon" :),
                ]), 
]);
varargs mapping query_action()
{
        string verb, *verbs;
 
        verbs = previous_object()->query("verbs");
 
        if( !pointerp(verbs) ) return weapon_actions["hit"];
        else {
                verb = verbs[random(sizeof(verbs))];
                if( !undefinedp(weapon_actions[verb]) )
                  return weapon_actions[verb];
                else return weapon_actions["hit"];
        }
}
 
void throw_weapon(object me, object victim, object weapon, int damage)
{
        if( objectp(weapon) ) {
                if( (int)weapon->query_amount()==1 ) {
                        weapon->unequip();
                    tell_object(me, "\n���" + weapon->query("name") + "�����ˣ�\n\n");
                }
                weapon->add_amount(-1);
        }
}
void arrow_weapon(object me, object victim, object weapon, int damage)
{
         if( objectp(weapon) ) {
                if( (int)weapon->query_amount()==1 ) {
                        weapon->unequip();
                      tell_object(me, "\n���" + weapon->query("name")+ "������! \n\n");

                }
                weapon->add_amount(-1);
        }
}
 

void bash_weapon(object me, object victim, object weapon, int damage)
{
        object ob;
        int wap, wdp,apr,dpr;

        if( objectp(weapon)
        &&      damage==RESULT_PARRY
        &&      ob = victim->query_temp("weapon") ) {
        
        apr = (int)weapon->query("rigidity");   //Ӳ��
        dpr = (int)ob->query("rigidity");
        if(apr >20) apr=20;
        if(dpr >20) dpr=20;
        
                wap = (int)weapon->weight() / 500
                        + apr/5
                        + (int)me->query("str");
                wdp = (int)ob->weight() / 500
                        + dpr/5
                        + (int)victim->query("str");
                wap = random(wap);
                if( wap > 2 * wdp ) {
                        message_vision(HIW "ֻ������ž����һ����$N���е�" + ob->name()
                                + "�Ѿ���Ϊ���أ�\n" NOR, victim );
                        ob->unequip();
                        ob->move(environment(victim));
                        ob->set("name", "�ϵ���" + ob->query("name"));
                        ob->set("value", (int)ob->query("value") / 10);
                        ob->set("weapon_prop", 0);
                        victim->reset_action();
                } else if( wap > wdp ) {
                        message_vision(HIW "$Nֻ��������" + ob->name() + "�ѳֲ��������ַɳ���\n" NOR,
                                victim);
                        ob->unequip();
                        ob->move(environment(victim));
                        victim->reset_action();
                } else if( wap > wdp / 2 ) {
                        message_vision("$Nֻ��������" + ob->name() + "һ����Щ���֣�\n",
                                victim);
                }
                else {
                        message_vision("$N��" + weapon->name() + "��$n��" + ob->name()
                                + "�����ð�����Ļ��ǡ�\n", me, victim);
                }
        }
}
 
// �ⲻ������˭д���
// �������������� query("weapon_prop/damage") ��?
void damage_weapon(object me,object target,object weapon,int damage)
{
	"/adm/daemons/weapon_material.c"->weapon_material(me,target);
/*
  object ob=target->query_temp("weapon");
  int ap,dp,apr,dpr;
 
  // ��˵�е� bug, �����ֲ�̫ȷ��, �Ҿͼ���������� check
  // fixed by wade 11/22/1995
  if (!weapon || !ob || !weapon->query("weapon_prop/damage") || !ob->query("weapon_prop/damage"))
    return;
    
  apr = (int)weapon->query("rigidity")/2;
  dpr =(int)ob->query("rigidity");
  if( apr > 50)
     apr=50;
  if( dpr > 100)
     dpr=100;   
  
  ap = weapon->query("weapon_prop/damage")
       + apr 
       + me->query("force")*me->query("force_factor")/400;
  dp = ob->query("weapon_prop/damage")
       + dpr 
       + target->query("force")*target->query("force_factor")/400;
  ap = random(ap);

  if( ap > 3*dp )
  {
        message_vision(
      "$N��"+weapon->name()+"��ৡ���һ������$n��"+ob->name()+"��������\n",me,target);
           ob->unequip();
	   ob->move(environment(target));
           ob->set("name", "�ϵ���" + ob->query("name"));
           ob->set("value", (int)ob->query("value") / 10);
           ob->set("weapon_prop", 0);
	   target->reset_action();
   
  }else if( ap > 2*dp && ob->query("weapon_prop/damage") >6 ) 
     {
       message_vision(
      "$N��"+weapon->name()+"��$n��"+ob->name()+"������һ��ȱ��\n",me,target);
       ob->unequip();
       ob->add("weapon_prop/damage",-5);
       ob->wield();
     }
*/
}
