//��ҹ���ε��� by roger && taifar
//���ϸ��ھ�¥¥��������skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void sp_attack(object me,object victim,object weapon,int damage);
void sp_attack1(object me,object victim,object weapon,int damage);
void sp_attack2(object me,object victim,object weapon,int damage);
void sp_attack3(object me,object victim,object weapon,int damage);
void sp_attack4(object me,object victim,object weapon,int damage);
void sp_attack5(object me,object victim,object weapon,int damage);
void sp_attack6(object me,object victim,object weapon,int damage);
void sp_attack7(object me,object victim,object weapon,int damage);
void sp_attack8(object me,object victim,object weapon,int damage);
void sp_attack9(object me,object victim,object weapon,int damage);
void sp_attack10(object me,object victim,object weapon,int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int sp_value;

mapping *action = ({
//1
(["action":HIC"$N����$wʹ��һʽ"HIY"��ҹŮ��ҡ�"HIC"��������Զ��������ٻӰȦ��������뵣����ҵĵ���˲��ֱ��$n���"NOR,
        "damage":       850,
        "force":        850,
        "post_action":          (: sp_attack:),
        "post_action":          (: sp_attack1:),
        "damage_type":  "����",
        "weapon"     :  "�鵶",
        ]),
//2
(["action":HIC"$N�����תʹ��һʽ"HIY"��Ϧ��޿�ơ�"HIC"�����ź�쵶���߳�������������������絶����Ϧϼͻ����$n��ǰ"NOR,
        "damage":           850,
        "force":            850,
        "damage_type":  "����",
        "post_action":          (: sp_attack1:),
        "damage_type":  "����",
           "weapon"     :  "�鵶",
          ]),
//3
(["action":HIC"$Nٿ�ػص���һʽ"HIY"��������塯"HIC"���Ʒ�������һ�����ʱ�����죬�����γ������Ļ��߸��ӹ���ֱ׹$n����"NOR,
        "damage":      850,
        "force":       850,
        "damage_type":  "����",
        "post_action":          (: sp_attack:),
        "post_action":          (: sp_attack1:),
           "weapon"     :  "�鵶",
           ]),

//4
(["action":HIC"$N����һʽ"HIY"�����㽶Ҷ��"HIC"��������ת����Ӱ��ľ���һ��΢���Ƚ�$n�����ѿ�������ɨ$n����֫"NOR,
        "damage":       850,
        "force":        850,
        "post_action":          (: sp_attack:),
        "damage_type": "����",
        "weapon"     :  "�鵶",
            ]),
//5
(["action":HIC"$Nѹ��ת����ͻ��$n��˫ϥʹ��"HIY"����ҹ���ε�����"HIC"�е�"HIY"��˯¶���ġ�"HIC"����գ�ۼ�ص�����ƽɨ����Ϯ��$n$l"NOR,
        "damage":       850,
        "force":        850,
        "damage_type": "����",
        "post_action":          (: sp_attack:),
        "weapon"     :  "�鵶",
        ]),
//6
(["action":HIC"$N���㻮��"HIY"����ҹ���ε�����"HIC"��ʹ����һʽ���������¡���$w�ڿ����������Ի���쪳����£����ݵ���ֱ��$n$l"NOR,
        "damage":       850,
        "force":        850,
        "post_action":          (: sp_attack:),
        "damage_type": "����",
        "weapon"     :  "�鵶",
        ]),
//7
(["action":HIC"$N�������ޣ�����"HIY"����ҹ���ε�����"HIC"���⣬ʹ����һʽ������������$w��$N���л�����������ֱ��$n$l"NOR,
        "damage":       850,
        "force":        850,
        "post_action":          (:sp_attack2:),
        "damage_type": "����",
        "weapon"     :  "�鵶",
        ]),

//8
        ([      
                "action"     :HIC"$N��������"HIY"��������"HIC"�������Ե�����ʹ���ɽ�����֮"HIY"������ǧ�"HIC"��˲������Ӱ�䲽�������ָ$n$l"NOR,
                "dodge"      :               -500,
                "parry"      :               -500,
                "damage"     :                830,
                "force"      :                830,
                "post_action":                (: sp_attack3 :),
                "damage_type":               "����"
        ]),
//9
        ([     
                "action"     :               HIC"$N�����ι��Ե�������ʹ���ɽ�����֮�����߾�����ʽ"HIY"��ů���޷桯"HIC"��������ȼ��һ�����Ľ�ѹ���رƽ�$n"NOR,
                "dodge"      :                -500,
                "parry"      :                -500,
                "damage"     :                840,
                "force"      :                840,
                "post_action":                (: sp_attack4 :),
                "damage_type":               "����"
        ]),
//10
        ([   
                "action"     :               HIC"$N�����ԾٿȻʹ�����ɽ�����֮�����߾�����ʽ"HIY"���������顯"HIC"����������ջԻͣ���ֱ����$nü��"NOR,
                "dodge"      :                -500,
                "parry"      :                -500,
                "damage"     :                850,
                "force"      :                850,
                "post_action":                (: sp_attack5 :),
                "damage_type":               "����"
        ]),
//11
        ([  
                "action"     :               HIC"$N������ֹˮ�������ޣ�˲��ʹ���ɽ�����֮�����߾�"HIY"���������⡯"HIC"���𲨲�ɱ��������$n������ȥ"NOR,
                "dodge"      :                -500,
                "parry"      :                -500,
                "damage"     :                870,
                "force"      :                870,
                "post_action":                (: sp_attack6 :),
                "damage_type":               "����"
        ]),
//12
        ([ 
                "action"     :               HIC"$N�����$w"HIC"���������ޱȽ���������һ���ɽ�����֮"HIY"��Ϧ�����⡯"HIC"����ϼ�����쾡��$n����"NOR,
                "dodge"      :                -500,
                "parry"      :                -500,
                "damage"     :                880,
                "force"      :                880,
                "post_action":                (: sp_attack7 :),
                "damage_type":               "����"
        ]),
//13
        ([
                "action"     :               HIC"$N�Ե��������·ת���ھ���Ȼ�ϴ�ʹ���ɽ�����"HIY"��������ɱ��"HIC"����������������ֱ��$n�Ŀ�"NOR,
                "dodge"      :                -500,
                "parry"      :                -500,
                "damage"     :                890,
                "force"      :                890,
                "post_action":                (: sp_attack8 :),
                "damage_type":               "����"
        ]),
//14
         ([     "action"     :               HIC"$N��$w"HIC"���ʶ��룬���ϳ�������������Ͻ������۾�����ʹ���ɽ�����֮"HIY"���������֡�"HIC"��ֻ�������糿��է�ֻ���$n"NOR,
                "parry"      :                -500,
                "dodge"      :                -500,
                "damage"     :                900,
                "force"      :                900,
                "post_action":                (: sp_attack9 :),
                "damage_type":                "����",
           ]),
//15
         ([     "action"     :               HIM"$N�ں����ϵ���˫��֮�������������޶������۾����������ѧ��Ϊһ�壬ʹ������˫��֮"HIY"�����н�����"HIM"��ֻ�����⽣��������ǣ�����$n"NOR,
                "parry"      :                -700,
                "dodge"      :                -700,
                "damage"     :                1000,
                "force"      :                1000,
                "post_action":                (: sp_attack10 :),
                "damage_type":                "����",
           ]),
});

int valid_enable(string usage)
{
        return (usage=="blade")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

void sp_attack(object me,object victim, object weapon,int damage)
{
 int i;
 if(random(100) > 50 && !me->query_temp("conti")){
message_vision(HIM"\n$N���һЦ���鵶�����������ǹ����룬����һɢ��ϸϸ�������$n��ȥ���������� \n"NOR,me,victim);
  victim->start_busy(2);
  me->set_temp("conti",1);
   for(i=0;i<5;i++)
    
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                   
  me->delete_temp("conti");
                     }
}
void sp_attack1(object me,object victim, object weapon,int damage)
{
 int i;
 if(random(100) > 50 && !me->query_temp("conti")){
message_vision(HIM"\n$N���һЦ���鵶�����������ǹ����룬����һɢ��ϸϸ�������$n��ȥ���������� \n"NOR,me,victim);
  me->set_temp("conti",1);
   for(i=0;i<2;i++)
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

  me->delete_temp("conti");
                     }
}
void sp_attack2(object me,object victim, object weapon,int damage)
{
 message_vision(sprintf(HIC"$N������ת��ת�ۼ�����$n���$n������æת��ص���ֻ��$N�Ƶ���һ�ಢʹ���䱾�������������ǰ��һ�� \n"NOR),me,victim);
 victim->start_busy(2);
 message_vision(sprintf(HIC"$n���к����һ�£�˲��$N�ƺ�������ϯ����� \n"NOR),me,victim);
 victim->apply_condition("tsunami",random(4)+2);
 COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
 }
void sp_attack3(object me, object victim, object  weapon, int damage)
{
  sp_value =10*(str+cor)+cps+kar+spi+int1;
message_vision(HIY"
����$n�����е�˲�䣬$N��ת"HIR"������ǧ�⡯"HIY"���Ҳ���Ӱ�ڹ�Ϊ��
һ��ǧ�У�ͬһ�ѵ������ȴ�ǲ�ͬ����ʽ�����г���$n��ҪѨ��ȥ
\n"NOR,me,victim);
    victim->receive_damage("kee",sp_value,me);
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

}

void sp_attack4(object me, object victim, object  weapon, int damage)
{
  sp_value =7*(str+cor)+cps+kar+spi+int1;

    message_vision(HIW"
��������������$N������Խ��ǿ�ң�$n�޴ӷ���������ȫȫ
�ܵ���ѹ�Ŀ��ƣ�����һʽ"HIY"��ů��ӡ����"HIW"�����ĵ�â�ڿ��в�ͣ�ؾ�
��������ɲ�Ǽ�!!��ر�ɫ������ӿ��һ��ů���ڿ���֮�����ζ���
$n�����龰�����壬һ˲���ѱ���û�ڹ�â֮��
\n"NOR,me,victim);
   victim->receive_damage("kee",sp_value,me);
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}

void sp_attack5(object me, object victim, object  weapon, int damage)
{
  sp_value =7*(spi+int1)+cps+kar+str+cor;

    message_vision(HIY"
����ͬʱ��$N������أ��������棬�񱼵�����˲��ƽϢ��$N��
��ط·���Ϊһ�����������ʶ�Ŀ����ֹסȫ���ĵĶ��� 
һʽ"HIW"����������--���\-��ɷ-�˻���"HIY"Ѹ���׹�����$n
\n"NOR,me,victim);

   victim->receive_damage("kee",sp_value,me);
   victim->set_temp("no_power",1);
   victim->apply_condition("no_power",2);
   COMBAT_D->report_status(victim);
}

void sp_attack6(object me, object victim, object  weapon, int damage)
{
  sp_value =7*(cps+kar)+str+cor+spi+int1;
     message_vision(HIW"
$N�ھ���תʹ������Ψһ����֮�У�˲ʱ��һ�ɺ����������ԣ�ֻ��
���ϱ�������óɱ�����$N��ʹ���죬������ӿ����˲ʱѹ������
��ʱ����ˮ�������仯��ǧ��$n˲��ֲ��嵶�ںη�, ���ڳ���֮
�ʣ�$Nһʽ"HIC"�����������"HIW"�����˪��ѩֱ��$n�Ŀ�
\n"NOR,me,victim);

    victim->receive_damage("kee",sp_value,me);
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}

void sp_attack7(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =8*(cps+kar)+str+cor+spi+int1;
    message_vision(HIR"
$N���Ʒ����Ծ��б�ص��⣬��ת�鶯ʹ��"HIW"����ȾϦ����"HIR"����ʱ
ɱ��񱼣�����Ѫ���޷����ƣ����ķ������������������η��У���
��ι����ղ���
"NOR,me,victim);
    victim->receive_damage("kee",sp_value,me);
    me->set_temp("conti",1);
    for(i=0; i<3 ;i++)
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
    me->delete_temp("conti");
    
}

void sp_attack8(object me, object victim, object  weapon, int damage)
{
  int i;
  sp_value =8*(cps+kar)+str+cor+spi+int1;
  message_vision(HIR"
  գ�ۼ䣬���淺�𣬻�⽥�����ձ��ˣ�$N�绯ף��ȫ�������һ�����
  "HIW"��"HIR"������ɱ"HIW"��"HIR"�����б������ƻ������죬����ǧ���ֻ��һ˲��$n����ȫ��������û"NOR,me,victim);
  message_vision("$N���㲻�������϶�ʱ�����һ��Ѫ���ܵĽ��ۡ�\n" , victim);
    victim->receive_damage("kee",sp_value,me);
    victim->set_temp("swordkee",1);
    victim->apply_condition("swordkee",6);
    COMBAT_D->report_status(victim);
}


void sp_attack9(object me, object victim, object  weapon, int damage)
{
int i;
sp_value =8*(str+cor+cps)+spi+int1+kar;
message_vision(HIY"
$N�������š��������֡���һʽɢ��������Ǳ�ص�������ɲ�Ǽ�!�������
��ȫ�����˰�Ӱ����ǧ�ٸ�̫����$N�����У�һ����������ױȵĽ�⣬��
$n�����޷�����\n"NOR,me,victim);
    victim->receive_wound("kee",sp_value+130,me);
    victim->start_busy(1);
    victim->set_temp("no_power",1);
    victim->apply_condition("no_power",2);
    COMBAT_D->report_status(victim);
}

void sp_attack10(object me, object victim, object  weapon, int damage)
{
int i;
sp_value =10*(str+cor+cps)+spi+int1+kar;
message_vision(HIM"
$N�������š����ν�������һʽɢ������Ȼ������ɲ�Ǽ䣬$N���ϴܳ�
һ��һ��֮��â�������������˷���ʤ����$n�����޷�����\n"NOR,me,victim);
    victim->receive_wound("kee",sp_value+130,me);
    victim->start_busy(2);
    victim->apply_condition("swordkee",2);
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}

