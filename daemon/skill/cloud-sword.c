// cloud-sword for �����칬 by nike...02/03/2002
#include <combat.h>
#include <ansi.h>
inherit SSERVER;
inherit SKILL;

void super(object me,object target,object weapon,int damage);
void busy(object me,object target,object weapon,int damage);
void delbusy(object me,object target,object weapon,int damage);
void attack(object me,object target,object weapon,int damage);
void damage(object me,object target,object weapon,int damage);
void recover(object me, object target, object weapon, int damage);
void att1(object me, object target, object weapon, int damage);

mapping *action = ({
    ([
        "action"     : HIC"$N����"HBBLU+HIW"������������"NOR+HIG"�� ����ʽ ��"HIY"�� �����ã ��"HIC"��$N����$w"HIC"�Ͷ���
��̤�沽��$w"HIC"��ʱӿ������������ңָ��$n��һ�й�ȥ���ƹ����أ����طǹ���"NOR,
        "damage"     : 105,
        "dodge"      : -45,
        "parry"      : -45,
        "force"      :  25,
        "post_action": (: att1 :),
    ]),
    ([
        "action"     : HIG"$Nʹ��"HBBLU+HIW"������������"NOR+HIC"�� ��Ծʽ ��"HIB"�� ������ӿ ��"HIG"��ֻ��$N����$w"HIG"��
ʱ���������⣬ʱ������������$Nһʱ���潣�ߣ������������磬ֱ��$n��ȥ��\n"NOR,
        "damage"     : 70,
        "dodge"      : -32,
        "parry"      : -32,
        "force"      : 30,
        "post_action": (: attack :),
    ]),
    ([
        "action"     : HIW"$Nʹ��"HBBLU+HIW"������������"NOR+HIR"�� ����ʽ ��"NOR+WHT"�� �˷��ƶ� ��"HIW"��$N�׽������ڵ���֮�У�
����$w"HIW"����˷���Ӱ������Ӱ�������ν��󣬲���$n���ڽ���֮�С�\n"NOR,
        "damage"     : 50,
        "dodge"      : -27,
        "parry"      : -27,
        "force"      : 30,
        "post_action": (: busy :),
    ]),
    ([
        "action"     : HIY"$N����$w"HIY"��ֻ������$w"HIY"��â����������ʵ֮��ʵ����֮����$n�ۻ����ң�
����$n�����ڽ�Ӱ֮�У���������"HBBLU+HIW"������������"NOR+HIW"�� ����ʽ ��"HIC"�� ���ΰ�ɽ ��"HIY"��\n",
        "damage"     : 80,
        "dodge"      : -18,
        "parry"      : -18,
        "force"      : 20,
        "post_action": (: att1 :),
    ]),
    ([
        "action"     : HIC"��Ȼһ�󽣹���ҫ��ԭ��$N���۽���֮��������ɽ���һй�������γ�һ
����һ���Ľ��ˣ�ֱ��$nӿȥ����Ϊ"HBBLU+HIW"������������"NOR+HIG"�� ����ʽ ��"HIM"�� ���귭�� ��"HIC"��\n"NOR,
        "damage"     : 115,
        "dodge"      : -9,
        "parry"      : -9,
        "force"      : 15,
        "post_action": (: att1 :),
    ]),
    ([
        "action"     : HIW"ͻȻ$N����һת��ʹ��"HBBLU+HIW"������������"NOR+HIY"�� ���ʽ ��"HIG"�� �Ƴ����� ��"NOR"�����Խ���Ϊ
�أ�ʵ�Խ���Ϊ����ͻȻһ������ͻȻ��$w"HIW"���漱��������ֱ����$n��\n"NOR,
        "damage"     : 230,
        "dodge"      : 0,
        "parry"      : 0,
        "force"      : 25,
        "post_action": (: delbusy :),
    ]),
    ([
        "action"     : HIG"$N����֮$w"HIG"��Ȼ�����޹⣬�����������飬��$n����������ȴ��$N��һ��
"HBBLU+HIW"������������"NOR+HIM"�� ��Ϯʽ ��"HIR"�� ���ư��� ��"HIG"���������ǹ��䲻����ռ���Ȼ���\n"NOR,
        "damage"     : 150,
        "dodge"      : 8,
        "parry"      : 8,
        "force"      : 10,
        "post_action": (: damage :),
    ]),
    ([
        "action"     : HIY"$N��������Ϊ�������������ᾢ�ڽ��棬˳��ʹ��"HBBLU+HIW"������������"NOR+HIC"�� �ƿ�ʽ ��
"HIG"�� �ɰظ��� ��"HIY"��ֻ��������Ϊ�ɰ��������Խ����Ƴ����Բ�ͬ�������$n��\n"NOR,
        "damage"     : 170,
        "dodge"      : 18,
        "parry"      : 18,
        "force"      : 20,
        "post_action": (: att1 :),
    ]),
    ([
        "action"     : HIC"$N��������ȫ��ʹ��"HBBLU+HIW"������������"NOR+YEL"�� ����ʽ ��"HIW"�� ������� ��"HIC"����������Ϊ
���ν���������������ܵı����㣬ʹ��$n�޷��ӽ��������ۻ�����֮��\n"NOR,
        "damage"     : 90,
        "dodge"      : 25,
        "parry"      : 25,
        "force"      : 20,
        "post_action": (: att1 :),
    ]),
    ([
        "action"     : HIY"$N��͸���⣬ʹ��һ��"HBBLU+HIW"������������"NOR+HIB"�� ����ʽ ��"HIR"�� ����ɽ�� ��"HIY"��һ���ۻ뽣
��ֱȡ$n�ʺ����ƿ�֮���мд�����Ʈ˷֮������������������ɽ������\n"NOR,
        "damage"     : 210,
        "dodge"      : 31,
        "parry"      : 31,
        "force"      : 20,
        "post_action": (: super :),
    ]),
    ([
        "action"     : HIG"ֻ��$N˫��һ�磬����������ת���漴ʹ��"HBBLU+HIW"������������"NOR+HIB"�� ����ʽ ��"HIC"�� �������� ��
"HIG"����ʽ���̺������򻯵�����̬�ƣ�ֻ��$N����һ����$nһʱ�޷��мܡ�\n"NOR,
     "damage"    : 230,
     "dodge"     : 38,
     "parry"     : 38,
     "force"     : 30,
        "post_action": (: super :),
    ]),
    ([
        "action"     : HIC"
\t\t  �T�T�T�j�T�T�T      �j�T�m�j �d�T�T�s    �T�T�m�T�t�T�p�T�r
\t\t�q�T�T�T�p�T�T�T�r    �m�T�T�m �t�T�T�r     �T�T�T     �U  �U
\t\t�U�t�T�r�U�q�T�s�U    �X�T�T�[ �q�T�T�s     �T�T�T �T�T�p�T�m
\t\t   �T�T�T�T�T�T       �d�T�T�g �d�T�T�s    �q�T�T�r�q�T�s�T�r
\t\t �T�j�T�T�T�T�T�T     �d�T�T�g �d�T�T�s    �U    �U�U      �U
\t\t   �t�T�T�T�T�g       �s    �s �t�T�T�r    �t�T�T�s�s      �t\n\n
"HIW"$Nһ��"HBBLU+HIW"������������"NOR+HIB"�� �ܾ�ʽ ��"HIG"�� �����޼� ��"HIW"ʹ��������������轣�㣬
���ֿ콣��������ƥ��ǡ�����������⣬��Ȥ̬������ȴ��������������\n"NOR,
        "damage"     : 250,
        "dodge"      : 45,
        "parry"      : 45,
        "force"      : 25,
        "post_action": (: recover :),
    ]),
});
void recover(object me, object target, object weapon, int damage)
{
    int bell, recover, sklv = me->query_skill("cloud-sword",1);
    bell = me->query("bellicosity")/10;
    if(bell > 250) bell = 250;
    recover = sklv*2-bell;
    if(sklv < bell) recover = 0;

    if(me->query("family/family_name") != "�����칬") return 0;
    if( !me->query_temp("berserk") && me->query("kee") < me->query("max_kee") && random(100) > sklv*2/3) {
        message_vision(HIY"\n$N���ڵ������������Խ�������һ����â������$N��ȫ���֣�\n
"HIW"$NͻȻ�е��Լ��������ƺ��Ѿ��ظ��˲��٣�\n"NOR,me,target);
        me->receive_curing("kee",recover);
        me->receive_heal("kee",recover);
        me->add("force",sklv);
    } else return 0;
}
void busy(object me, object target, object weapon, int damage)
{
    int sklv = me->query_skill("cloud-sword",1);

    if(me->query("family/family_name") != "�����칬") return 0;
    if(me->query("force") < sklv/2) return 0;
    if(me->query("force") < 200 || target->is_busy() >= 3) return 0;
        message_vision(HIM"\n\t$N���ᵤ���վ�ȣ�˳��ʹ��һ��...\n
\t\t"HIY"������"HIC"�� "HIW"��������"HIC"��"HIR"������"HIC" ��"HIY"������\n
\t    "HIR"�Խ���ɢ����һ�����ܻ�⣬�ݺݵس�$n"HIR"��ȥ����\n\n"NOR,me,target);
    if(!me->query_temp("berserk") && random(75) > 60-me->query("cps")) {
        message_vision(HIB"$N��һ������$n��Ҫ�����ţ�һ������֮�У��Խ�������$n���ڣ�
$n��ʱ����Ѫɫ��һ��Ŀ�ɿڴ����·����Ծ����ޱ�...\n"NOR,me,target);
        target->receive_damage("kee",sklv*2);
        target->apply_condition("burn",random(sklv)+sklv/3);
        target->start_busy(random(2)+1);
        me->add("force",-sklv);
    } else {
        message_vision(HIR"$N��һ����ƫ��ֻ��ɨ��$n��˫�磬$n��ͷ��ʱѪ��Ȫӿ�������޴�...\n"NOR,me,target);
        target->receive_damage("kee",sklv*2);
        me->add("force",-sklv/2);
    }
}
void delbusy(object me, object target, object weapon, int damage)
{
    int sklv = me->query_skill("cloud-sword",1);

    if(me->query("family/family_name") != "�����칬") return 0;
    if(sklv < 40 || me->query("force") < sklv*3/2) return 0;
    if(!me->query_temp("berserk") && random(100) > 50) {
        message_vision(HIG"\n$N��$n�Ƶô���������ȴͻȻ���һ��������㿪ʼ��������֮������������\n\n
\t\t"HIW"��"HIC"��ͤͻأ�����"HIW"��"HIC"��ѹԪ���ٳ�¥"HIW"��\n
\t\t\t"HIW"��"HIY"������ΰ�孺�"HIW"��"HIY"ǧ�����׳ɽ��"HIW"��\n
\t\t"HIW"��"HIG"�����������ҹ"HIW"��"HIG"��ľ��˪������"HIW"��\n
\t\t\t"HIW"��"HIR"�н�����һ����"HIW"��"HIR"��������������"HIW"��\n\n
        "NOR,me,target);
        message_vision(HIY"  ����...$N���ڰ�\����$n�����ܹ��ƣ�������ǿ�ƿ콣����$n��������...\n"NOR,me,target);
        target->receive_damage("kee",sklv*2);
        me->add("force",-sklv*3/2);
    } return 0;
}
void damage(object me, object target, object weapon, int damage)
{
    int bell, sklv = me->query_skill("cloud-sword",1);

    if(me->query("family/family_name") != "�����칬") return 0;
    if(sklv < 90 || me->query("force") < sklv*2/3) return 0;
        message_vision(HIR"\n
    $N���󽣾������������������壬�������һ�㣬�б������Ѩ��\n
\t���漴��������֮�������ѻû�������Ȧ����������Ծ\n
    �����࣬һ�������ɰ��������$n�������������в�����������\n
\t  "HIW"--== "HBRED+HIY"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"ɽ"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"�� "NOR+HIW" ==--\n
\t      "HIW"--== "HBRED+HIY"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"Ծ"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"Ԩ "NOR+HIW" ==--\n
\t\t  "HIW"--== "HBRED+HIY"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"Ϊ"NOR+HIW" == "HBRED+HIC"�� "NOR+HIW" ==--\n
\t\t      "HIW"--== "HBRED+HIY"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"��"NOR+HIW" == "HBRED+HIC"ԭ "NOR+HIW" ==--\n
\t    "HIY"���п���׿��������ԣ�����֮���ѳ����˶�ʮ�ལ����������$n"HIY"Ҫ����\n
\tֱ�Ƶ����������֮��أ�ֻ��ͦ����ȴ��˶���������ţ�ͷ���������Լ��졣\n\n"NOR,me,target);
    if( !me->query_temp("berserk") && random(sklv) > 45) {
        message_vision(HIR"$N���ʹ��һ���г壬ֱȡ$n֮���Ŵ�Ѩ��$nһ����������У�����أ����Ѫ����...\n"NOR,me,target);
        target->receive_wound("kee",sklv*5+random(sklv));
        target->receive_damage("kee",sklv*2+random(sklv));
        target->start_busy(1);
        me->add("force",-sklv*2/3);
    } else {
        message_vision(HIR"$N���ʹ��һ���г壬ֱȡ$n֮���Ŵ�Ѩ��$n��ٱ۵��ݣ�ȴ�˼��ֱۣ���Ѫ��ֹ...\n"NOR,me,target);
        target->receive_damage("kee",sklv);
        me->add("force",-sklv/3);
    }
}
void attack(object me, object target, object weapon, int damage)
{
    int bell, sklv = me->query_skill("cloud-sword",1)*2;
    bell = me->query("bellicosity")/10;
    if(sklv < 120) sklv = 120;
    if(bell > 100) bell = 100; 
    if(bell < 45) bell = 45;

    if(me->query("family/family_name") != "�����칬") return 0;
    if(me->query("force") < sklv) return 0;
        message_vision(HIC"\n
\t$N�������ֱ�Ծ��ת����Ϯ������������ػ��壬ʵΪ�����ܾ���\n
    ˲Ϣ��䣬�������ڷ���һ�����������֮������˳��ʹ��һ��......\n
\t      "HIY"��--��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIY"��--��"HIR"������֮ʽ��"NOR"\n
"HIY"\t    ��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIR"�B"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIC"��"HIW"��"HIY"��\n
    "HIC"һʱ�����㣬��â��ҫ���������ܣ�����ͻ�����˽���һ����$n�񹥶�ȥ��\n\n"NOR,me,target);
    if(!me->query_temp("berserk") && random(sklv) > bell) {
        message_vision(HIR"$n�����������㣬��Ȼһ�������Ѿ���$N��ʹ����Ҫ��������\n"NOR,me,target);
        target->receive_damage("gin",sklv+random(sklv/2));
        target->receive_damage("kee",sklv*2+random(sklv));
        target->receive_damage("sen",sklv+random(sklv/2));
        target->receive_wound("gin",sklv/2+random(sklv));
        target->receive_wound("kee",sklv+random(sklv*2));
        target->receive_wound("sen",sklv/2+random(sklv));
        me->add("force",-sklv);
    } else {
        message_vision(HIG"$n�ŲȲ�����һ����������Ȼ������������������һ��...\n"NOR,me,target);
        me->add("force",sklv/3);
        target->start_busy(1);
    }
}
void super(object me, object target, object weapon, int damage)
{
    int sklv,bell = me->query("bellicosity")/10;
    sklv = me->query_skill("cloud-sword",1);
    if(bell < 0) bell = 0;
    if(bell > 60) bell = 60;

    if(me->query("family/family_name") != "�����칬") return 0;
    if(sklv < 120) return 0;
    if(!me->query("quests/free_shasword")) return 0;
    if(me->query("force") < 1200) return 0;
    if(me->query_temp("berserk")) return 0;
        message_vision(HIY"\n$N������⣬�轣���֣����һ����������������������һ��ʹ��...\n
\t\t"HBRED+HIW"-= "HIY"�����Խ���"HIW"��"HIC"ʮ��ʽ��� "HIW"=-"NOR+HIY"\n\n"NOR,me,target);
    if(random(100) > 30) {
    sklv = sklv - bell;
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"������ʽ��"HIW"��"NOR+GRN"�����ã"HIW"��"HIR"��һ�л������磬ȥ�����ڵĹ���$n�����ӡ�\n"NOR,me,target);
        target->receive_damage("kee",sklv/2);
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"����Ծʽ��"HIW"��"NOR+MAG"������ӿ"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n�ľ��\n"NOR,me,target);
        target->receive_damage("kee",sklv/2);
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"������ʽ��"HIW"��"HIB"�˷��ƶ�"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n��˫�ۡ�\n"NOR,me,target);
        target->receive_damage("kee",sklv/2);
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"������ʽ��"HIW"��"NOR+CYN"���ΰ�ɽ"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n������\n"NOR,me,target);
        target->receive_damage("kee",sklv*2/3);
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"������ʽ��"HIW"��"HIM"���귭��"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n���ؿڡ�\n"NOR,me,target);
        target->receive_damage("kee",sklv*2/3);
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"�����ʽ��"HIW"��"NOR+WHT"�Ƴ�����"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n�Ķ�Ƥ��\n"NOR,me,target);
        target->receive_damage("kee",sklv+random(sklv));
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"����Ϯʽ��"HIW"��"NOR+YEL"���ư���"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n�����ʡ�\n"NOR,me,target);
        target->receive_damage("kee",sklv*2);
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"���ƿ�ʽ��"HIW"��"HIG"�ɰظ���"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n�����ɡ�\n"NOR,me,target);
        target->receive_damage("kee",sklv*2+random(sklv/2));
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"������ʽ��"HIW"��"HIC"�������"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n�Ĵ��ȡ�\n"NOR,me,target);
        target->receive_damage("kee",sklv*2+random(sklv));
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"������ʽ��"HIW"��"HIY"��������"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n��ϥͷ\n��"NOR,me,target);
        target->receive_damage("kee",sklv*3);
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"������ʽ��"HIW"��"HIR"����ɽ��"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n��С�ȡ�\n"NOR,me,target);
        target->receive_damage("kee",sklv*3+random(sklv/2));
        COMBAT_D->report_status(target);
        message_vision(HIR"\n$N�񱩽��⣬���ὣ�棬ʹ��"HIY"���ܾ�ʽ��"HIW"��"HIW"�����޼�"HIW"��"HIR"��һ�л������磬ȥ�����ڹ���$n�����ס�\n"NOR,me,target);
        target->receive_damage("kee",sklv*4+random(sklv));
        COMBAT_D->report_status(target);
        COMBAT_D->report_status(target);
        COMBAT_D->report_status(target);
        target->start_busy(2);
        me->add("force",-1200);
        me->start_busy(1);
    } else {
        message_vision(HIB"û�ϵ���Ȼ��$n"HIB"ͻ��������һ�и����ƽ��ƣ���$Nֻ�˵�$n"HIB"��һ��Ƥë��
���޸����ػ�������$N�����ʱʧȥ���ģ��Կ�����ˤ�ڵ�...\n"NOR,me,target);
        me->add("force",-200);
        target->receive_damage("kee",sklv*2);
    }
}
// �� gold-blade ֱ��͵�����ĵ��...by nike
void att1(object me, object victim, object weapon, int damage)
{
    int lose, i, bell = me->query("bellicosity")/100;
    if(bell < 1) bell = 1;
    if(bell > 15) bell = 15;
    lose = (int)me->query_skill("cloud-sword",1)/20-random(bell)+1;

    if(me->query_temp("berserk")) return 0;
    if(me->query("force") < 120) return 0;
    if(lose < 1) lose = 1;
    if(lose > 20) lose = 20;
    for(i = 0;i < lose; i++) {
        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
        me->set_temp("berserk",1);
        me->add("force",-120);
        if(me->query("force") < 0) me->set("force",0);
    }
        me->delete_temp("berserk");
}
int valid_learn()
{
    object me = this_player();
    object ob = me->query_temp("weapon");

    if(me->query("max_force") < 60)
        return notify_fail("����ڹ��������㣬�޷�ѧϰ��������������\n");
    if(!ob) return notify_fail("�������޽������ѧϰ��������������\n");
        return 1;
}
int valid_enable(string usage) { return (usage=="sword"); }
mapping query_action(object me, object weapon)
{
    object target = offensive_target(me);
    int sk = me->query_skill("cloud-sword",1);
    int da = sk*(random(2)+5);
    da = random(da)+da/2;
    weapon = me->query_temp("weapon");

    if(weapon) {
    if(me->query("force") >= 450 && me->query("bellicosity") <= 50) {
    if(me->query("family/family_name") == "�����칬"
    && weapon->query("id") == "cloud-dragon sword"
    && sk >= 80 && random(100) > 85 && target) {
message_vision(HIC"$N���е�"+weapon->name()+"�����ڸ��ƾ����ĵ���֮�£����û�Ϊһβ�����������$n�ڷɶ�ȥ��\n"NOR,me,target);
message_vision(@LONG

[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m/[1m|[1m [1m [1m/[1m|[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m,[1m^[1m^[1m^[1m-[1m-[1m_[1m/[1m|[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m_[1m-[1m^[1m^[1m^[1m^[1m^[1m^[1m-[1m_[1m/[1m|[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m.[1m_[1m-[1m-[1m-[1m;[1m/[1m^[1m [1m^[1m [1m [1m [1m`[1m.[1m/[1m|[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1mv[1m [1m [1m [1m [1m [1m/[1m^[1m^[1m [1mv[1m [1m [1m^[1m^[1m [1m [1m^[1m/[1m|[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m([1m([1m [1m)[1m;[1m/[1m^[1m [1m [1m [1m [1m [1m>[1m [1m>[1m [1m`[1m/[1m|[0m
[0;1;36m [1m [1m [1m\[1m [1m [1m [1m [1m [1m([1m:[1m)[1m [1m [1m [1m/[1m^[1m [1m^[1m([1m:[1m)[1m [1m [1m^[1m [1m [1m>[1m>[1m`[1m/[1m|[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m,[1m/[1m [1m^[1m^[1m [1m [1m>[1m [1m [1m [1m [1m>[1m [1m>[1m`[1m/[1m|[0m
[0;1;36m [1m [1m [1m [1m [1m\[1m [1m [1m [1m [1m([1m:[1m:[1m)[1m [1m/[1m [1m [1m [1m([1m:[1m:[1m)[1m [1m;[1m>[1m [1m/[1m [1m>[1m>[1m`[1m/[1m|[1m [1m [1m [1m [1m [1m [1m [1m [1m,[1m/[1m^[1m^[1m^[1m [1m [1m [1m,[1m-[1m.[1m [1m [1m [1m>[1m [1m>[1m>[1m`[1m/[1m|[0m
[0;1;36m [1m [1m [1m [1m [1m [1m\[1m [1m [1m [1m([1m:[1m:[1m)[1m,[1m^[1m^[1m^[1m.[1m([1m:[1m:[1m)[1m/[1m`[1m/[1m [1m [1m [1m>[1m>[1m>[1m`[1m/[1m|[1m [1m [1m [1m [1m [1m [1m,[1m/[1m^[1m^[1m [1m [1m [1m^[1m;[1m [1m [1m [1m`[1m.[1m [1m [1m [1m>[1m [1m>[1m`[1m/[1m|[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m\[1m [1m [1m<[1m_[1m)[1m:[1m:[1m:[1m:[1m:[1m([1m_[1m>[1m/[1m [1m/[1m`[1m.[1m_[1m-[1m-[1m.[1m [1m [1m`[1m/[1m|[1m [1m [1m [1m [1m [1m;[1m/[1m^[1m [1m [1m^[1m [1m [1m;[1m-[1m_[1m.[1m [1m [1m`[1m.[1m.[1m [1m>[1m [1m [1m>[1m`[1m/[1m|[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m [1m\[1m [1m\[1m|[1m:[1m:[1m:[1m|[1m:[1m:[1m:[1m|[1m/[1m [1m/[1m [1m [1m [1m([1m [1m)[1m)[1m [1m [1m>[1m`[1m/[1m|[1m [1m [1m [1m,[1m/[1m^[1m [1m^[1m [1m [1m [1m;[1m([1m [1m)[1m)[1m [1m [1m [1m [1m [1m;[1m [1m [1m>[1m>[1m [1m`[1m/[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m\[1m [1m [1m\[1m_[1m:[1m|[1m:[1m_[1m/[1m [1m [1m/[1m [1m [1m [1m [1m`[1m.[1m [1m [1m [1m [1m [1m>[1m`[1m/[1m|[1m [1m,[1m/[1m^[1m^[1m [1m [1m [1m^[1m [1m;[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m;[1m>[1m [1m [1m>[1m [1m/[1m;[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m\[1m [1m\[0;1;5;31m@[0;1;36m,[1m [1m.[0;1;5;31m@[0;1;36m/[1m [1m/[1m [1m [1m [1m [1m [1m [1m`[1m.[1m [1m [1m>[1m [1m>[1m [1m`[1m-[1m-[1m [1m^[1m^[1m [1m^[1m [1m^[1m [1m;[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m;[1m [1m>[1m [1m>[1m [1m/[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m\[1m [1m\[1m=[1m:[1m=[1m/[1m [1m/[1m [1m [1m [1m [1m [1m [1m [1m_[1m`[1m.[1m [1m [1m [1m [1m>[1m [1m [1m>[1m [1m>[1m [1m [1m>[1m [1m [1m;[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m,[1m`[1m [1m>[1m [1m [1m/[1m;[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m\[1m\[1m=[1m:[1m=[1m/[1m/[1m [1m [1m [1m [1m [1m [1m [1m([1m([1m,[1m`[1m.[1m>[1m [1m>[1m [1m [1m [1m [1m>[1m [1m>[1m [1m_[1m/[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m,[1m'[1m [1m>[1m [1m>[1m [1m/[1m,[0m
[0;1;36m [1m [1m [1m [1m [1m [1m [1m [1;33m [1m_[1;36m [1m [1m [1m [1m<[1mo[1m_[1mo[1m>[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m^[1m`[1m-[1m_[1m_[1m [1m>[1m [1m_[1m_[1m_[1m-[1m^[1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m_[1m,[1m'[1m [1m>[1m>[1m [1m [1m/[1m;[0m
[0;1m [1m [1;33m^[1m^[1m-[1m_[1m_[1m [1;31m/[1m^[1m^[1m\[1;33m [1m_[1m-[1;37m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1;36m^[1m^[1m^[1m^[1m^[1m_[1m-[1m^[1m=[1m-[1m-[1m^[1m^[1m.[1m.[1m.[1m_[1m'[1m [1m>[1m>[1m [1m [1m/[0m
[0;1m [1m [1m [1m [1;33m^[1m^[1m-[1;31m|[1m [1m [1m'[1m;[1m|[1;33m_[1m_[1m-[1m^[1m^[1m^[1m-[1m_[1m_[1m_[1m [1;37m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1;36m_[1m^[1m_[1m^[1m-[1m-[1m.[1m.[1m.[1m.[1m_[1m_[1m.[1m.[1m.[1m/[0m
[0;1m [1m [1m [1;33m_[1m_[1m_[1m-[1m_[1;31m\[1m_[1m_[1m/[1;33m-[1m-[1m^[1m^[1m^[1m [1m [1;37m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1;36m^[1m^[1m^[0m

LONG+NOR,me,target);
        message_vision(HIW"�����ڷ��ڿգ������³����飬�漴��$n����ֱ�£������ף�Ѹ����磡\n"NOR,me,target);
        message_vision(HIY"\n�������賤Хһ��������������ף����$n�߻���أ������������ҽУ�\n"NOR,me,target);
        COMBAT_D->report_status(target);
        message_vision(HIR"������������צչ����񹥻���$nһʱ���㲻����������ȫ��Ƥ�����ѣ�\n"NOR,me,target);
        COMBAT_D->report_status(target);
        message_vision(RED"�������еĻ���ͻȻ��$n�۷ɶ�ȥ����������ͻȻ��$n�����������ʹ�಻�ѣ�\n"NOR,me,target);
        COMBAT_D->report_status(target);
        target->start_busy(1);
        target->receive_damage("kee",da);
        target->receive_damage("gin",da/5);
        target->receive_damage("sen",da/5);
        me->add("force",-(random(150)+300));
        message_vision(HIB"\n���������ʹ��֮���ֻû�Ϊ���Σ����$N�����С�\n"NOR,me,target);
        }
    }
  }
    sk = sk/10;
    if(sk < 2) return action[random(3)];
    else if(sk < 4) return action[random(6)];
    else if(sk < 8) return action[random(9)];
    else return action[random(sizeof(action))];
}
string perform_action_file(string action)
{
        return CLASS_D("swordsman")+"/cloud-sword/"+action;
}


