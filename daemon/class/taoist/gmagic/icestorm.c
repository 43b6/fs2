//icestorm
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
fun=(me->query("spells/icestorm/level")/25)+1;
fun1=me->query("spells/icestorm/level");
fun2=(int)(me->query_skill("gmagic", 1));
funn=(fun1*7/10)+(fun2*3/10);
if(me->query("class")!="taoist")
return notify_fail("�ⷨ��ֻ����ʿ����!!\n");
if(me->query("get_icestorm")==1)
  return notify_fail("����ʩչ���У���ȴ�Ǵ���������������ȱ����ʲôһ��...\n");
if(me->query("allow_icestorm")!=1)
  return notify_fail("͵ѧ�Ĳ���ʹ���\n");    
if( !target ) target = offensive_target(me); 
if(!me->is_fighting(target) )
return notify_fail("�ⷨ��ֻ�ܶ�ս���еĶ���ʹ��!!\n");
if(me->query("max_mana") < 2500 )
return notify_fail("��ķ�����������!!\n");
if(me->query("mana") < 2500 )
return notify_fail("��ķ�������!!\n");
if(me->query_temp("icestorm")==1)
return notify_fail("��ʩչ��������˼��δ����!!\n");
message_vision(HIY"
$N�����ź�������ؼ�İ������Ȼ���������Ƿ����������ܿ���ġ�

"HIC"�� ��  "HIG"��"HIC"   ��  �� ��   "HIB"��"HIC"  ��  "HIM"��  ��"HIC"   ��   ��  "HIG"��  ��"HIC"  ��   ��
"HIC"��   ��  ��  "HIB"��"HIC"  ��  ��  ��  ��   ��  "HIB"��"HIC"   ��  ��    ��    ��  ��
"HIC"�� "HIG"��  ��"HIC" ��  "HBRED+HIY"  ��  �B  ѩ  �B  ��  �B  ��  "NOR+HIC"  �"HIG"��"HIC" ��  ��    ��
"HIC"�� ��  ��  ��  ��"HIB"��"HIC"  �� ����  �� ��  ��  ��  "HIM"�� ��"HIC"   �� ��   ��
"HIC"�� "HIB"��"HIC"  ��   "HIM"��  ��"HIC" ��   "HIG"��  ��"HIC"  ��  ��   "HIB"��"HIC"   ��  ��  �� "HIM"�� ��"HIC" ��

"HIG"��ʱ��ط·𺶶�������������Ŀ������ѩ�����ķ�ס$n��
"HIG"$N�ô�ʱ�������Ϻ���֮��߾��� "HIY"�� "HIC"��"HIY"��"HIW"ѩ"HIY"��"HIR"��"HIY"��"HIG"�� "HIY"��\n
"NOR, me,target);
me->add("mana",-(500*fun));
me->set_temp("icestorm",1);
me->start_busy(1);
call_out("act1",10,me);
for ( l=0 ; l < fun ; l ++)
{
r=random(100);
if (r >= 60) 
{
message_vision(HIM"
$Nʹ��"HIY"��"HIC"��"HIW"ѩ"HIR"��"HIB"��"HIY"��"HIM"֮"HIR"��"HIW"����ǧ��"HIR"��"HIM"�����ܵĿ���˲������ɱ���
"HIM"��ͬ���а�ѹ����ʹ$n�޷�����������ȱ��������ľ����
"HIR"��������Ȼʹ��"HIY"��"HIW"��˪��ѩ"HIY"��"HIR"���ô���Ȼ���ص���������ʹ�콵˪ѩ��
"HIR"�㸲��\��$n������������м�������ص�ǿ�ҹ�����

"HIG"��Ȼ�����ܾ���һ��ǿ�罫$n������У�$N��Ц�����ȵ�:
"HIR"̫��������"HIG"�����ҽ���"HIW"��"HIC"��"HIW"��"HIB"��"HIW"��"HIM"��"HIW"��"HIY"ӿ"HIW"��"HIG"��Ȼ������ֻ����շ���
"HIG"������ͣ��$N������������"HIM"��ļ�������"HIG"��"HIC"�Ƶı仯����"HIG"ǣ��
"HIG"�����߾��磬���ֱ���������������м��۶�������$n��\n
"NOR,me,target);
for ( j=0 ; j < i ; j++ )
{
k=funn*7;
//if (enemy[j]->query_temp("def_fire")==1) k=funn*2;
enemy[j]->receive_damage("kee",k);
//enemy[j]->apply_condition("icewind",random(20));
COMBAT_D->report_status(enemy[j]);
}
}
else if (r>=20)

{
message_vision(HIY"
      "HIC"�ܵ������$N�������˪ѩ����\�������ű�ǿ�ҵ�쫷�������
        �ɸ߿����¼���׹�䣬����һ����ˤ��Ѫ��ģ��������Ŀ��\n
"NOR,target);
for ( j=0 ; j < i ; j++ )
{
k=funn*2;
enemy[j]->receive_wound("kee",k);
enemy[j]->apply_condition("ice",random(10));
enemy[j]->start_busy(1);
COMBAT_D->report_status(enemy[j]);
}
}
else 
{
message_vision(HIG"      $N���˵Ķ���˱��籩�Ĺ���\n"NOR,target);
for ( j=0 ; j < i ; j++ )
{
COMBAT_D->report_status(enemy[j]);
}
}
}
return 1;
}
int act1(object me)
{
me->delete_temp("icestorm");
tell_object(me,HIG"˪ѩ�����ػָ���ԭò!\n"NOR);
if(me->query("spells/icestorm/level")<100) spell_improved("icestorm",random(100));
return 1;
}
