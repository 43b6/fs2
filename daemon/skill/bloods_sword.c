// �ɽ���תsk ..(��"�ɽ�"�Ҳ��ܵ���)by appo
// Ϊħ����ʽ..��Ȩ����...��ӡǰ����֪ͨ
#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void at_head(object me, object victim, object  weapon, int damage);
void at_hand(object me, object victim, object  weapon, int damage);
void at_foot(object me, object victim, object  weapon, int damage);
void at_miss(object me, object victim, object  weapon, int damage);
void at_wind(object me, object victim, object  weapon, int damage);
void at_quick(object me, object victim, object  weapon, int damage);
void new_1(object me, object victim, object  weapon, int damage);
void new_2(object me, object victim, object  weapon, int damage);
void new_3(object me, object victim, object  weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int con=this_player()->query("con",1);
int sp_value;
string *ghost = ({
HIY+HBBLU"ħ������  ��һʽ  ������ "HIC"��ħ"HIM"Ѫɱ"HIY" �� ����"NOR,
HIB+HBMAG"ħ������  �ڶ�ʽ  ������ "HIC"ħ��"HIM"��Ѫ"HIB" �� ����"NOR,
HIR+HBBLU"ħ������  ����ʽ  ������ "HIC"ħɱ"HIM"�޼�"HIR" �� ����"NOR,
HIG+HBRED"ħ������  ����ʽ  ������ "HIC"ħ��"HIM"��Х "HIG"�� ����"NOR,
HIR+HBYEL"ħ������  ����ʽ  ������ "HIC"ħ��"HIM"���� "HIR"�� ����"NOR,
HIM+HBCYN"ħ������  ����ʽ  ������ "HIC"ħХ"HIR"���� "HIM"�� ����"NOR,
HIC+HBMAG"ħ������  ����ʽ  ������ "HIB"��ħ"HIM"���� "HIB"�� ����"NOR,
HIM+HBBLU"ħ������  �ڰ�ʽ  ������ "HIR"��ħ"HIG"ŭ�� "HIM"�� ����"NOR,
YEL+HBRED"ħ������  �ھ�ʽ  ������ "HIM"�콵"HIG"ħ�� "YEL"�� ����"NOR,
});
mapping *action = ({
             ([ "action":"$N˫��΢̧���Ų������ƶ������ϻ����ھ���ֻ��$N˫�۷�������̵Ĺ�ã��ͻ��ƽ��һ���죬$N���һ��"HIR"��Ѫ�����ա�"NOR+"$nֻ������һ��ȫ����ͣ���$N�ƴ˻���, ���г����û���������Ӱ, ��$n��ȫ�����£�",
                "dodge"      :               -105,
                "parry"      :                -100,
                "damage"     :                300,
                "force"      :                300,
                "damage_type":               "����"
        ]),
             ([  "action":"$N�����г��������ں󣬲������������������ӡ��������ӡ�����І����дʣ����ų����Ļ��裬���������ɽ������������"HIR"��Ѫħ��"NOR+"ɱ��֮һ"HIM"��Ѫ���ɡ�"NOR+"��ʱ���콣���ݺ���$n���ϻ�ȥ��",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                330,
                "force"      :                330,
                "damage_type":               "����"
        ]),
             ([  "action" :"$N������˿��¶��Ũ�ҵ�ɱ����$N��˫��͸����ֻ��$N��ͣ�����彣�������мд���������֮ɥ����ɱ��������"HIW"��Ѫħ��"NOR+"��ѧ֮һ"CYN"��ѪȾ������"NOR+"���ٿȻһƬѪ�죬$nҲ�ܵ�Ѫ����Χ��",
                "dodge"      :                -110,
                "parry"      :                -120,
                "damage"     :                360,
                "force"      :               350,
                "post_action":               (: at_head :),
                "damage_type":               "����"

        ]),
             ([  "action" : "$N��"HIR"Ѫħ����"NOR+"���ӵ����ޣ�հ֮��ǰ�������ں�����Ȱ㴩����$n���ܣ�ֻ��$N����һ����������һ�������εľ�����Ȼ��$nӿȥ��",
                "dodge"      :               -120,
                "parry"      :                -120,
                "damage"     :                380,
                "force"      :               350,
               "post_action":               (: at_hand :),
                "damage_type":               "����",
 
        ]),
             ([  "action" : "$N���幭��������������У�ȫ��������һƬ�����У��������粨�ΰ㸡��������������ھ������ⲻ�����ӣ�ٿȻ����һ˲��һ�������������ɵص���$n�����ȥ",
               "dodge"       :               -130,
                "parry"      :                -140,
                "damage"     :               390,
                "force"      :                380,
              "post_action":               (: at_foot :),
                "damage_type":               "����",
 
        ]),

([  "action" :HIB"$Nʹ��һ��"HIM"ħ �� "HIC"ҫ �� ��"HIB""HIR"������ħ��ɢ�����ޱȵĹ�ã����Ȼ��ħ�����ֶ������������������¾���\n"HBBLU"�û��������ã��$n����˷������������$n�����޴��мܡ�"NOR,

        "dodge"      :                -150,
        "parry"      :                -160,
        "damage"     :                 380,
        "force"      :                 500,
        "post_action":                (: new_3 :),
        "damage_type":               "����"

]),
([  "action" :HBBLU"$N���һ������Х���أ�����˷����������Ƽ���ŭ�W�����ϲ���������ƴ���"NOR"
"+HIR"�ߣߨx�y�z�{�|�}�~�� "HIC"ħɱ"HIY"�޼� "HIW"�� "HIM"��Ѫ"HIC"��� "HIR"���~�}�|�{�z�y�x�ߣ�\n"HIW"��ط·𱻴�����ǣ������һ����Ѫɫ��$n�౻��������������ɫ���������ã�"NOR,

        "dodge"      :                -160,
        "parry"      :                -160,
        "damage"     :                 410,
        "force"      :                 380,
        "post_action":                (: new_1 :),
        "damage_type":               "����"

]),
 ([  "action" :HIY"$N���к�¶�׹�"HIW+HBBLU"�� "HIR"ħ  "HIG"��  "HIC"��  "HIG"��  "HIG"��  "HIG"��  "HIM"�� "HIW"��"NOR"\n"HIY"��������ħ�־�����֮�У�ֻ��������������$n���ܣ�˲Ϣ��$nȫ��Ѫ����ֹ��"NOR,

        "dodge"      :                -150,
        "parry"      :                -170,
        "damage"     :                 380,
        "force"      :                 400,
        "post_action":                (: new_2 :),
        "damage_type":               "����"

]),
             ([ "action"     :HIW"$Nʹ��Ѫħɱ��һʽ"NOR"
             "+HIY"----��ħ�޾�Ѫ��ħɱ----"NOR"
"+HIW"$N��������˷���ħ���������޾��ľ���������ӿ��$N���ڣ�ֻ��$N������ʳ��ħħ�������ѿ���Ѫ����ζ.��Ȼ����$n.�·���͸����Ƶ�....��$nֱ����ȥ"NOR"
"+HIC"$N˲����ʧ�ڿռ���..."NOR,
                 "dodge"     :              -170,
                 "parry"     :              -160,
                 "damage"    :               430,
                 "force"     :              300,
                 "post_action":               (: at_miss :),
                 "damage_type":               "����",
        ]),
//10
             ([ "action"     :HIW"$Nʹ��Ѫħɱ֮�ڶ�ʽ"NOR"
             "+HIR" ----ѪȾ�쳾----"NOR"
"+HIW"$N�����������Ͽ�...����ħ����������...����Ҳ����ת��Ϊ��ɫ.ֻ��Ѫ������������."NOR"
"+HIR"��Ȼ��.Ѫ��һ����ҫ..˲��ɱ��$n��ǰ...."NOR,

                "dodge"      :                -180,
                "parry"      :                -180,
                "damage"     :                 450,
                "force"      :                 500,
                "post_action":               (: at_wind :),
                "damage_type":               "����",
        ]),

             });

int valid_learn(object me)
{


       if(me->query("bloodsword")!=2){
        tell_object(me,"�㻹�����ʸ���Ѫħ���ء�\n");
        return 0;
}
       if( !me->query_temp("weapon")){
        tell_object(me,"��Ѫħ���������ðѽ���\n");
        return 0;
                                     }
       if( (me->query("potential") - me->query("learned_points")) < 15 ) {
        tell_object(me, "���Ǳ�ܲ���ʮ��㣬�޷����˽�����\n");
        return 0;
 }
        me->add("potential", -15);
  return   1;
}

mapping query_action(object me, object weapon)
{
       int skill_level, limit;
        skill_level = (int)(me->query_skill("bloods_sword", 1));
        limit= (int)(skill_level/10);
        if (limit < 2 )
                return action[random(3)];
        if (limit < 3 )
                return action[random(4)];
        else if (limit < 4)
                      return action[random(5)+1];
        else if (limit < 5) 
                  return action[random(5)+2];
        else if (limit < 7) 
                  return action[random(6)+2];
        else if (limit < 9)
                 return action[random(7)+3];
        else
           return action[random(6)+4];
}
int valid_enable(string usage)
{
   return ( usage=="sword" || usage=="parry" );
   
}
void at_head(object me, object victim, object  weapon, int damage)
{
  sp_value =2*(str+cor)+cps+kar+spi;
   victim->receive_damage("kee",sp_value,me);
   COMBAT_D->report_status(victim);
}
void at_hand(object me, object victim, object  weapon, int damage)
{
  sp_value =2*(str+cor)+cps+kar+spi;
   victim->receive_damage("kee",sp_value,me);
   COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
void at_foot(object me, object victim, object  weapon, int damage)
{
  sp_value =3*(str+cor)+cps+kar+int1;
   victim->receive_damage("kee",sp_value,me);
   COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
void at_miss(object me, object victim, object  weapon, int damage)
{
  sp_value =random(150)+4*cps+4*cor;

message_vision(sprintf(HIR"$N��Ѫ���ó�һ���ޱȾ޴�Ľ�â��˲������Ϊ������������$n..$n�޷���������˷��Ĺ���������Ѫ������\n"NOR),me,victim);
         victim->add("kee",-sp_value);
//          if(!me->query_temp("conti"))
         victim->start_busy(1);
   COMBAT_D->report_status(victim);
}

//��һskill�ж�ʽ  (me->query("swordskill/sword1")==1)
void new_1(object me, object victim, object  weapon, int damage)
{
  int i;
  message_vision(HIC"\n"HBBLU"$N����һԾ���Ͼſ�֮�У����һ���á�"HIR"Ѫɱ�ķ�"HIC"��\n"NOR,me,victim);
  message_vision(sprintf(HIR"$N����Ѫħ������֮�Ķ������Ѫħ�Խ�ת��ʹ��"HIC"��"HIR"Ѫɱ�ķ�ʥ����"HIC"�������ϰ����޼�����ʽ�����޾�����������ɱ�񣬷���ɱ�𣡣�"HIR"\n"NOR),me,victim);
   for(i=1;i<=4;i++)
   {
         switch(i)
     {
      case 1:
       message_vision(sprintf(HIR"�ߣߨx�y�z�{�|�}�~��"HIM"ħ"HIW"�B"HIB"ɱ"HIR"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
      break;
      case 2:
       message_vision(sprintf(HIR"�ߣߨx�y�z�{�|�}�~��"HIG"��"HIW"�B"HIC"��"HIR"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
      break;
      case 3:
       message_vision(sprintf(HIR"�ߣߨx�y�z�{�|�}�~��"HIG"��"HIW"�B"HIC"Ѫ"HIR"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
      break;
      case 4:
       message_vision(sprintf(HIR"�ߣߨx�y�z�{�|�}�~��"HIY"��"HIW"�B"HIB"��"HIR"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
      break;
     }
     if( random(me->query("combat_exp")) >random(victim->query("combat_exp"))/6 )
    {
     message_vision(sprintf(HIB"ǿ��ħɱЮ������������а�̽�$n���У���$nʹ��������\n"NOR),me,victim);
     victim->receive_wound("kee",180+random(50));
     victim->apply_condition("hellfire",random(3));
     COMBAT_D->report_status(victim);
     COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
    }
    else
     {
        message_vision(sprintf(HIR"ǧ��һ��֮��$n"+HIR"�ܿ���$N"+HIR"��ɱ�ţ�\n"NOR),me,victim);
     }
  }
 }
// �ڶ�skill �ж�ʽ (me->query("swordskill/sword2")==1)
 void new_2(object me, object victim, object  weapon, int damage)
{
  int i;
   message_vision(HBBLU"$N�������Ѫħ����������ȫ�����ħ�����꣬˲�������ϴܳ������ͬ��ɫ�Ľ��꣡\n"NOR,me);
   message_vision(HIC"˲�����ħ�����꣬��Ȼ������"+HIB"����"+HIR"��w"+HIC"���"+HIG"����"+HIW"�׻�"+HIC"������ǻ���һ�м�ɱ֮�С��꽣���ǡ�\n\n"NOR,me);
   if( random(me->query("combat_exp")) >random(victim->query("combat_exp"))/6 )
    {
     message_vision(sprintf(HIC"�꽣������������ɱ�����ְ����������$n��\n"NOR),me,victim);
     victim->receive_wound("kee",700+random(300),me);
    }
  else
    {
     message_vision(sprintf(HIR"ǧ��һ��֮��$n"+HIR"�ܿ��˻꽣����"+HIR"��ɱ�У�\n"NOR),me,victim);
    }

 }

void new_3(object me, object victim, object  weapon, int damage)
{
  string aaa;
  string arg;
  mixed all;
  object *enemy,who,room,weaponn,obj;
  string ghost2;
  int i,j,force,damage1;
  force=me->query("force",1);
  enemy = me->query_enemy();
  damage1=60;
  i=random(sizeof(enemy));
// 1/3 ����
  if( random(2) == 0 && me->query("force") > 510 && !me->query_temp("conti",1)) {
  message_vision(sprintf(HIC"$Nɱ��������©���ͻȻ��ȡ�"HIR"ħ�����--�����ɱ"HIC"����һ��ת��ɱ��$n���.\n"NOR),me,victim);
    for(j=0; j < 9; j++) {
     aaa = ghost[j];
       ghost2 = "\n";
       ghost2 += aaa;

       if( weaponn=me->query_temp("weapon") )
       ghost2 = replace_string(ghost2, "$w", weaponn->name());
       message_vision(ghost2, me, enemy[i]);
      if( random(me->query("combat_exp")) > random(enemy[i]->query("combat_exp"))/6 )
       {
        message_vision("\n����$N���㲻�������϶�ʱ�����һ��Ѫ���ܵĽ��ۡ�\n" , enemy[i]);
//ȫ������ԼΪ500
        enemy[i]->receive_damage("kee",damage1+random(30));
        me->add("force",-30);
        COMBAT_D->report_status(enemy[i]);
       }
   else message_vision("\n$N�˱Ƚ��죬���յ���������һ�С�\n",enemy[i]);
                    }

    }
 
}
// ����skill �ж�ʽ (me->query("swordskill/sword4")==1)
// ������δ��ɵĹ��������Ͷ�������������ӹ�����

void at_wind(object me, object victim, object  weapon, int damage)
{
   int sp_value;
   if (me->query("swordskill/sword4")==1) sp_value =3*(cor+int1+str+spi+cps+kar);
   else sp_value =3*(cor)+int1+str+spi+cps+kar;
   if(victim->query_temp("conti")!=1  && random(me->query_skill("sword")*2) > random(victim->query_skill("dodge") ))
        {
    message_vision(sprintf(HIC"$N�ó���ɱ��$n��ǰ���Ų����ǣ����ĵ�����$n������ж�ʱ��ð����һ�ѳ���....��ʱ$n��ǰ����˲ʱѪ��,$n��ʱ�Ѿ��޷����������Ĺ�����...\n"NOR),me,victim);
       victim->set_temp("conti",1);
       me->set_temp("conti",1);
     call_out("wind",1,me,victim);
        }
   else if(damage > 0 && !victim->query_temp("conti") && random(10) > 5){
{
     message_vision(sprintf(HIC"$N�ó���ɱ��$n��ǰ���Ų����ǣ����ĵ�����$n����ֳֳ���...ֱ��$n..\n"NOR),me,victim);
     victim->receive_wound("kee",sp_value);
}
    message_vision(sprintf(HIC"$N�ó���ɱ��$n��ǰ���Ų����ǣ����ĵ�����$n���������һ�ѳ���ֱ��$n\n"NOR),me,victim);
    victim->recieve_wound("kee",sp_value);
         victim->start_busy(1);
   COMBAT_D->report_status(victim);
message_vision(sprintf(HIC"$N��ת������һ�ͣ�����ʹ������һ�ͣ�$n���ƹ���\n"NOR),me,victim);
// �ö����г��л���
 COMBAT_D->do_attack(victim, me, victim->query_temp("weapon"),  TYPE_REGULAR);
           }
}
int wind(object me,object victim)
{
if(!me || !victim) return 1;
if(environment(victim) && victim->query_temp("conti") ==1 && (me->query_skill("sword",1) + me->query_skill("move",1)) > random(victim->query_skill("dodge")) && me->is_fighting())
{
message_vision(sprintf(BCYN"$N��ѪȾ�쳾��������Ŀ�ɱ�ź��޷�����$n\n"NOR),me,victim);
   if (me->query("swordskill/sword4")==1) victim->add("kee",-1*me->query("max_kee")/12);
   else victim->add("kee",-1*me->query("max_kee")/16);
   me->add("force",-40);
   COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
    if(victim->query_temp("conti")==1 && environment(me) == environment(victim))
     call_out("wind",1,me,victim);
  if(random(me->query_skill("sword",1)+me->query_skill("move",1)) < random(victim->query_skill("dodge",1)))
{
      victim->delete_temp("conti");
      me->delete_temp("conti");
}
return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("swordsman")+"/blood_sword/"+action;
 }
