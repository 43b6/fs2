// Edit by pzp
// copy from appo (����pzp ͬ��) �����ڷ���.. !!
// ��˼����֮����֮�� version 1.0
// ���ɷ���
// version 2.0 �������ڵ���
// ǰ����֮post_action �������� ����������ʽ����
#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void gold_fluid(object me, object victim, object weapon, int damage);
void light(object me, object victim, object weapon, int damage);
void back_blade(object me, object victim, object weapon, int damage);
void blood(object me, object victim, object weapon, int damage);
void dust(object me, object victim, object weapon, int damage);
void seven(object me,object victim,object weapon,int damage);
void star(object me, object victim, object  weapon, int damage);
void water(object me, object victim, object weapon, int damage);
void busy(object me,object victim,object weapon,int damage);
void water(object me, object victim, object weapon, int damage);
void temp(object me, object victim ,object weapon, int damage);
mapping *action = ({
// 1
      ([
               "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIG"��"+NOR"��һʽ"+CYN" o o o����ǧ����\n\n"+HIC
"$N����������ǰ��ǧ����Ѥ��������"+HIY"��â"+HIC"���β�����ͬһʱ�䣬��ը����һ��"+HIW"����"+HIC"�㳯���ܷ������裬����Ȼ����������Щ��â����â�ĺ��棬��������һƬħ���������С���û�����ü���Ϣ��"+HIM"$n"+HIC"Ŀ��һѣ���Ѿ���������Ϊ��������"NOR,

                "dodge"      :                30,
                "parry"      :                20,
                "damage"     :                250,
                "force"      :                400,
                "post_action" :             (: gold_fluid :),
                "damage_type":               "����"
        ]),
//2
        ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIG"��"+NOR"�ڶ�ʽ"+GRN" o o o��ѪȾ�С�\n\n"
+HIW"$N"+HIC"ԭ�ط�������һץ��$w"+HIC"������ŭ�������㣬Ю��ǿ�͵Ĺ�����ֱ������ȵ��ұ�ͬʱ΢�����ӣ�$w"+HIC"���ˡ�"+HIC"��һ����һ�ѽ𵶶�ʱ��ӳ��һ��������ε�"+HIW"ʮ������â"+HIC"�����������ű�ӭ��ȥ��"NOR,
                "dodge"      :                40,
                "parry"      :                15,
                "damage"     :                280,
                "force"      :                400,
                "post_action" :             (: light :),
                "damage_type":               "���嵶��"
        ]),
//3
        ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIG"��"+NOR"����ʽ"+HIB" o o o������꡷\n\n"
+HIW"$N"+HIC"˫Ŀ��ɷ�����֣�����$w"+HIC"��ǿ�Ҷ����У��������ƫб��$w"+HIC"��б��֮��������ȴ�ڵ���ָ���ɲ�ǣ��Ȼ�����֮�·��������������֮�����ֿ��ֺݣ�Ѹ�ݵ���һ����׷¾��ǧ������ǰ��ȥ��ʱ�⣡"NOR,

                "dodge"      :                 35,
                "parry"      :                 20,
                "damage"     :                  300,
                "force"      :                 400,
                "post_action" :               (: back_blade :),
                "damage_type":               "���ص���"
        ]),
//4
        ([
               "action"      :
HIG"\t��"+HIW"�����ŵ�"+HIG"��"+NOR"����ʽ"+HIR" o o o�������졷\n
"+HIC"���еķ�¾��ӳ�ڲ������"+HIY"��ɫ��â"+HIC"�$w"+HIC"����ϳ�һƬ������صĺ�â��ɽ�����޿յ��İ����������������ķ���֮�䣬����Ҳ�ڼ������ţ����"+HIM"$n"+HIC"���һ������ת��ˤ�˳�ȥ�����յ���Ѫ�������꣡"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                  300,
               "force"      :                 400,
               "post_action" :             (: blood :),
                "damage_type":               "���ؿ���"
        ]),
//5
       ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIG"��"+NOR"����ʽ"+YEL" o o o����������\n
"+HIW"$N$w"+HIC"��磬���𲨲�����â����ӭ"+HIM"$n"+HIC"����â����������ЭͬЮ�ã������ж�ʱ�������з���ӵ���Х��$w"+HIC"�������ľ���Ҳ���Ƕ�Ȼ��ó����ˣ����˵�$w"+HIC"����ȴ��ô��ݵ�������˾��"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                  300,
                "force"      :                 400,
              "post_action" :             (: dust :),
                "damage_type":               "����"
        ]),
//6
        ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIG"��"+NOR"����ʽ"+HIC" o o o������š�\n
"+NOR"$w"+HIC"�������ɣ���ն�ݽأ����Ī���˲Ϣ������ǧ����գ������踩����Ӱ��������"+HIW"����"+HIC"��"+HIC"Ⱥ�Ǳ���"+HIC"��$w"+HIC"�ܼ����񱩵�������˷����£�������֮�䣬"+HIW"$n"+HIC"������ת�������ȥ��"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                  300,
                "force"      :                  400,
                "post_action" :               (: star :),
                "damage_type":                "ɱ��",
              ]),
//7
             ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIG"��"+NOR"����ʽ"+HIG" o o o��������\n
"+NOR"$w"+HIC"��â����õ����������ţ�һɲ����һɲ���������ң�����������������һ�����εģ��Źֵ�"+HIY"����"+HIC"��$N�ĳ��ֹ���ȴ�����ǰ㾪�˵�׼ȷ������ÿ����չʽ��֮ʱ���ѽ�"+HIW"$n"+HIC"�Ĺ���������Ĳ�λ�������ˣ� "NOR,

                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                  300,
                "force"      :                  400,
              "post_action"   :              (: seven :),
                "damage_type":                "����",
                ]),
//8
             ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIW"��"+NOR"�ڰ�ʽ"+BLU" o o o����Ȫˮ��\n
"+HIC"$N�ұ�ٿ����ֻ��$w"+HIC"��â����ݺύ֯��ȴ�������ĵ������·�$N���ų��־�����ʽ��$n���ǲ��������Լ����۾�������ͻ���������д���"+HIG"��Ǻ���ɡ�"+HIC"�Ļ���֮����������Բ����$N��$w"+HIC"��"+HIM"������"+HIC"����Х����һƬ��â�п���$n��в"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
              "damage"     :                  300,
                "force"      :                  500,
                "post_action" :              (: water :),
                "damage_type":                "ɱ��",
                     ]),
//9
             ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIW"��"+NOR"�ھ�ʽ"+HIY" o o o�����ֲ⡷\n
"+HIC"ֻ�����֮��"+HIW"��â��˸"+HIC"������ǧ���"+HIY"����"+HIC"һ��ը�ѣ�������е�"+HIR"����"+HIC"ͻȻ�ƽ��˰�ʮ������������������Ұ���������Х�������������������˺�����ǵĸ��࣬���ݵ������ſ����磬������Ϊ���ε�"+HIB"��âo o o o o o\n\n
                         "+HIW"�����"+HIC" �������ŵ���"+HIW"���ľ������ۣ�һ��
                         ����֮��"+HIM"$N"+HIW"��������Ѫ���������ڴ�\n"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               350,
                "force"      :                  500,
                "post_action" :             (: busy :),
                "damage_type":                "�����ᴩ֮��",
              ]),
//10
             ([
                "action"     :
HIG"��"+HIW"�����ŵ�"+HIW"��"+HIC"\t��ʽ����\n"
+HIW"\t\t\t��"+HIM"������"+HIW"����"+HIM"��"+HIW"������"+HIM"��"+HIW"����\n\n"
+HIR"һƬ�ƺ��޼ʵľ������·����֮�ϣ����಻�����\�磬����嫺�֮�ڣ����ϲ����Ĳ��Σ������޿ɱ���ľ޴���������$n��϶�����"NOR,
                "dodge"      :                 -50,
                "parry"      :                 -20,
                "damage"     :                 400,
                "force"      :                  500,
                "post_action" :             (: temp :),
                "damage_type":                "�����ᴩ֮��",
              ]),
//11
            ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIW"��"+HIC"\t��ʽ����\n"
+HIW"\t\t\t��"+HIB"���ա�"+HIW"����"+HIB"��"+HIW"������"+HIB"��"+HIW"����\n\n"
+HIR"$N����������Ȱ�ٿȻ��������������Ͷ��䣬������ƥ��һʱ�\���ң�����������ŭХ���������׵�Ϯ��$n��"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               450,
                "force"      :                  550,
                "post_action" :             (: temp :),
                "damage_type":                "�����ᴩ֮��",
              ]),
//12
             ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIW"��"+HIC"\t��ʽ����\n"
+HIW"\t\t\t��"+HIC"��ŭ��"+HIW"����"+HIC"��"+HIW"������"+HIC"��"+HIW"����\n\n"
+HIR"$N�����Ȼǰ�ݣ���ɳ�����У�һ��������ƥ�ĵ���Ҳŭ����������͵ľ����У�$w"+HIR"��������ƣ���˲Ϣ֮�䣬����$nȫ�����ܡ�"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  600,
                "post_action" :             (: temp :),
                "damage_type":                "�����ᴩ֮��",
              ]),
//13
             ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIW"��"+HIC"\t��ʽ����\n"
+HIW"\t\t\t��"+HIG"���ᡡ"+HIW"����"+HIG"ü"+HIW"������"+HIG"��"+HIW"����\n\n"
+HIR"$N�����������ٵ��������Ƶ�Ȫͻӿ���������������$nȫ��Ҫ����Ѩ��"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  650,
                "post_action" :             (: temp :),
                "damage_type":                "�����ᴩ֮��",
              ]),
//14
            ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIW"��"+HIC"\t��ʽ����\n"
+HIW"\t\t\t��"+HIY"���ҡ�"+HIW"����"+HIY"��"+HIW"������"+HIY"ն"+HIW"����\n\n"
+HIR"$N������Ӱ���ΰ������ϣ����֮�䣬�ּ������׵Ĺ����žŰ�ʮһ����������һ�ɳ�����ɽ�����Ͼ��������ص�ѹ��$n��"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  700,
                "post_action" :             (: temp :),
                "damage_type":                "�����ᴩ֮��",
              ]),
//15
            ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIW"��"+HIC"\t��ʽ����\n"
+HIW"\t\t\t��"+HIW"������"+HIW"����"+HIW"��"+HIW"������"+HIW"˪"+HIW"����\n\n"
+HIR"�������ɫ�ĺ����������������ݺᣬ��Ӱ��������������\����ɢ�ֺϣ���ɳ������������㺮�ǡ�"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  750,
                "post_action" :             (: temp :),
                "damage_type":                "�����ᴩ֮��",
              ]),
//16
            ([
                "action"     :
HIG"\t��"+HIW"�����ŵ�"+HIW"��"+HIC"\t��ʽ����\n"
+HIW"\t\t\t��"+CYN"������"+HIW"����"+CYN"��"+HIW"������"+CYN"ȡ"+HIW"����\n\n"
+HIR"$N����$w"+HIR"�����������أ�һ�����Ө����ɫ�≦��ٿ��ӿ������ɫ��͸���≦����˿˿�������ƿվ�������"NOR,
                "dodge"      :                 -50,
                "parry"      :               -20,
                "damage"     :               500,
                "force"      :                  800,
                "post_action" :             (: temp :),
                "damage_type":                "�����ᴩ֮��",
              ]),


              });
/*
int valid_learn(object me)
{
  return "����ѧ!!\n";
}
*/
int valid_enable(string usage)
{
        return ( usage=="blade" || usage=="parry" );
}
mapping query_action(object me, object weapon)
{
        int skill_level,mf_lv,vf_lv,i;
        object *enemy,victim,wea2;
       string skill,type2;
      weapon = me->query_temp("weapon");
      enemy=me->query_enemy();
       i=sizeof(enemy);
       victim = enemy[random(i)];
 wea2 = victim->query_temp("weapon");
  if(wea2)
   if(!(type2=wea2->query("skill_type"))) type2=weapon->query("skill_type");
       skill_level = (int)(me->query_skill("fly-blade",1));
        mf_lv = (int)(me->query_skill("force",1));
        vf_lv = (int)(victim->query_skill("force",1))/2;
if(random(mf_lv) > random(vf_lv) && me->query_temp("blade_mind") <= 550 && random(10) < 2)
me->add_temp("blade_mind",random(me->query_skill("blade")/20));
if( random(mf_lv) > random(vf_lv) && me->query_temp("blade_mind") > 500 && 3>random(8) && me->query_skill("blade") >= 100 && !me->query_temp("moon") && !me->query_temp("imblade") && !me->query_temp("noblade") && !me->query_temp("mind"))
 {
if(me->query("age") < 40 || me->query_skill("blade",1) < 140 )
 {
 message_vision(HBCYN"\n\n
$N����ʹ������Ȼ����"HIY"�� �� �� �� ��"NOR+HBCYN"֮�����������޸���֮����������ҽǣ��޼���Ѱ\n\n"NOR,me,victim);
 me->set_temp("moon",1);
 me->add_temp("blade_mind",-300);
me->set_temp("busy",1);
 me->improve_skill("blade",random(100));
 }
else if(me->query("age") < 70 || me->query_skill("blade",1) < 150 )
  {
message_vision(HBMAG"\n\n
$N��Ȼ��������ʹ��"HIY"�� �� �� �� ��"NOR+HBMAG"֮�������뵶�˺�һ��"HIB"�����ң��Ҽ���"NOR+HBMAG"��֮���ϵ���\n\n"NOR,me,victim);
 me->set_temp("imblade",1);
me->add_temp("blade_mind",-200);
me->set_temp("busy",1);
me->improve_skill("blade",random(200));
  }
else if(me->query_skill("blade",1) >= 150 && me->query("age") >= 70)
  {
  me->start_busy(2);
  victim->start_busy(3);
  message_vision(HIR HBWHT"\n\n
$N�����������֮������"HIC"�� �� �� ʤ �� �� ��"NOR+HIR+HBWHT"֮�⣬�޼���һ��������������\n\n"NOR,me,victim);
  me->set_temp("noblade",1);
  me->add_temp("blade_mind",-100);
me->set_temp("busy",1);
  me->improve_skill("blade",random(300));
  }
else
  {
 message_vision(HBGRN"\n\n
$N���޷��ﵽ"HIY"�� �� �� �� ��"NOR+HBGRN"֮���أ���Ҳ��Ҳ���Ե�"HIC"���� �� �� ����"NOR+HBGRN"֮Щ����\n\n"NOR,me,victim);
  me->set_temp("mind",1);
me->add_temp("blade_mind",-400);
  }
 }
if(me->query_temp("noblade") && me->query_skill("blade",1) > random(450) && !me->query_temp("berserk") && !me->query_temp("conti") && type2 && type2 != "unarmed")
{

     type2 = wea2->query("skill_type");
       if(!wea2) type2 = "unarmed";
       skill = victim->query_skill_mapped(type2);
       me->set_temp("berserk",1);
       me->set_temp("conti",1);
  message_vision(HIW"\n\n
$N�Ե���"HIR"�޼�"HIW"������֮���������������������пհ㣬����������һ"NOR+HBYEL"����"NOR+HIW"������������\n
\t     ʹ$n���ܵ�$N�Ƶ��ǵ���ȴ������ң����$n����ʹ����\n
\t       $N����"HIC"  �ƣ��飮�飮��  "HIW"���뵶���������������\n\n
\t            "HIY"��  �� �� �� ��  �� �� �� ��  �� \n\n"NOR,me,victim);
  weapon->set("ski_type",type2);
  me->set("actions", (: call_other, SKILL_D(skill), "query_action" :));
      for(i=0;i<=random(5)+5;i++)
                {
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                }
      me->delete_temp("berserk");
      me->delete_temp("conti");
 weapon->set("ski_type","blade");
      me->reset_action();
     message_vision(HIW"$N������"HIC" �ƣ��飮�飮��  "HIW"֮�����ع鵶��\n"NOR,me,victim);
}
if(me->query_temp("busy"))
{
   return action[random(1)+6];
}
if( me->query_temp("moon") || me->query_temp("imblade") || me->query_temp("noblade") || me->query_temp("mind"))
{
  if(me->query("bellicosity") < 2000)
  {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",10,me,victim);
    }
    return action[random(9)+1];
   }
  else if(me->query("bellicosity") < 2500)
  {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",10,me,victim);
    }
   return action[random(9)+2];
   }
  else if(me->query("bellicosity") < 3000 || me->query_temp("mind"))
    {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",50,me,victim);
    }
   return action[random(9)+3];
   }
  else if(me->query("bellicosity") < 3500 && me->query_temp("moon") || me->query_temp("imblade") || me->query_temp("noblade"))
   {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",130,me,victim);
    }
   return action[random(9)+4];
   }
  else if(me->query("bellicosity") < 5000 &&  me->query_temp("imblade") || me->query_temp("noblade"))
   {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call");
   call_out("deletemind",150,me,victim);
    }
    return action[random(9)+5];
   }
  else if(me->query("bellicosity") < 6000 && me->query_temp("noblade"))
  {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call");
    call_out("deletemind",170,me,victim);
    }
    return action[random(9)+6];
  }
  else if(me->query_temp("no_blade"))
   {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call");
    call_out("deletemind",250,me,victim);
    }
    return action[random(9)+7];  
   }
   else if(me->query_temp("mind"))
    {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",80,me,victim);
    }
   return action[random(9)+3];
   }
  else if(me->query_temp("moon"))
    {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",150,me,victim);
    }
   return action[random(9)+4];
   }
 else if(me->query_temp("imblade"))
    {
    if(!me->query_temp("have_call"))
    {
   me->set_temp("have_call",1);
   call_out("deletemind",180,me,victim);
    }
   return action[random(9)+5];
   }
}
    else if (skill_level < 10)
                return action[random(2)];
        else if (skill_level < 20 )
                return action[random(3)];
        else if (skill_level < 35 )
                return action[random(4)];
       else if (skill_level < 45 )
                return action[random(5)];
        else if (skill_level < 70 )
                return action[random(6)];
        else if (skill_level < 80 )
                return action[random(7)];
        else if (skill_level < 100 )
                return action[random(8)];
        else
                return action[random(9)];

  }

// ��������
int deletemind(object me,object victim)
{
   me->delete_temp("moon");
   me->delete_temp("imblade");
   me->delete_temp("noblade");
   me->delete_temp("have_call");
   message_vision(RED"
$N����ʹ����ȥʽ���ϣ�ֻ���յ�������ս��\n"NOR, me,victim);
   return 1;
}

// ��һ��֮post_action �˵�֮max_kee
void gold_fluid(object me, object victim, object weapon, int damage)
{
    int my_lv,vi_lv,hurt;
    weapon=me->query_temp("weapon");
    my_lv=me->query_skill("blade",1)+me->query_skill("fly-blade",1)+me->query("bellicosity")/100;
    vi_lv=victim->query_skill("dodge",1)+victim->query_skill("move",1)+victim->query("cor");
    hurt=me->query_skill("blade",1)*2+me->query_map_skill("dodge",1)*2+me->query("cor")*10+random(me->query("combat_exp")/5000)+me->query_temp("apply/damage");
    if(damage > 0 && my_lv > vi_lv )
    {
       message_vision(YEL"
$N����"+weapon->name()+""NOR+YEL"������Ļ�âһ���һ��������������$n��ȥ\n"NOR,me,victim);
      victim->receive_wound("kee",hurt);
      COMBAT_D->report_status(victim, 1);
    }
}
void light(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv,hurt,k,n;
   n=0;
   weapon=me->query_temp("weapon");
   my_lv=me->query("combat_exp")/100+me->query("bellicosity");
   vi_lv=victim->query("combat_exp")/100+victim->query("bellicosity");
   hurt=me->query("str")+me->query("combat_exp")/10000+damage/10;
   if(damage > 0 && my_lv > vi_lv )
   {
   message_vision(
""+weapon->name()+""HIY"�ó�"HIC"ʮ������â"HIY"��ʮ������������$n������\n"NOR,me,victim);
     for(k=0;k<13;k++)
     {
      if(random(my_lv*2) > random(vi_lv))
      {
      victim->receive_woud("kee",hurt);
      n++;
      }
     }
message_vision(HIW"
$n��ȫ������ʮ������â������"HIY""+to_chinese(n)+""HIY"����â"HIW"���壬˲ʱ����$n������\n"NOR,me,victim);
       victim->apply_condition("blade",n);
      COMBAT_D->report_status(victim, 1);
   }
}
void back_blade(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv;
   object wea;
   wea = me->query_temp("secondary_weapon");
   my_lv = me->query("int")+me->query("cor")+me->query_temp("apply/damage")/2;
   vi_lv = victim->query("combat_exp")/50000;
   if(wea && damage > 0 && random(my_lv) > random(vi_lv))
   {
message_vision(HIB"
һ����â��$N��в��ܳ���$N����"+wea->name()+""NOR+HIB"����˲Ϣ֮���Ѽ�����$n���¸�֮�С�\n"NOR,me,victim);
   victim->receive_wound("kee",my_lv+me->query_temp("blade_mind"));
   COMBAT_D->report_status(victim, 1);
   }
}
void blood(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv,times;
   my_lv = me->query("max_force")/50+me->query_skill("blade",1)*2+me->query("bellicosity")/10+me->query_skill("force",1)/2;
   vi_lv = victim->query("max_force")/10+victim->query("spi")*10;
   times = me->query_skill("blade",1)/((int)random(victim->query_skill("force")/50)+1);
   if(times > 10 ) times = 10;
  if(victim)
   if( damage > 0 && random(my_lv) > random(vi_lv) && !victim->query_temp("at_blood"))
   {
     victim->add_temp("at_blood",times);
     message_vision(HBRED"
$N���ǧ�㵶â��һ����һ������$nӿȥ�����еĵ���ֱ����$n���ڣ�ֱ����$n����\n"NOR,me,victim);
    victim->receive_wound("kee",my_lv/10);
     call_out("at_blood",2,me,victim,my_lv/4);
   COMBAT_D->report_status(victim, 1);
   }
}
int at_blood(object me,object victim, int hurt)
{
//��̨ ���� ���� ���� ���� ���� ���� ���� ���� ����
   int n;
   string type;
   n = victim->query_temp("at_blood");
   hurt = hurt - victim->query("max_force")/20;
    if (hurt <= 0) 
    {
     victim->delete_temp("at_blood");
      message_vision(RED"����ĵ�������$n�����ֵ�����������\n"NOR,me,victim);
       return 1;
    }
   if(victim->query_temp("at_blood"))
    {
     switch(n)
     {
      case 10:
      type = "����Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
     case 9:
     type = "����\Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 8:
      type = "����Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 7:
      type = "����Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 6:
      type = "����Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
     case 5:
      type = "����Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
     case 4:
      type = "����Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
     case 3:
      type = "����Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
       call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 2:
      type = "��̨Ѩ";
      message_vision(HBRED"
$n��ʹ�����ֿ�$N�ĵ������������õ������"HIB""+type+""NOR+HBRED"ֱ�����Ŵ�Ѩ��ȥ\n"NOR,me,victim);
     victim->receive_wound("kee",hurt);
     victim->add("force",-1*hurt);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     call_out("at_blood",4,me,victim,hurt);
     break;
     break;
      case 1:
      type = "����Ѩ";
      message_vision(HBRED"
һ���ۻ����ҵĵ���ֱ����$n��ʹ$n����һ�������Ͼ�\n"NOR,me,victim);
     victim->add_temp("at_blood",-1);
     COMBAT_D->report_status(victim, 1);
     victim->unconcious();
     break;
     break;
     }
    }
  return 1;
}
void dust(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv,m,d;
   weapon = me->query_temp("weapon");
   m=weapon->query("weight")/20;
   d=me->query_temp("apply/damage");
   my_lv = me->query("cps")*2 + me->query("cor")*2 + me->query("combat_exp")/10000;
   vi_lv = victim->query("combat_exp")/10000;
   if(damage > 0 && random(my_lv) > random(vi_lv) )
   {
     message_vision(HBYEL"
$N�ܴ��е���������"+weapon->name()+""NOR+HBYEL"�д���һ�ɳ��ص���Ϣ������ʹ�������"NOR+HBCYN" �����ϡ�ȡ "NOR+HBYEL"֮���ϵ���\n"NOR,me,victim);
    victim->receive_wound("kee",m+d+me->query_temp("blade_mind")/2);
    victim->apply_condition("blade",10);
     COMBAT_D->report_status(victim, 1);
   }
}
void star(object me, object victim, object weapon, int damage)
{
   int my_lv,vi_lv,force;
   my_lv = me->query("combat_exp")/10000;
   vi_lv = me->query("combat_exp")/30000;
   force = me->query_temp("blade_mind")/100+1;
   if(damage > 0 && random(my_lv) > random(vi_lv))
   {
     message_vision(HBGRN"\n
     ��   ��    ��    ��    ׷    ��    ��    ��    ��    ��    ��    ��    ��\n"NOR,me,victim);
    victim->receive_wound("kee",my_lv*force);
     COMBAT_D->report_status(victim, 1);
   }
}
void seven(object me,object victim,object weapon,int damage)
{
        int time,bell,i;
    bell = (int)me->query("bellicosity")/1000;
time = (int)me->query("max_force")/1000 + bell;
// �� time ������ �Է�ֹ���������� ���Ը���8 ��ppl������
if(time > 8) time = 8+random(3);
        me->delete_temp("busy");
    if( me->query("force_factor") >= 10 && damage > 0)
    {
        if( me->query_temp("berserk") == 0 && me->query("force") > 300)
        {
        me->set_temp("berserk",1);
message_vision(
HBBLU"$N����������һɲ�ǻó���ǧ�ٱ����Բ�ͬ�ķ��򣬲�ͬ�ĽǶȣ������$n����Ӱ��\n"NOR , me, victim);
    for(i=0;i<=time;i++)
                {
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                }
            me->delete_temp("berserk");
         }
    }
}
void water(object me, object victim, object  weapon, int damage)
{
int j;
int bellpower = me->query("bellicosity")/40; //  ��ɱ����Ӱ��������
if(bellpower > 100 ) bellpower = 100;
if( damage > 0 && me->query("force") > 500 && me->query("bellicosity") > 500)
 {
message_vision(
HIY"$Nٿ���ӣ���������ӳ����âǧ���ɢ���䣬������һ��ɡ�εĽ���\n"NOR , me);
  for(j=1;j<=3;j++)
  {
message_vision(
HIC"��â������һ������Բ�Ĺ⻡������ǿ�������٣�����$n�����������������\n"NOR , me, victim);
victim->receive_wound("kee",bellpower+me->query_temp("blade_mind"));
COMBAT_D->report_status(victim);
    }
  }
}
void busy(object me,object victim,object weapon,int damage)
{
//����Ϊ�� skills ֻ��һ������ ��˲��ټ� random(2) == 0 ���ж�
 if( damage > 0 && !me->is_busy())
   message_vision(
MAG"$n ��$N �ĵ�������������"+HIG"��"+HIW"�����ŵ�"+HIW"��"+MAG"֮���ϵ���"+CYN"������ǡ�\n"NOR,me,victim);
 me->set_temp("busy",1);
 victim->start_busy(random(3)+1);
COMBAT_D->report_status(victim);

}
// ������д post_action 
void temp(object me, object victim ,object weapon, int damage)
{
   int k;
             me->add("force",-200);
    weapon = me->query_temp("weapon");
    if(me->query("force") > 500 && damage > 0 && me->query_temp("blade_mind"))
{
        if(damage <= 200 )
        {
        message_vision(
        HIY"$N��ɱ�����"HIB"��ʽ����"HIY"���ϴ߹��ھ�����������ɽ������â͸������ӯ�����ɡ�\n" NOR,me);
victim->receive_wound("kee",me->query_temp("blade_mind")*((int)me->query("bellicosity")/3000+1));
       }
   else if( damage <= 300 )
    {
   message_vision(
HIC"$N��������������⣬���"HIB"��ʽ����"HIC"ֻ��������ʱ����ͨ�죬����һ��"HIR"����"HIC"������ʡ�\n"NOR,me);
    victim->receive_wound("kee",me->query_temp("blade_mind")*(me->query("max_force")/2000+1));
       me->add("force",-100);
       me->improve_skill("blade",random(10)+1);
    }
     else if(damage <= 400  && me->query("sen") > 50 && me->query("gin") > 50 && me->query("kee") > 200 && !me->query_temp("berserk"))
   {
     me->set_temp("berserk",1);
   message_vision(
HIW"$N��ȫ��"HIG"��"HIW"��"HIC"��"HIW"��"HIY"��"HIW"Ͷ��"HIB"��ʽ����"HIW"֮���ϵ���"HIW"����"HIR"��ħ����"HIW"���������$n��ȥ\n"NOR,me,victim);
       me->add("sen",-5);
       me->add("gin",-5);
       me->add("kee",-10);
    for(k=0;k<3+random(4);k++)
    {
    message_vision(
HIM"\n$N��"+weapon->name()+""HIM"б���ڵأ��͵�˳�ƻ���һ����а���ɵ���ð��\n"NOR,me);
  COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
    }
    me->delete_temp("berserk");
   }
  else if(damage > 400 && random(10) > 3 && me->query_temp("noblade"))
   {
    message_vision(
HIM"$N�ս�"HIW"��ʽ����"HIM"�ڻ��ͨ����ʽ��һ��ʹ��\n
"MAG"��������"HIB"��"HIR"�ߡ��⡣ն��Ԫ    �ɡ������ơ���"HIB"��"MAG"��������\n
"HIY"����"+weapon->name()+""HIY"һ�ף�����ͦ��ת�壬���滮��һ�������Ļ���\n"NOR,me,victim);
     victim->start_busy(random(2)+1);
victim->receive_wound("kee",me->query_temp("blade_mind")*(me->query_skill("blade",1)/30));
victim->receive_wound("gin",(int)victim->query("max_gin")/15);
victim->receive_wound("sen",(int)victim->query("max_sen")/15);
     }
   else
    {
        message_vision(
        HIY"$N��ɱ�����"HIB"��ʽ����"HIY"���ϴ߹��ھ�����������ɽ������â͸������ӯ�����ɡ�\n" NOR,me);
victim->receive_wound("kee",me->query_temp("blade_mind")*(me->query("bellicosity")/2000+1));

     }
   }
COMBAT_D->report_status(victim);
if(me->query_skill("fly-blade",1) <= 150 )
  {
      me->improve_skill("blade",random(5)+1);
  }
  else me->improve_skill("blade",random(2)+1);
}
int remove_effect(object me,object victim)
{            me->set("force_factor",10);
    message_vision(HIW"$N����ʹ����ȥʽ���ϣ�ֻ���յ�������ս��\n"NOR, me);
    return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("ghost")+"/fly-blade/"+action;
}
