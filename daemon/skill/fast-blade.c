#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void sp_att1(object me, object victim, object  weapon, int damage);
void sp_att2(object me, object victim, object  weapon, int damage);
void sp_att3(object me, object victim, object  weapon, int damage);
mapping *action = ({
(["action":HIG
"$N�����鶯,"+HIM+"���ǧҶ������һʽ������ʽ��"+HIG+"ʹ�˳���,���е�$w"+HIG+"��
�����$nֱ������,��Ҳ��$n������ȥ,�쵶����,�Ƶ�$n��æ���ҡ�"NOR,
        "dodge":      10,
        "parry":    -10,
        "damage":   30,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N�������һ��,˳��һ��"+HIM+"���ǧҶ�����ڶ�ʽ��������衱"+HIG+"��$nϮ������
,$N���κ�ȻƮ��,��������,����$w"+HIG+"�ɿ������,ֻ����$n�ۻ����ҡ�"NOR,
        "dodge":     10,
        "parry":    -10,
        "damage":   30,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N��Ȼ����һ��,������˰벽,ʹ��"+HIM+"���ǧҶ��������ʽ���˲�ն����"+HIG+",����
$w"+HIG+"����$n�Ĵ���,���ŵ���һ��,˳����$n�����ʻ��˹���,��ն$n�����ۡ�"NOR,
        "dodge":   10,
        "parry":    -15,
        "damage":   50,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N��������,����������б,һ���ɳ�,����"+HIM+"���ǧҶ��������ʽ������������"+HIG+"ֱ��
$n�۰򿳵�,����ɿ�Ĵ�$n�ұ�ɨ��ֱ��������,$n���ŵ���Ҫ�ӿ���"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   50,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N���е�������,��������,������ǰ΢��,һʽ"+HIM+"���ǧҶ��������ʽ���ΰݱ�����"+HIG+"��
$n����ǰ�к��˹���,$N����һ��,ֱ��$n�����,�Ƶ�$n�������
��������"NOR,
        "dodge":    20,
        "parry":    -15,
        "damage":   50,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N������ת,���²�ͣ���ƶ���,$N��Ȼʹ��һ��"+HIM+"���ǧҶ��������ʽ��ת����ɽ��"+HIG+"
,�������ұ�һת,б��һ������$n����,��$n����ʱ�Ѳ�����Ӧ�ˡ�"NOR,
        "dodge":   10,
        "parry":    -10,
        "damage":   70,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N���������˰벽,�����Գ�,������ƫ��,һ��"+HIM+"���ǧҶ��������ʽ���������š�"+HIG+"
��$nն�˹���,$n��æ�м�,$N�����󻬰벽,����ֱ��,��$n�ؿڿ���������"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   70,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N���еĵ�һ������,˫�ȶ��˸�����,��Ȼ�ɱ���ȥ,���е�$w"+HIG+"����ǰ
�������鿳,һ��"+HIM+"���ǧҶ�����ڰ�ʽ���׵罻����"+HIG+"ʹ�˳���,Ѹ�ٵ�
��$n���Դ��к��˹�����"NOR,
        "dodge":   20,
        "parry":    -15,
        "damage":   70,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N����ȫ������,��������ȫ��,���������ʳָ������Ѩ���,����ʹ����ǧ��׹��
,����ʹ��һ��"+HIM+"���ǧҶ�����ھ�ʽ��������ɽ��"+HIG+"���͵���$n����
����,�ۼ�$n�����ѻ����ˡ�"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   70,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N�������һ��,����ǧҶ�����ľ�Ҫ,��ȻѸ�ݵ���$n����"+HIM+"���ǧҶ������ʮʽ
���ֻ�������"+HIG+"����,������������ˮ���Ʈ��,��Ʈ����,$w"+HIG+"��������$n
��С��������ȥ,���д���,�������ᡣ"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   70,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N��$w"+HIG+"��õ�ˮ��©,��Ȼת��Ϊ��,��$nʩչ��"+HIM+"���ǧҶ������ʮһʽ
�������Ϸɡ�"+HIG+",$N���е�$w"+HIG+"���ٵķ�����,�ֱ����ϡ��¡���������·��
$n����,$n�������޷��м��ˡ�"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   90,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N���ƴ���,��Ȼʹ��һ��"+HIM+"���ǧҶ������ʮ��ʽ�����б��¡�"+HIG+",�������ʸ��ɿ�
��ǰ��,���е�$w"+HIG+"�����趯�ķɿ�,ֱ���й�,���ĵ���һ��,����$n�����
,���б仯֮��,$nʵ�����㲻�ס�"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   90,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N��$n��߲�ͣ���ƶ�,һ��"+HIM+"���ǧҶ������ʮ��ʽ��������ͼ��"+HIG+"������
,��Ȼ�����е�$w"+HIG+"����$n�ĵ�,�������ǵ���һת,��$n��С��ֱ�����
,$n��æ����ܿ����С�"NOR,
        "dodge":   10,
        "parry":    -10,
        "damage":   90,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N�����е�$w"+HIG+"�ɿ������,һ��"+HIM+"���ǧҶ������ʮ��ʽ�����Ǹ��¡�"+HIG+",����ֱȡ
$n������,�������š�����ʮ���ȡ�,��ʽ����ǰ��δ��,����һת,�ݺݵ�
��$n���Ұ��ӿ��˹�����"NOR,
        "dodge":   10,
        "parry":    -20,
        "damage":   90,
        "force":    160,
        "damage_type" : "����",
]),

([ "action" : HIG
"$N������������$w"+HIG+",����������$N�����ܷ����ٱ���,һ��"+HIM+"���ǧҶ������
ʮ��ʽ���ɹ��ظʡ�"+HIG+",�����Ӱ,$w"+HIG+"Ѹ�ݵ���$Nͷ���Ϸ�����,��Ȼ�����ҵ�
��$nӭ������,ֻ����$n�ҽ�һ��,�ۿ�$n�Ѿ����ܻ����ˡ�"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   100,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N��$w"+HIG+"������һ��,��\�˸�����������,���������תһȦ,���е�
$w"+HIG+"ͻȻ��$n���̶���,������һ��"+HIM+"���ǧҶ������ʮ��ʽ���ص�ʽ��"+HIG+"
,$N�ɿ����$n����������ʮ�ŵ�,���кݶ�,�ۿ�$n��Ҫ�����ˡ�"NOR,
        "dodge":    10,
        "parry":    -20,
        "damage":   100,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N�۹���·,�����˷�,�۾��������$n������,$N��$w"+HIG+"��������,ʹ��"+HIM+"
���ǧҶ������ʮ��ʽ������������"+HIG+",ֻ����������,$Nȫ�����±�������£����
,��Ȼ��$w"+HIG+"һ���,������,�ı��,����$nȫ�����°˴�Ҫ����"NOR,
        "dodge":    10,
        "parry":    -20,
        "damage":   100,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N��ӰƮ��,��������,���е�$w"+HIG+"����ķ�����,������"+HIM+"���ǧҶ������ʮ��ʽ
������·��"+HIG+",��$n��һ����,����һ��һ��,��$n�������Ѩ�к�����
,��$n�е����ֲ���,���޷���������"NOR,
        "dodge":   20,
        "parry":    -15,
        "damage":   100,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N���������ķ�,ֻ��$Nͷ��ð������,"+HIM+"���ǧҶ������ʮ��ʽ����תǬ����"+HIG+"
Ѹ�ݵ�ʹ��,����ͻȻ������ת,�ֲ��������ϱ�,$n�Ѹе�ͷ��,$N˲���۽�
$n�����,����$w"+HIG+"����$n�Դ����¡�"NOR,
        "dodge":    10,
        "parry":   -20,
        "damage":   130,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N��������,���ᵶ��,һ��"+HIM+"���ǧҶ�����ڶ�ʮʽ���ϲ���ɽ��"+HIG+"��
$n�к�����,$N���е�$w"+HIG+"������������,��δ��,���ȵ�,һ����ɲ��
������$nϮ������,����ǿ����$w"+HIG+"�ָ��ſ��˹���,�����ͻ�
��ɽ֮�ơ�"NOR,
        "dodge":   10,
        "parry":    -15,
        "damage":   130,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N�����Ƽ�,��������,ƬƬ����,��һ��"+HIM+"���ǧҶ�����ڶ�ʮһʽ����ն��������"+HIG+"
��$nϮ�ڶ���,������$n��С�����ұۡ����ȴ�,���ű�ת����,$nȫ��
���±������ڵ���֮��,ͻȻһ��������$n���˹���,ֱ��$n���ų��˹�ȥ��"NOR,
        "dodge":    20,
        "parry":    -20,
        "damage":  160,
        "force":    160,
        "damage_type" : "����",
]),

(["action":HIG
"$N����һ��,�����ֶ���һ��$w"+HIG+",˫���䷢,�绢����,һ��"+HIM+"���ǧҶ������
��ʮ��ʽ���������족"+HIG+"ʹ��,�����̹ſ���ٵذ�������ǧ,���·ת,$N����Ʈ��
����,����������ڳ�,��·������˷�Ϯ����ȥ�� "NOR,
        "dodge":    5,
        "parry":   -20,
        "damage":  160,
        "force":   160,
        "damage_type" : "����",
]),
(["action":HIW"$N�����ķ�һ�ᣬʹ��"HIR"����������"HIW"��"HIR"�쵶��"HIW"��\n"NOR,
        "damage":160,
        "force":160,
        "damage_type" : "����",
        "post_action":  (: sp_att1 :),
]),
(["action":HIW"$N�����ķ�һ�ᣬʹ��"HIR"����������"HIW"��"HIR"�ص���"HIW"��\n"NOR,
        "damage":160,
        "force":160,
        "damage_type" : "����",
        "post_action":  (: sp_att2 :),
]),
(["action":HIW"$N�����ķ�һ�ᣬʹ��"HIR"����������"HIW"��"HIR"�˵���"HIW"��\n"NOR,
        "damage":160,
        "force":160,
        "damage_type" : "����",
        "post_action":  (: sp_att3 :),
]),
});

int valid_learn(object me)
{
        object weapon = me->query_temp("weapon");

        if( !weapon || weapon->query("skill_type") != "blade" ) {
            tell_object(me, "�����޵���ô������ѽ��\n");
            return 0;
        }
        if( me->query("max_force") < 1200 ) {
            tell_object(me, "���������Ϊ����������Ҫ��һǧ���ٵ㡣\n");
            return 0;
        }
        if( me->query("force") < 600 ) {
            tell_object(me, "��Ŀǰ�������������ٵ㣬�޷����˵�����\n");
            return 0;
        }
        if( me->query_skill("gold-blade", 1) < 90 ) {
        tell_object(me,"����Ͻ����������������죬������Ҫ��ʮ����\n");
            return 0;
        }
        if( (me->query("potential") - me->query("learned_points")) < 2 ) {
            tell_object(me, "���Ǳ�ܲ������㣬�޷����˵�����\n");
            return 0;
        }
        tell_object(me, "ѧ�˵������Ǳ�ܶ��㡣\n");
        me->add("potential", -2);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("blademan")+"/fast-blade/"+action;
}

int valid_enable(string usage)
{
        return ( usage == "blade" );
}


mapping query_action(object me, object weapon)
{
        mapping do_action;
        object enemy, weaponn;
        string actionn;
        int i, j, k, level, kee;
        level = me->query_skill("fast-blade", 1);
        level = (int) level / 10;
//        if( level > 10 ) level=10;
//if(me->query("family/family_name")=="����"&&me->query("env/����",1)&&!me->is_busy())
if (!me->is_busy())
{
if( random(9) >= 5 && me->query("sen") > 50 && !me->query_temp("f-b") )
{
            me->set_temp("f-b",1);
            enemy=offensive_target(me);
            if(!enemy) return action[random(sizeof(action))];
            for(j=0; j<level+2; j++) {
                    k = level;
                    if( level > 10 ) k = 10;
                    k = (k+1) * 2;
                    do_action = action[random(k)];
                    actionn = "\n";
                    actionn += do_action["action"];
                    if( weaponn=me->query_temp("weapon") )
       actionn = replace_string(actionn, "$w", weaponn->name());
                    message_vision(actionn, me, enemy);
                    if( random(100) > 30 ) {
                        kee = enemy->query("max_kee")/35;
                        if(kee > 70) kee=70;
          enemy->receive_wound("kee", kee,me);
                        kee = enemy->query("kee")/35;
                        if(kee > 70) kee=70;
          enemy->receive_damage("kee", kee,me);
message_vision(HIC "\n$N���㲻��������һ��������Ҫ����\n" NOR, enemy);
                        COMBAT_D->report_status(enemy);
                    }
              else
message_vision(HIC "\n$N�˱ȵ��죬���յ���������һ����\n" NOR,enemy);
                }
          if(random(me->query("cps",1)) <= 7 ) {
                me->start_busy(1);
                me->add("sen",-10);
tell_object(me,"\n��ʹ�˿쵶ն�����ڶ��������������ھ����޷����С�\n\n");
        } 
}
}
if(me->query("family/family_name")=="����") {
        me->delete_temp("f-b");
        return action[random(13)+12]; } else {
        return action[0]; }
}
void sp_att1(object me, object victim, object  weapon, int damage)
{
if(70>random(100)&&me->query("force",1)>120)
{
message_vision(sprintf(HIG"
��Ȼ$N���І��ſھ�,���β���Ҳ���żӿ�,���е�"HIY"����"HIG"Ҳ���ż�������,"HIW"
���ǧҶ�����ĵڶ�ʮ��ʽ����ʽ��"HIG"���ڲ�֪������ʹ��,ֻ��$n��æ�м�,
����֪������ȫ������,����$n���ķֲ�����֮��,������"HIY"����"HIG",�׷�
��$nȫ���к���ȥ,ֻ��������Ϣ��,$n������$N�������С�
\n"NOR),me,victim);
victim->receive_damage("kee",250);
victim->apply_condition("blade",1);
COMBAT_D->report_status(victim, 1);
me->add("force",-100);
}
}
void sp_att2(object me, object victim, object  weapon, int damage)
{
if(70>random(100)&&me->query("force",1)>120)
{
message_vision(sprintf(HIG"
$N�����Ͻ��������������ǧҶ�����Ķ�������,�����ϵ�"HIY"����"HIG"�����ޱȲ��ù�ã,
��$n��������,������ʱ,һ���Ե��ޱȵĵ�������$N��ŭ��������$n,
��$n��֪��εֵ�,ԭ�������ʧ���Ѿõĵ���,"HIR"����Ц���¡�,"HIG"
ֻ��$n���������м�,����Ī������,��$n��֪����֮���������ˡ�
\n"NOR),me,victim);
victim->receive_damage("kee",300);
victim->apply_condition("blade",2);
COMBAT_D->report_status(victim, 1);
me->add("force",-100);
}
}
void sp_att3(object me, object victim, object  weapon, int damage)
{
if(70>random(100)&&me->query("force",1)>120)
{
message_vision(sprintf(HIG"
$N�����յ�����,�����˴���ԭ��,�ƺ�����ǰ�ĵ��˺�����������,
$n��״,��������,ʹ����ѧ�еľ���ɱ��,����$N��Ҫ������$n��
����,����$n����$N������ʱ,$n���ϱ���ͻ��,��֪����,ԭ��
$N�ѻ���������Ӱ����Χס$n,��$n��֪����ӱ�,����$n����֮��,
������$Nʹ��һ��$n��δ�����ĵ���,�׷���$nȫ��ĸ���Ҫ�����һ�
ȥ��ԭ�����Ǵ�˵�еĵ���"HIC"�����ӹ��桿��
\n"NOR),me,victim);
victim->receive_wound("kee",350);
victim->apply_condition("blade",3);
COMBAT_D->report_status(victim, 1);
me->add("force",-100);
}
}
