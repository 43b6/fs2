#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int perform(object me, object target)
{
object ob = me->query_temp("weapon");
string msg;
int funlv=me->query_function("ghost-sword",1);
int forlv=me->query("force");
int hit=0;
int damage;
if(!ob || (string)ob->query("skill_type") != "sword")
return notify_fail("��û�ý�ร�\n");
if( !target ) target = offensive_target(me);
if(me->query("class")!="bandit")
return notify_fail("�㲻�Ƕ������Բ����á�\n");
if( me->query_skill("badsword",1) < 30 ) 
 return notify_fail("���ħ�ս�����������������ûʹ��ħ��ն��\n" NOR);
if( !target || !target->is_character() || !me->is_fighting(target) )
 return notify_fail("ħ��նֻ����ս����ʹ�á�\n");
if(me->query("force")<200)
 return notify_fail("�������������\n");
if(me->query("kee")<250)
 return notify_fail("�����������\n");
msg=NOR
"                "HIR"��  "BYEL+HIW"ħ"NOR"  "BYEL+HIW"��"NOR"  "BYEL+HIW"ն"NOR+HIR"  ��\n
"HIG"$N"HIY"����һԾ����ȫ���������ڽ��⣬ƾ�շ���һ����\n"NOR;

if(random(me->query_skill("sword") + me->query_skill("badsword",1)) + funlv * 2 > 3 * (random(target->query_skill("dodge",1) + target->query_skill("parry",1)) / 2)||random(10)<=2 )
        {
           msg += RED;
           msg += "$n��Ӧ������"BYEL+HIW"ħ��ն"RED"��ȫ���ᴩ$n�����塣\n" NOR;
damage = random(forlv*2) + funlv;
   if (damage > 800) {damage = 800;}
        target->receive_wound("kee",damage);
        me->add("force",-100);
        hit=1;
        } 
        else {
              msg += NOR "$n��Σ��ʱ����ȻһԾ������Ķ㿪��"BYEL+HIW"ħ��ն"NOR"��\n"NOR;
             }
        message_vision(msg, me, target);
        me->start_busy(1);
        if (funlv < 100)
        me->function_improved("ghost-sword", funlv * 2 + random(100));
        if(hit==1) COMBAT_D->report_status(target);
        return 1;
}
