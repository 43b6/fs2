//���� by bss
//�ʳ�mobר�ã�������
#include <ansi.h>
#include <combat.h>
inherit SKILL;
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);
mapping *action = ({
(["action":
"$N����Ȧת������"HIY"�����ҡ�"NOR"֮"BLINK+HIG"�������ͷס�"NOR"ʩ�𣬻���ǧ��ѣĿ���ѵ���â����
������$n������$n��ס�˴��й���ʱ��$N��æ���ţ������Ť������$wת�˷��򣬻���$n��
��������$w��ά��ԭ״������Ӳƴ$n",
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        300,
        "damage_type" : "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
"$N��$w��أ�ת������$w��ѹ������$wȥͽȻ�������ɣ������ڸ����еı��̹��Σ���
���ɵ�����$n��ǰ������"HIY"�����ҡ�"NOR"֮"BLINK+HIR"���̻�ǧ�š�"NOR"��$n��æ���ȣ�����$w���»�
��$N�����ϸ�����һ˿΢Ц������$w��������$w�ɱ�$n��˫Ŀʱ���������ʯ���Ʈ��$n",
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        300,
        "damage_type" : "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
"$N��ɫ��Ȼ������$w����ǿ��������ʹ��"HIY"�����ҡ�"NOR"֮"BLINK+HIB"��������ҡ�"NOR"����$w���ַɳ�������������̵Ĺ��
��$N��һ��$w�������۰�Ŀ���˵��������ߣ������̶��ĺ�Х�������ֺ�����ʱԶʱ��
����ʱ�����Ծ���֮�⣬��ʱ������ʮ�˲������׵�һ�㴫������ʹ$n�����Լ���������Ʈ��
�Ļ���������ȫ��������Ҫ��������������һ��",
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        300,
        "damage_type" : "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
        "post_action":  (:sp1:),
]),
(["action":
"$N˫��������һ�������ޱȵ����ƣ�����һ�̣���ʱ�����һ��ֱ��Լ�߰��$w��������
���������ȡ���ͻȻ����ֵĳ��֣�$w����������ʹ����ҡ�ǵ���һ����$w�������Ե�
�����ҷ������Ծ��˵��ٶ�����Ȧ����$n��ȥ������"HIY"�����ҡ�"NOR"֮"BLINK+HIC"����â���ɡ�"NOR"
��ͬʱ$N������һ��׷����Ϸ�ĺ����㣬������������ǰ�û�������׳ʵĽ�����̬",
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        300,
        "damage_type" : "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
        "post_action":  (:sp2:),
]),
});
int valid_learn(object me)
{
        return 1;
}
int valid_enable(string usage)
{
        return (usage=="dagger");
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}
void sp1(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("fly-circle", 1);
   if(70 > random(100))
   {
   message_vision(HIY"$N��$n"HIY"���ƿ�����������������Ӱ�죬ʧȥ�˷��������������׸�\n"NOR,victim,weapon);
   COMBAT_D->report_status(victim, 1);
   message_vision(HIR"$N�ұ�$n"HIR"�����У����ۡ���һ���³���һ����Ѫ������\n"NOR,victim,weapon);
   victim->receive_damage("kee",(skill* 3),me);
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
   }
   else
   {
   message_vision("$N����ȫû����������һ�㣬չ������������ƴ����������$n��\n",victim,weapon);
   }
}
void sp2(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("fly-circle", 1);
   if(90 > random(100))
   {
   message_vision(HIY"\n$N�ľ����䵽$n�������������ϣ���Ȼ����$n���Զ��ص��ַ���ʹ���ز��ϵĸߵ��𸡣�
                   $N�����������˵ľ��������������Ծ���������$n��������������Զ�ˡ�\n"NOR,victim,me);
   victim->receive_damage("kee",(skill* 3),me);
   COMBAT_D->report_status(victim, 1);
     victim->start_busy(random(1)+1);
   }
   else
   {
   message_vision("$N��ȫ����$n��������������̬�����������һ�������������������һ����\n",victim,me);
   }
}
