#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun,fun1,fun2,funn;
int fk,tk,k,i,j=0,l=0,r;
int conjure (object me, object target)
{
object *enemy;
enemy=me->query_enemy();
i=sizeof(enemy);
fun=(me->query("spells/hellfire/level")/25)+1;
fun1=me->query("spells/hellfire/level");
fun2=(int)(me->query_skill("dremagic", 1));
funn=(fun1*7/10)+(fun2*3/10);
if(me->query("class")!="dancer")
return notify_fail("�ⷨ��ֻ����������!!\n");
if(me->query("allow_hellfire")!=1)
  return notify_fail("͵ѧ�Ĳ���ʹ���\n");    
if( !target ) target = offensive_target(me); 
if(!target) return notify_fail("�Ҳ�������!!\n");
if(!me->is_fighting(target) )
return notify_fail("�ⷨ��ֻ�ܶ�ս���еĶ���ʹ��!!\n");
if(me->query("max_atman") < 2500 )
return notify_fail("���������������!!\n");
if(me->query("atman") < 2500 )
return notify_fail("�����������!!\n");
if(me->query_temp("hellfire")==1)
return notify_fail("��ʩչħ������˼��δ����!!\n");
message_vision(HIY"
   $N��Ŀ����,���ص���,ʹ��"HIG"ҹ��"HIM"�ε�"HIY"֮��߾���
                   "HIB"����"HIC"��"HIR"��"HIY"��
        "HIG"�� "HIW"��"HIY"��"HIC"��"HIY"��"HIG"��"HIY"��"HIR"��"HIY"��"HIB"��"HIY"��"HIB"��"HIY"��"HIB"��"HIY"��"HIB"�� "HIG"��"HIW"
\nɲ�Ǽ������޹�,������,һ����۵�ǿ����$n������ȥ\n
"NOR, me);
me->add("atman",-(500*fun));
me->set_temp("hellfire",1);
me->start_busy(1);
call_out("act1",10,me);
for ( l=0 ; l < fun ; l ++)
{
r=random(100);
if (r >= 60) 
{
message_vision(HIR"
      "HIB"����"HIR"�ػ�"HIW"�û���һ��"HIR"ԡѪ"HIM"���"HIW"ֱ��$N������
        $Nȫ��ð��"RED"���ۻ���"HIW","HIR"ԡѪ"HIM"���"HIW"���Զ���\n
"NOR,target);
for ( j=0 ; j < i ; j++ )
{
if(!enemy[j]) continue;
k=funn*7;
if (enemy[j]->query_temp("def_fire")==1) k=funn*2;
enemy[j]->receive_wound("kee",k);
enemy[j]->apply_condition("hellfire",random(20));
COMBAT_D->report_status(enemy[j]);
}
}
else if (r>=20)

{
message_vision(HIY"
      "HIC"��������"HIW"�û���һ��"HIY"�ƽ����"HIW"ֱ��$N���Բ�
        $N�����۶�����"HIC"��������"HIW"�����Ŀ����\n
"NOR,target);
for ( j=0 ; j < i ; j++ )
{
if(!enemy[j]) continue;
k=funn*2;
enemy[j]->receive_wound("kee",k);
enemy[j]->apply_condition("hellthunder",random(10));
enemy[j]->start_busy(1);
COMBAT_D->report_status(enemy[j]);
}
}
else 
{
message_vision(HIG"      $N�Լ�����ٶ������˹���\n"NOR,target);
for ( j=0 ; j < i ; j++ )
{
if(!enemy[j]) continue;
COMBAT_D->report_status(enemy[j]);
}
}
}
return 1;
}
int act1(object me)
{
if(!me) return 1;
me->delete_temp("hellfire");
tell_object(me,HIG"�㾫��һ��, �·����׵ػ��ٶȻ���������!!\n"NOR);
if(me->query("spells/hellfire/level")<100) spell_improved("hellfire",random(100));
return 1;
}
