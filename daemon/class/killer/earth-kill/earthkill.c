#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target,object *enemy)
{
int fun,damage;
string msg;
string *name;
if( !target ) target = offensive_target(me);
if(me->query("class") != "killer")
return notify_fail("���ְҵ�޷�ʹ�á�\n");
if((me->query_skill("earth-kill",1) < 40))
return notify_fail("��ĵ�ն��Ϊ���㣬�޷�ʹ���˰��塣\n");
if((string)me->query_skill_mapped("dagger")!= "earth-kill")
return notify_fail("��B�������������ʹ�á���ն��!!\n");
if( me->query("family/family_name") != "������" )
return notify_fail("��B����������ֻ�������ɵ����˲ſ���ʹ�á�\n");
if(me->query("force")<300)
return notify_fail("�������������\n");
if(me->query("bellicosity")<50)
return notify_fail("���ɱ��������\n");
if(!me->is_fighting(target))
return notify_fail("��B����������ֻ����ս���в���ʹ�á�\n");
fun=me->query("functions/earthkill/level");
damage=me->query("functions/manakee/level")+fun+me->query_skill("earth-kill",1);
message_vision(GRN"�� �B �� �� �� �� ��"HIW" ����"HIY"��"YEL" ��    ն "HIY"��\n\n"NOR,me);
if( 20 < random(100) )
{
message_vision(MAG"\n$n��$N�ĵ�һ�а���"RED"�һ��"MAG"����, ��ɼ�Ϊ���ص�����!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("burn",10);
me->add("force",-30);
me->add("bellicosity",-10);
COMBAT_D->report_status(target, 1);
if (fun > 20)
{
message_vision(MAG"\n$n��$N�ĵڶ��а���"HIB"������"MAG"����, ��ɼ�Ϊ���صĶ���!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("cold",10);
me->add("force",-30);
me->add("bellicosity",-10);
COMBAT_D->report_status(target, 1);
}
if (fun > 40)
{
message_vision(MAG"\n$n��$N�ĵ����а���"HIY"��  ��"MAG"����, ��ɼ�Ϊ���صĶ���!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("snake_poison",10);
me->add("force",-30);
me->add("bellicosity",-10);
COMBAT_D->report_status(target, 1);
}
if (fun > 60)
{
message_vision(MAG"\n$n��$N�ĵ����а���"HIW"��  �"MAG"����, ��ɼ�Ϊ���ص�����!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("hart",10);
me->add("force",-300);
me->add("bellicosity",-50);
COMBAT_D->report_status(target, 1);
}
if (fun > 80)
{
message_vision(MAG"\n$n��$N�ĵ����а���"HIR"Ѫ  ��"MAG"����, ��ɼ�Ϊ���ص�����!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("bleeding",10);
me->add("force",-300);
me->add("bellicosity",-50);
COMBAT_D->report_status(target, 1);
}
if (fun > 99)
{
message_vision(MAG"\n$n��$N������֮����"HIC"��  ��"MAG"����, ��ɼ�Ϊ���ص�����!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->start_busy(1);
me->add("force",-30);
me->add("bellicosity",-10);
COMBAT_D->report_status(target, 1);
} 
}
else
{
message_vision(HIC"\n$N��ǧ��һ��֮�ʣ������ն�������������!!\n"NOR,target);
}
message_vision(HIW"\n$Nʹ����ն����������������ھ���Ĺ���, ����һ�Դ�Ϣ��\n"NOR,me);
me->start_busy(1);
if(me->query("functions/earthkill/level") < 100)
{
function_improved("earthkill",random(50));
}
message_vision( NOR,me);
return 1;
}

