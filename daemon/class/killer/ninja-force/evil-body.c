#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_FUNCTION;
int fun;
void remove_effect (object me);
int perform(object me, object target)
{
fun=me->query("functions/evil-body/level");
if(me->query("family/family_name")!="������")
return notify_fail ("ֻ�к��������ã�\n");
if((string)me->query_skill_mapped("force")!= "darkforce")
return notify_fail("ʹ����ħ������������B������!!\n");
if(me->query("combat_exp")<5000000)
return notify_fail ("��ľ��鲻��!\n");
if (me->query ("force") < 100)
return notify_fail ("�����������!\n");
if (me->query_temp ("evil-body", 1) || me->query_temp("body_change",1))
return notify_fail ("���Ѿ�ʹ����ħ�����ˡ�\n");
if( me->is_fighting() ) me->start_busy(1);
message_vision (HIW"$Nʹ����B�������е�"HIC"����ħ����"NOR"\n",me); 
me->add ("force", -100);       
message_vision (HIG"һ���̹�ע��$N���塣\n"NOR, me);
me->set_temp ("evil-body", 1);
me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun+200);
return 1;
}

void remove_effect (object me)
{
  int fun=me->query("functions/evil-body/level");
  me->delete_temp ("evil-body");
message_vision(HIW"$N������ħ������$N������ʧ�ˡ�\n"NOR,me);
  if(fun<100) function_improved("evil-body",100+random(200));   
  if (me->query_temp("body_change")==1)
  {
message_vision(HIR"$N��ħ���幦����ʧ, ȫ�����ѳ��ֱ���״̬!!\n"NOR,me);
me->add("max_kee",-50000);
me->add("max_gin",-50000);
me->add("max_sen",-50000);
me->set("eff_kee",me->query("max_kee"));
me->set("eff_gin",me->query("max_gin"));
me->set("eff_sen",me->query("max_sen"));
me->set("kee",me->query("max_kee"));
me->set("gin",me->query("max_gin"));
me->set("sen",me->query("max_sen"));
me->set("force",me->query("max_force")/2);
me->set("force_factor",0);
me->add_temp("apply/attack",-2000);
me->add_temp("apply/defense",-2000);
me->add_temp("apply/force",-500);
me->add_temp("apply/dagger",-500);
me->add_temp("apply/throwing",-500);
me->delete_temp("body_change");
me->unconcious();
  }
  return;
}
