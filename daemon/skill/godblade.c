//Ѫսʮʽ by bss
//�ʳ�mobר�ã�������
#include <ansi.h>
#include <combat.h>
void sp_attack(object me,object victim,object weapon,int damage);
inherit SKILL;
mapping *action = ({
(["action":
HIC"$N���е���ǰ̽��ʹ��"HIR"Ѫսʮʽ"HIC"������ʽ"BLINK+HIY"���������ݡ�"NOR""HIC"��һ�������ȷ��ĵ�����$w"HIC"ɢ����
$N����һ������$n�񱼶���������$w"HIC"���޻��ɵĿ�����$n��$l���������������ȹ�֮��ʽ
����з���ʹ�з��������������"NOR,
        "damage":       100,
        "force":        100,
        "damage_type" : "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
HIC"$N��Ȼ��Цһ��������$w"HIC"����һ����â������$n��$l������"HIR"Ѫսʮʽ"HIC"�ĵڶ�ʽ"BLINK+HIY"����â��¶��"NOR""HIC"��
����������ȫ����ǿ֮���ƹ����з���ʹ�з����ڱ���֮״̬��ʹ����Ȩ���ҷ���$n�ܵ�
$N��һ����Ц��Ӱ�죬��΢������һ�£���âȴ�Ѿ��ƽ��ˡ�"NOR,
           "damage":           300,
           "force":            100,
        "damage_type" : "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
        "post_action":          (: sp_attack:),
]),
(["action":
HIC"$N����չ��������һ�죬$w"HIC"����һ�����а������$n��$l������"HIR"Ѫսʮʽ"HIC"�ĵ���ʽ"BLINK+HIY"������ͻ����"NOR""HIC"��
���������Կ���׼ȷ�Ĺ��������ƶԷ����ߣ�ʹ�з�������ţ�����ʽ������ĵ���������
�������һ���Ĺ���$n��"NOR,
           "damage":      300,
           "force":       100,
        "damage_type" : "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
HIC"$N����$w"HIC"��ǰһ̽����������$n��Ҹ�µ�ԨҸѨ������"HIR"Ѫսʮʽ"HIC"�еĵ���ʽ"BLINK+HIY"��̽��ȡ�"NOR""HIC"��
����ʽ������ĵ�������������$n��$n���������ң�æչ�����Σ����Ҫ�㿪��������һ
����"NOR,
        "damage":       300,
        "force":        100,
        "damage_type" : "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
HIC"$N���о����ţ���������������㣬����ǰ�ţ����ش�"BLINK+HIW"����ɱһ����"NOR""HIC"�����Ӽ���ǰ
�壬$n��$N��һȥ�޻ص�����������һ��������������"HIR"Ѫսʮʽ"HIC"�еĵ���ʽ"BLINK+HIY"��һս���ɡ�"NOR""HIC"��
���������Դ�һ�дﵽ�µ������ص�Ч�������书��һ�ۡ�"NOR,
        "damage":       300,
        "force":        100,
        "damage_type": "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
HIC"$N����$w"HIC"��Ȼ���֣�����$n��Ϊ�л��ɳ�֮�ʣ�$N�����ֵ���ָ��ʳָ���ŵ�������Ȼ��
�ٵ���������·������·������·����ʮ�˵�������"HIR"Ѫսʮʽ"HIC"�еĵ���ʽ"BLINK+HIY"���������顱"NOR""HIC"��
�������ڲ��۵з�������Σ����Դ�����֮��ʽ�����������˵��ˣ��ﵽ��ս������֮��
�ı�����߾��硣"NOR,
        "damage":       300,
        "force":        100,
        "damage_type": "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
HIC"$N����$w"HIC"��Ȼ��ʼ����Ļζ���Խ��Խ�죬������ʧȥ��$w"HIC"��Ӱ�ӣ�$nֻ����$w"HIC"��ʱ�п�
�ܴ��κ�һ���ط������Լ�����������"HIR"Ѫսʮʽ"HIC"�еĵ���ʽ"BLINK+HIY"�����޳��ơ�"NOR""HIC"�����������Ծ�
����ж���Ϯ�з������䲻����ʹ�з��ش���"NOR,
        "damage":       300,
        "force":        100,
        "damage_type": "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
HIC"$N��Ȼ����һ����"BLINK+HIG"�������������ղ�����������������"NOR""HIC"��˫�ֽ�$w"HIC"�߾ٹ�ͷ����������һ
�����䵶�����п��Կ�ɽ�Ϻ������ƣ���������"HIR"Ѫսʮʽ"HIC"�еĵڰ�ʽ"BLINK+HIY"������������"NOR""HIC"������
������ȫ���������⾪��һ�����Դ˾��쵶�Ƽ�ɱ�з���"NOR,
        "damage":       300,
        "force":        100,
        "damage_type": "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
        "post_action":          (: sp_attack:),
]),
(["action":
HIC"$N��ǰ���һ����ɱ����Ȼ��$N������ӿ����$N����Ѫ��һ�֣�����������𣬵�����ת��
����㹥��$n����������"HIR"Ѫսʮʽ"HIC"�еĵھ�ʽ"BLINK+HIY"��ǿ����֮��"NOR""HIC"����������������Ϊ��͸�з�
��������ӣ�����з���أ���������Ю�����°빦��֮�á�"NOR,
        "damage":       300,
        "force":        100,
        "damage_type": "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
HIC"$N�ս�����$w"HIC"����ȫ����������$w"HIC"�ڣ����Ǽ�����������ܼ���������ʽ��������쫷磬
$n�����������Ͼ�����˾���֮��ʽ��һʱ���޷�������$N�ۿ�ʱ�����죬���һ����
"BLINK+HIM"���콵�������ң��������١��졫�¡���"NOR""HIC"��������ѩ����Ʈ��$n����������"HIR"Ѫսʮʽ"HIC"�е�
��ʮʽ"BLINK+HIY"���������¡�"NOR""HIC"�����������Ծ��˹���ʹ�з�η�壬ʹ�ҷ����Բ��Ѵ���֮����ȡ��
���Ե�ʤ����"NOR,
        "damage":       300,
        "force":        100,
        "damage_type": "����",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
});
int valid_learn(object me)
{
        return 1;
}
int valid_enable(string usage)
{
        return (usage=="blade");
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}
void sp_attack(object me,object victim, object weapon,int damage)
{
 int i,j;
   if(40 > random(100) && !me->query_temp("conti")){
message_vision(HIY"\n$Nɱ����������$n"HIY"��Ȼ���Ž�⣬$n"HIY"����������ʹ����������\n"NOR,me,weapon);
victim->start_busy(random(4));
  me->set_temp("conti",1);
    switch(random(4)){
        case 1:
                j=1;
                break;
        case 2:
                j=2;
                break;
        case 3:
                j=3;
                break;
        case 0:
                 j=4;
                break;
        default:
                j=1;
                break;
     }
   for(i=0;i<j;i++)

    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

  me->delete_temp("conti");
    me->start_busy(1);
                     }
}
