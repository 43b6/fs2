// made by leei
// By Swy ������� QC 98/6/23
//Swy test �ݶ����� 99/3/29
#include <command.h>
#include <ansi.h>
#include <combat.h>
#include <skill.h>
inherit F_FUNCTION;
inherit SSERVER;
void damage_msg(int damage,object me, object target); 
int perform(object me, object target)
{
       string msg;
       int ski_value, max_lv, a, i, damage, fun;
       ski_value= random(me->query_skill("rain-throwing",1));
       max_lv=me->query_skill("rain-throwing",1);
        fun=me->query("functions/manakee/level");

   if( !target ) target = offensive_target(me);

   if(me->query("quest/rain") != 1)
        return notify_fail("�㻹������һ��,������ħ����󷨰�\n");
  // Ϊ��ʹ���ٲ����� ���Լ��� by swy
  if(me->query("family/family_name")!="������")
  return notify_fail("�㲻��ɱ�֣����Բ�����ħ��ɱ��\n");

   if( me->query_skill_mapped("throwing")!="rain-throwing" )
         return notify_fail("��û��װ������ꡣ \n");
   if( me->query_skill("rain-throwing",1) < 20)
         return notify_fail("�������꼼�ɲ��㡣 \n");
   if( me->query_skill("throwing",1)< 20)
         return notify_fail("��İ����������졣 \n");
   if(me->query("bellicosity")< 30)
         return notify_fail("���ɱ�ⲻ����\n");

   if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("��ħ��ɱ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");

  if( target->is_busy() )
 return notify_fail(""BOLD"���ɱ�������ŵ���,һʱ�޷�������ǿ��ɱ��!"NOR"\n");
   damage=target->query("max_kee")*4*ski_value/1000;
  if (damage > 1000) damage=1000;
    me->add("bellicosity",-(ski_value/5));

       message_vision(""HIR"$N�Բм���,��ɱ�⻻��ħ����"NOR"\n
            "GRN"����$N���Ϸ���һ��ǿ���ħ������"NOR"\n
    "HIG"��$N����ħ���𽥵ؾۼ���˫��,��˫�����γ�����ɱ����"NOR"\n
            $Nٿ�ش��һ������"HIC"��ħ��ɱ��"NOR"����\n\n",me,target);

     if( ski_value == random(max_lv) ){
      message_vision(""RED"$NͻȻ��ͷһ��������"MAG"ֻ��$N�������һ��Ѫ����"+target->query("name")+"��ȥ����"NOR"\n
"HIB"$Nʹ����ħ��ɱ֮"NOR"
              "BLU"�ռ�����ɱ����"NOR" ��"HIY"ħѪ��ɱ"NOR"��\n
"HBGRN""+target->query("name")+"������,��$NҲ֧�ֲ�ס�ˡ�"NOR"\n",me,target);
     target->die();
     //me->unconcious();
     me->set("sen",1);
     me->set("kee",1);  
     me->set("gin",1);  
     return 1;
                        }
       
    else if( ski_value < 10 ){
      msg =""HIY"$N��ɱ��ת��ħ��ʧ�ܡ�\n\n";
      me->receive_damage("kee",me->query("kee")*1/100);
                        }
 
    else if( ski_value <  20 ){
     msg = "��һ�� ��"HIY"ħ���޳�"NOR"����\n\n";
     target->start_busy(random(fun/75)+1 );
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*2/100);
                       }
    
    else if( ski_value <  30 ){
     msg = "�ڶ��� ��"HIY"��ħɷ��"NOR"����\n\n";
     target->start_busy(random(fun/70)+1 );
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*3/100);
                       }

     else  if( ski_value < 40 ){
     msg = "������ ��"HIY"�̻�ħ��"NOR"����\n\n";
     target->start_busy(random(fun/65)+1 );
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*4/100);
                       }

     else if( ski_value <  50 ){
     msg = "���Ĳ� ��"HIY"��ħ����"NOR"����\n\n";
     target->start_busy(random(fun/60) +1);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*5/100);
                       }

     else if( ski_value <  60 ){
     msg = "����� ��"HIY"��ħ�ƿ�"NOR"����\n\n";
     target->start_busy(random(fun/55) +1);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*6/100);
                       }

     else if( ski_value <  70 ){
     msg = "������ ��"HIY"Ⱥħ����"NOR"����\n\n";
     target->start_busy(random(fun/50) +1);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*7/100);
                       }

     else if( ski_value <  80 ){
     msg = "���߲� ��"HIY"�켫ħɱ"NOR"����\n\n";
     target->start_busy(random(fun/60) +2);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*8/100);
                       }

     else if( ski_value <  90 ){
     msg = "�ڰ˲� ��"HIY"��ħ������"NOR"����\n\n";
     target->start_busy(random(fun/50) +2);
     target->receive_damage("kee", damage);
    me->receive_damage("kee",me->query("kee")*9/100);
                       }

     else   {
     msg = "�ھŲ� ��"HIY"��ħ��תҵ"NOR"����\n\n";
     target->start_busy(random(fun/40) +2);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*10/100);
                      }

 if( ski_value>20 && (int)me->query("force")>100 && 50 < random(max_lv) ) {
 msg +=""HIC"$N�ԡ�"HIR"ħ��ɱ"NOR""HIC"�����ж���,�������ϵ���������:"NOR"\n";
  i=(ski_value/10);
  if(i>9) { i=9; }
  for(i=2;i<=ski_value/10;i++)
  {
    switch(i)
    {
     case 2:
     msg +="��һ�� ��"HIY"ħ���޳�"NOR"����\n";
     break;
     case 3:
     msg +="�ڶ��� ��"HIY"��ħɷ��"NOR"����\n";
     break;
     case 4:
     msg +="������ ��"HIY"�̻�ħ��"NOR"����\n";
     break;
     case 5:
     msg +="���Ĳ� ��"HIY"��ħ����"NOR"����\n";
     break;
     case 6:
     msg +="����� ��"HIY"��ħ�ƿ�"NOR"����\n";
     break; 
     case 7:
     msg +="������ ��"HIY"Ⱥħ����"NOR"����\n";
     break;
     case 8:
     msg +="���߲� ��"HIY"�켫ħɱ"NOR"����\n";
     break;
     case 9:
     msg +="�ڰ˲� ��"HIY"��ħ������"NOR"����\n";
     break;
    }
     if( ((int)target->query_skill("move",1)
     + random((int)target->query_skill("dodge",1))*5 )
     <  ski_value + random((int)me->query_skill("dodge",1)*i
     + (int)target->query_skill("move",1)) )
     {
          target->receive_damage("kee",(fun*i/5));
          msg +="$n���㲻��,��������ˡ�\n";
          //msg +="$n���㲻��,���������--"+fun*i/5+"��\n";
          me->add("force",-10);
     }
     else
     {
          msg +="$N�Ĺ�����$n���˿�����\n";
  }
 }
}
    else {
     if( ski_value < 10 ){
      msg +=""CYN"$N�Ĺ����Ե��˺���Ӱ�졣"NOR"\n";
      }
   else if( damage < 25 ) msg+=""RED"�����$n��ǿ���һ����΢����"NOR"\n";
      else if( damage < 50 ) msg +=""YEL"�����$n���һ������"NOR"\n";
      else if( damage < 100 ) msg +=""MAG"�����$n�����Ϊ���صĴ���"NOR"\n";
      else if( damage < 200 ) msg +=""CYN"�����$n����൱���صĴ���"NOR"\n";
      else if( damage < 350 ) msg +=""BOLD"�����$n���ʮ�����صĴ���"NOR"\n";
      else if( damage < 500 ) msg +=""HIR"�����$n��ɼ������صĴ���"NOR"\n";
      else msg +=""HIC"�����$n��ɷǳ����µ����ش���"NOR"\n";
         }

if ((fun >=100) &&  (fun <150))
{//�������ְ�н⵽Ҷ�³�����ſ���������150
        if (this_player()->query("upkee")  == 1)
function_improved ("manakee", random(me->query_skill("rain-throwing",1))*7);
}

if ((fun >=50) &&  (fun <100))
{//����ڶ���ְ�ſ���������100
        if (this_player()->query("quest/memory")  == 1)
function_improved ("manakee", random(me->query_skill("rain-throwing",1))*5);
}
if (fun < 50)
{//�����һ��ְ�����ʸ���ħ��ɱ
function_improved ("manakee", random(me->query_skill("rain-throwing",1))*3);
                    }

     message_vision(msg, me, target);
        return 1;
}
