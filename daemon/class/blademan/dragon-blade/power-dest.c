#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
object ob;
int fun,k,b;
fun=me->query("functions/power-dest/level");
k=random(100)+1;
b=me->query_skill("blade")*6;
if(me->query("family/family_name")!="ħ����" &&
me->query("family/family_name")!="ħ��Ī��")
return notify_fail("�㲻�Ǳ��ɲ����á�\n");
if( !target ) target = offensive_target(me);
if(me->query_skill("dragon-blade",1)<90)
       return notify_fail("��Ŀ��������������������ܾ����ڵ���\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="blade")
       return notify_fail("ֻ����װ�����£�����ʹ��ม�\n");
       if(me->query("force")<100)
       return notify_fail("�������������\n");
       if(me->query("kee")<20)
       return notify_fail("�����������\n");
       if( !target
       ||      !target->is_character()
       ||      !me->is_fighting(target) )
       return notify_fail("������ŭն��ֻ����ս����ʹ�á�\n");
if(k==100||me->query("id")=="swy"||(target->query("id")=="degu sa"&&random(10)==5)) {
message_vision(HIW
"$NͻȻ������ʽ��һ���ѡ�����ŭն�����е���߾��硣\n\n"NOR,me,target);
message_vision(HIW
"$N�۾�����������������İ��塮"HIR"����ŭն����"HIW"��
$N�����ۿ����ͷţ�˲ʱһ���������豼��$n��\n\n"NOR,me,target);
message_vision(HIW
"$N�۾�����������������İ��塮"HIG"����ŭն����"HIW"��
$N�����������ͷţ�˲ʱ�������ƿշ�ն��$n��\n\n"NOR,me,target);
message_vision(HIW
"$N�۾�����������������İ��塮"HIY"����ŭն��ŭ"HIW"��
$N������ŭ���ͷţ�˲ʱŭ�����Թ������$n��\n\n"NOR,me,target);
message_vision(HIW
"$N�۾�����������������İ��塮"HIB"����ŭն��ն"HIW"��
$N�����ۼ����ͷţ�˲ʱ�����γɵ�������$n��\n\n"NOR,me,target);
message_vision(HIW
"$N�۾��������������������߰��塮"HIC"������ŭ��ն"HIW"��
$N��������ͬʱ�ͷţ�˲ʱһ��ǿ�Ƶĵ�������ն$n��\n"NOR,me,target);
// ���� 1% ����Ϊ�屶�˺� by swy
b=b*5;
} else if(k<=20) {
message_vision(HIW
"$N�۾�����������������İ��塮"HIR"����ŭն����"HIW"��\n
$N�����ۿ����ͷţ�˲ʱһ���������豼��$n��\n"NOR,me,target);
} else if(k<=40&&k>=21) {
message_vision(HIW
"$N�۾�����������������İ��塮"HIG"����ŭն����"HIW"��\n
$N�����������ͷţ�˲ʱ�������ƿշ�ն��$n��\n"NOR,me,target);
} else if(k<=60&&k>=41) {
message_vision(HIW
"$N�۾�����������������İ��塮"HIY"����ŭն��ŭ"HIW"��\n
$N������ŭ���ͷţ�˲ʱŭ�����Թ������$n��\n"NOR,me,target);
} else if(k<=80&&k>=61) {
message_vision(HIW
"$N�۾�����������������İ��塮"HIB"����ŭն��ն"HIW"��\n
$N�����ۼ����ͷţ�˲ʱ�����γɵ�������$n��\n"NOR,me,target);
} else {
message_vision(HIW
"$N�۾��������������������߰��塮"HIC"������ŭ��ն"HIW"��\n
$N��������ͬʱ�ͷţ�˲ʱһ��ǿ�Ƶĵ�������ն$n��\n"NOR,me,target);
}
          me->add("kee",-50);
          me->add("force",-100);
if(80>random(100))
  {
message_vision(HIW
"\n"+target->name()+"��ܲ������������ᴩ������˻�����ϡ�\n"NOR,me,target);
target->receive_wound("kee",b+fun,me);
// ��mob��ǿΪ�˽�sa by swy
if(userp(me)&&(!userp(target))) { target->receive_wound("kee",b+fun,me); }
        COMBAT_D->report_status(target);
        }
        else
      {
message_vision(YEL"$n��Σ��ʱ����Ȼһ�����㿪�˿���������\n"NOR,me,target);
       }
        message_vision(HIW
"������ŭն��ʹ���󣬴���������޷��ƶ���\n"NOR,me,target);
        me->start_busy(1);
if(fun<100) { function_improved("power-dest",random(500)); }
        return 1;
  }
