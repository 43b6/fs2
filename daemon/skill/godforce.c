
#include <ansi.h>
#include <combat.h>
inherit SSERVER;
int perform(object me, object target)
{
string msg;
object ob;
string *name;
if( !target ) target = offensive_target(me);
if(me->query_skill("gforce",1)<100)
return notify_fail("������Ǻ��ķ��������� , �������������\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="unarmed")
return notify_fail("ֻ����װ������ʱ������ʹ������\n");
       if(me->query("force")<300)
       return notify_fail("�������������\n");
if(me->query("class")!="taoist")
return notify_fail("����!! �㲻�ǵ�ʿ�����Բ��������\ս����\n");
if( me->query_skill_mapped("dodge")!="g-steps")
return notify_fail("��û����׷�ǲ�����\n");
       if(me->query("kee")<150)
       return notify_fail("�����������\n");
       if(me->query("combat_exp")<300000)
return notify_fail("��ľ���ֵ���� , �޷��������\ս����\n");
       if( !target
       ||      !target->is_character()
       ||      !me->is_fighting(target) )
return notify_fail("���\ս��ֻ����ս����ʹ�á�\n");
message_vision(""HIY"$N����ȫ��,�Ի���������ͨ�ζ�����\n"NOR""
  ""HIC"                 $Nȫ��ɢ����һ����ǿ��ʢ�������\n"NOR""
  ""HIW"        $N�ܱߵ������𽥾ۼ�������,���������Χ�Ƴ�һ����\n"NOR""
 ""HIG"                $N����ٿȻ����,�ڰ���л��������ܰ�\n"NOR"",me,target);

message_vision(HIW"          ֻ��$N�����壭��$N����һ������"+target->query("name")+"����---\n
                 $Nʹ�õ���ʽ�������Ǻ��ķ�֮
                      *  �ɷ�������  *

 "HIR"                     �� �� �\ ս �� ��\n"NOR,me,target);
me->add("kee",-20);
me->add("force",-150);
if(random(me->query_skill("unarmed")-10)>random(target->query_skill("force")+10))
  {
        message_vision(
"\n"+target->name()+HIC"��������Ӧ���ѱ�$N�ݺݵĹᴩ������ʹ����֡�\n"NOR,me,target);
        message_vision( NOR,me);
target->receive_wound("kee",me->query_skill("g-steps",1)*3);
        COMBAT_D->report_status(target);

        }
        else
      {
message_vision(YEL"$n��ֱ����Ӧ����Ȼһ�����㿪�˹�����\n"NOR,me,target);
       }
        message_vision(HIW
"ʹ�������\ս�����󣬴��������Ҫ����Ϣһ�¡�\n"NOR,me,target);
        me->start_busy(2);
        message_vision( NOR,me);
        return 1;
  }
 
