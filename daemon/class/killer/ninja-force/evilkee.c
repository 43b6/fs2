#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target,object *enemy)
{
int fun,damage;
string msg;
string *name;
if( !target ) target = offensive_target(me);
if((me->query_skill("darkforce",1) < 100))
return notify_fail("�����B��������Ϊ���㣬�޷�ʹ���˰��塣\n");
if((string)me->query_skill_mapped("force")!= "darkforce")
return notify_fail("��Bħ��ɱ����ʹ�á���B�����񹦡�!!\n");
if( me->query("family/family_name") != "������" )
return notify_fail("��Bħ��ɱֻ�������ɵ����˲ſ���ʹ�á�\n");
if(me->query("force") < 300)
return notify_fail("�������������\n");
if(me->query("bellicosity") < 50 ) 
return notify_fail("���ɱ��������\n");
if(!me->is_fighting())
return notify_fail("��Bħ��ɱֻ����ս���в���ʹ�á�\n");
if(target->query_busy() > 0)
return notify_fail("�������������á�\n");
fun=me->query("functions/evilkee/level");
damage=me->query("functions/manakee/level")*4+fun*6;
message_vision(CYN"
                   $N˲��ɱ�����,��ɱ�⻻��ħ����
                     "MAG"$N���Ϸ���һ��ǿ���ħ������
           "HIW"��"HIB"$N����ħ���𽥵����Ĵ�ɢ��, ���ܹ��߶�ʱ��ʧ"HIW"��
                           "HIY"�������ذ���
                       "HIC"����"HIW"��"GRN"��Bħ��ɱ"HIW"��"HIC"����
\n"NOR,me);
if( 20 < random(100) )
{
if(fun >= 0 && fun < 20 )
{
message_vision(HIG"$N�ܵ�ħ���˺�ȫ���޷��������ܵ���΢����!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(1);
target->apply_condition("cold",5);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun >= 20 && fun < 40 )
{
message_vision(HIG"$N�ܵ�ħ���˺�ȫ���޷��������ܵ���΢����!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(2);
target->apply_condition("burn",5);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun >= 40 && fun < 60)
{
message_vision(HIG"$N�ܵ�ħ���˺�ȫ���޷��������ܵ���������!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(2);
target->apply_condition("hart",10);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun >= 60 && fun < 80)
{
message_vision(HIG"$N�ܵ�ħ���˺�ȫ���޷��������ܵ�ħ������!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(3);
target->apply_condition("mkill_out",10);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun >= 80 && fun < 100)
{
message_vision(HIG"$N�ܵ�ħ���˺�ȫ���޷�����������Ѫʧ��!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(3);
target->apply_condition("ff_poison",10);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun == 100)
{
message_vision(HIG"$N�ܵ�ħ���˺�ȫ���޷�����������Ѫʧ��, ʧȥ����!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(3);
target->apply_condition("mess",2);
target->apply_condition("ff_poison",10);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}}
else
{
message_vision(HIC"$N�ľ�����, ʶ���������ħ�������µĻþ�!!\n"NOR,target);
}
if(me->query("functions/evilkee/level") < 100)
{
function_improved("evilkee",random(100));
}
message_vision( NOR,me);
return 1;
}

