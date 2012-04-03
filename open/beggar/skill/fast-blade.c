// fast-blade.c by konn
#include <ansi.h>
#include <combat.h>
inherit SKILL;

mapping *action = ({
([ "action" : HIG"$N�����鶯, �����ͷ, "+HIM+"���ǧҶ������һʽ������ʽ��"+HIG+"ʹ�˳���, ���е�"+HIY+"$w"+HIG+"�ɿ����$nֱ������, ��Ҳ��$n������ȥ, �쵶����, �Ƶ�$n��æ���ҡ�"NOR,
        "dodge":   -10,
        "parry":   -20,
        "damage":   20,
        "force":    60,
        "damage_type" : "����",
]),

([ "action" : HIG"$N�������һ��, ˳��һ��"+HIM+"���ǧҶ�����ڶ�ʽ��������衱"+HIG+"��$nϮ������, $N���κ�ȻƮ��, ��������, ����"+HIY+"$w"+HIG+"�ɿ������, �����Ӱ, ֻ����$n�ۻ����ҡ�"NOR,
        "dodge":   -20,
        "parry":   -10,
        "damage":   20,
        "force":    20,
        "damage_type" : "����",
]),

([ "action" : HIG"$N��Ȼ����һ��, ������˰벽, ʹ��һ��"+HIM+"���ǧҶ��������ʽ���˲�ն����"+HIG+", ����"+HIY+"$w"+HIG+"����$n�Ĵ���, ���ŵ���һ��, ˳����$n�����ʻ��˹���, ��ն$n�����ۡ�"NOR,
        "dodge":   -30,
        "parry":    20,
        "damage":   20,
        "force":    40,
        "damage_type" : "����",
]),

([ "action" : HIG"$N��������, ����������б, һ���ɳ�, ����һʽ"+HIM+"���ǧҶ��������ʽ������������"+HIG+"ֱ��$n�۰򿳵�, ����ɿ�Ĵ�$n�ұ�ɨ��ֱ��������, ������ۿ���, $n���ŵ���Ҫ�ӿ���"NOR,
        "dodge":    20,
        "parry":    10,
        "damage":   30,
        "force":    30,
        "damage_type" : "����",
]),

([ "action" : HIG"$N���е�������, ��������, ������ǰ΢��, һʽ"+HIM+"���ǧҶ��������ʽ���ΰݱ�����"+HIG+"��$n����ǰ�к��˹���, ˲��$N����һ��, ֱ��$n�����, �Ƶ�$n���������������"NOR,
        "dodge":   -20,
        "parry":   -10,
        "damage":   30,
        "force":    40,
        "damage_type" : "����",
]),

([ "action" : HIG"$N������ת, ���²�ͣ���ƶ���, ����$n��ͣ��Ѱ������, $N��Ȼʹ��һ��"+HIM+"���ǧҶ��������ʽ��ת����ɽ��"+HIG+", �������ұ�һת, б�̴�һ������$n����, ��$n����ʱ�Ѳ�����Ӧ�ˡ�"NOR,
        "dodge":   -30,
        "parry":   -10,
        "damage":   30,
        "force":    30,
        "damage_type" : "����",
]),


([ "action" : HIG"$N���������˰벽, �����Գ�, ������ƫ��, һ��"+HIM+"���ǧҶ��������ʽ���������š�"+HIG+"��$nն�˹���, $n��æ�м�, $N�����󻬰벽, ��������, ����ֱ��, ��$n�ؿڿ���������"NOR,
        "dodge":   -35,
        "parry":   -20,
        "damage":   40,
        "force":    50,
        "damage_type" : "����",
]),

([ "action" : HIG"$N���еĵ�һ������, ˫�ȶ��˸�����, ��Ȼ��$n�ɱ���ȥ, ���е�"+HIY+"$w"+HIG+"����ǰ�������鿳, һ��"+HIM+"���ǧҶ�����ڰ�ʽ���׵罻����"+HIG+"ʹ�˳���, Ѹ�ٵ���$n���Դ��к��˹�����"NOR,
        "dodge":   -40,
        "parry":   -20,
        "damage":   40,
        "force":    30,
        "damage_type" : "����",
]),

([ "action" : HIG"$N����ȫ������, �����ӵ���������ȫ��, ���������ʳָ������Ѩ���, ����ʹ����ǧ��׹��, ����ʹ��һ��"+HIM+"���ǧҶ�����ھ�ʽ��������ɽ��"+HIG+"���͵���$n��������, �ۼ�$n�����ѻ����ˡ�"NOR,
        "dodge":   -10,
        "parry":   -10,
        "damage":   50,
        "force":    10,
        "damage_type" : "����",
]),

([ "action" : HIG"$N�������һ��, �������������ǧҶ�����ľ�Ҫ, ��ȻѶ�ݵ���$n����"+HIM+"���ǧҶ������ʮʽ���ֻ�������"+HIG+"����, ������������ˮ���Ʈ��, ��Ʈ����, "+HIY+"$w"+HIG+"��������$n��С��������ȥ, ���д���, �������ᡣ"NOR,
        "dodge":   -10,
        "parry":   -20,
        "damage":   50,
        "force":    30,
        "damage_type" : "����",
]),

([ "action" : HIG"$N��"+HIY+"$w"+HIG+"��õ�ˮ��©, �������Ҷ, ��Ȼת��Ϊ��, ��$nʩչ��"+HIM+"���ǧҶ������ʮһʽ�������Ϸɡ�"+HIG+", $N���е�"+HIY+"$w"+HIG+"���ٵķ�����, �ֱ����ϡ��¡������ĸ���·��$n����, $n�������޷��м��ˡ�"NOR,
        "dodge":   -20,
        "parry":   -20,
        "damage":   50,
        "force":    32,
        "damage_type" : "����",
]),


([ "action" : HIG"$N���ƴ���, ��Ȼʹ��һ��"+HIM+"���ǧҶ������ʮ��ʽ�����б��¡�"+HIG+", �������ʸ��ɿ���ǰ��, ���е�"+HIY+"$w"+HIG+"�����趯�ķɿ��쳣, ֱ���й�, ���ĵ���һ��, ����$n�����, ���б仯֮��, $nʵ�����㲻�ס�"NOR, 
        "dodge":   -10,
        "parry":    20,
        "damage":   60,
        "force":    35,
        "damage_type" : "����",
]),

([ "action" : HIG"$N��$n��߲�ͣ���ƶ�, һ��"+HIM+"���ǧҵ������ʮ��ʽ��������ͼ��"+HIG+"��������, ��Ȼ�����е�"+HIY+"$w"+HIG+"����$n�ĵ�, �������ǵ���һת, ��$n��С��ֱ�����, $N������"+HIY+"$w"+HIG+"��$n������б������ȥ, $n��æ����ܿ����С�"NOR,
        "dodge":   -30,
        "parry":   -20,
        "damage":   60,
        "force":    20,
        "damage_type" : "����",
]),

([ "action" : HIG"$N�����е�"+HIY+"$w"+HIG+"�ɿ������, һ��"+HIM+"���ǧҶ������ʮ��ʽ�����Ǹ��¡�"+HIG+", ����ֱȡ$n������, �������š�����ʮ���ȡ�, ��$n���Ż����˹���, ��ʽ����ǰ��δ��, ��Ȼ����һת, �ݺݵ���$n���Ұ��ӿ��˹�����"NOR,
        "dodge":   -10,
        "parry":   -20,
        "damage":   60,
        "force":    10,
        "damage_type" : "����",
]),

([ "action" : HIG"$N������������"+HIY+"$w"+HIG+", ����������$N�����ܷ����ٱ���, һ��"+HIM+"���ǧҶ������ʮ��ʽ���ɹ��ظʡ�"+HIG+", �����Ӱ, "+HIY+"$w"+HIG+"Ѹ�ݵ���$Nͷ���Ϸ�����, ��Ȼ�����ҵ���$nӭ������, ֻ����$n�ҽ�һ��, �ۿ�$n�Ѿ����ܻ����ˡ�"NOR,
        "dodge":   -10,
        "parry":   -30,
        "damage":   60,
        "force":    30,
        "damage_type" : "����",
]),

([ "action" : HIG"$N��"+HIY+"$w"+HIG+"������һ��, ��\�˸�����������, ���������תһȦ, ���е�"+HIY+"$w"+HIG+"ͻȻ��$n���̶���, ������һ��"+HIM+"���ǧҶ������ʮ��ʽ���ص�ʽ��"+HIG+", $N�ɿ����$n����������ʮ�ŵ�, ��������, ���кݶ�, 
�ۿ�$n��Ҫ�����ˡ�"NOR,
        "dodge":    20,
        "parry":   -20,
        "damage":   70,
        "force":    30,
        "damage_type" : "����",
]),


([ "action" : HIG"$N�۹���·, �����˷�, �۾��������$n������, $N��"+HIY+"$w"+HIG+"��������, ʹ��"+HIM+"���ǧҶ������ʮ��ʽ������������"+HIG+", ֻ����������, $Nȫ�����±�������£����, ��Ȼ��"+HIY+"$w"+HIG+"һ���, ������, �ı��, �ֱ𼰻���$nȫ������
�˴�Ҫ����"NOR,
        "dodge":    30,
        "parry":   -20,
        "damage":   80,
        "force":    40,
        "damage_type" : "����",
]),

([ "action" : HIG"$N��ӰƮ��, ��������, ���е�"+HIY+"$w"+HIG+"����ķ�����, ������"+HIM+"���ǧҶ������ʮ��ʽ������·��"+HIG+", ��$n��һ����, ����һ��һ��, ��$n�������Ѩ�к�����, ��������Ҫ��, ��$n�е����ֲ���, ���޷���������"NOR,
        "dodge":   -30,
        "parry":   -10,
        "damage":   80,
        "force":    30,
        "damage_type" : "����",
]),

([ "action" : HIG"$N���������ķ�, ֻ��$Nͷ��ð��˿˿����, "+HIM+"���ǧҶ������ʮ��ʽ����תǬ����"+HIG+"Ѹ�ݵ�ʹ��, ����ͻȻ������ת, �ֲ��������ϱ�, $n�Ѹе�ͷ��, $N˲���۽�$n�����, ����"+HIY+"$w"+HIG+"����$n�Դ����¡�"NOR,
        "dodge":    30,
        "parry":   -20,
        "damage":   90,
        "force":    15,
        "damage_type" : "����",
]),

([ "action" : HIG"$N��������, ���ᵶ��, ��������, һ��"+HIM+"���ǧҶ�����ڶ�ʮʽ���ϲ���ɽ��"+HIG+"��$n�к�����, $N���е�"+HIY+"$w"+HIG+"������������, ��δ��, ���ȵ�, һ����ɲ��"+HIY+"$w"+HIG+"������$nϮ������, �Ƶ�$n��������, ����ǿ����"+HIY+"$w
"+HIG+"�ָ��ſ��˹���, �����ͻ���ɽ֮�ơ�"NOR,
        "dodge":   -10,
        "parry":   -10,
        "damage":   90,
        "force":    20,
        "damage_type" : "����",
]),

([ "action" : HIG"$N�����Ƽ�, ��������, ƬƬ����, ��һ��"+HIM+"���ǧҶ�����ڶ�ʮһʽ����ն��������"+HIG+"��$nϮ�ڶ���, ������$n��С�����ұۡ����ȴ�, ���ű�ת����, ��ת��������, $Nȫ�����±������ڵ���֮��, ͻȻһ��������$n���˹���,
ֱ��$n���ų��˹�ȥ��"NOR,
        "dodge":    30,
        "parry":   -30,
        "damage":  100,
        "force":    30,
        "damage_type" : "����",
]),


([ "action" : HIG"$N����һ��, �����ֶ���һ��"+HIY+"$w"+HIG+", ˫���䷢, �绢����, ��������, �ֵ����, һ��"+HIM+"���ǧҶ�����ڶ�ʮ��ʽ���������족"+HIG+"ʹ��, �����̹ſ���ٵذ�������ǧ, ���·ת, $N����Ʈ������, ��������, $nȫ��������, ����
������ڳ�,��·������˷�Ϯ����ȥ�� "NOR,
        "dodge":    25,
        "parry":   -24,
        "damage":  110,
        "force":    43,
        "damage_type" : "����",
]),
});

//can learn

int valid_learn(object me)
{
        object weapon = me->query_temp("weapon");

        if( !weapon || weapon->query("skill_type") != "blade" ) {
            tell_object(me, "�����޵���ô������ѽ?\n");
            return 0;
        }
        if( me->query("max_force") < 1500 ) {
            tell_object(me, "���������Ϊ����, ����Ҫ��һǧ��ٵ㡣\n");
            return 0;
        }
        if( me->query("force") < 1000 ) {
            tell_object(me, "��Ŀǰ����������һǧ��, �޷����˵�����\n");
            return 0;
        }
        if( me->query_skill("gold-blade", 1) < 90 ) {
            tell_object(me, "����Ͻ�����������������, ������Ҫ��ʮ����\n");
            return 0;
        }
        if( (me->query("potential") - me->query("learned_points")) < 3 ) {
            tell_object(me, "���Ǳ�ܲ�������, �޷����˵�����\n");
            return 0;
        }
	if( me->query_skill("fast-blade", 1)*20 > me->query("bellicosity") ) {
            tell_object(me, "��ɱ��̫��, �����޷�������ǧҶ�����ľ�Ҫ��\n");
            return 0;
        }

        tell_object(me, "ѧ�˵������Ǳ�ܡ���������������㡣\n");
        me->add("gin", -3);
        me->add("kee", -3);
        me->add("sen", -3);
        me->add("potential", -3);
        return 1;
}

// perform blade.fast-dest && perform blade.fast-die

string perform_action_file(string action)
{
        return CLASS_D("blademan")+"/fast-blade/"+action;
}

// can enable

int valid_enable(string usage)
{
        return ( usage == "blade" );
}

// action message

mapping query_action(object me, object weapon)
{
        mapping do_action;
        object *enemy, weaponn;
        string actionn;
        int i, j, k, level, kee;

	level = me->query_skill("fast-blade", 1);
        level = (int) level / 10;
        if( level*10 > me->query_skill("fast-blade", 1) )
        level --;
    if(me->query("family/family_name")=="����")
{
        if( random(5) == 0 && me->query("sen") > 15 ) {
            enemy = me->query_enemy();
            for(i=0; i<sizeof(enemy); i++) {
                for(j=0; j<level+4; j++) {
                    k = level;
                    if( level > 10 ) k = 10;
                    k = (k+1) * 2;
                    do_action = action[random(k)];
                    actionn = "\n";
                    actionn += do_action["action"];
		    if( weaponn=me->query_temp("weapon") )
                        actionn = replace_string(actionn, "$w", weaponn->name());
                    message_vision(actionn, me, enemy[i]);
                    if( random(me->query("combat_exp")) >
                        random(enemy[i]->query("combat_exp"))/5 ) {
                        kee = enemy[i]->query("eff_kee");
                        enemy[i]->add("eff_kee", (int) -kee/20);
                        kee = enemy[i]->query("kee");
                        enemy[i]->add("kee", (int) -kee/20);
                        message_vision(HIC "\n$N���㲻��, ����һ��������Ҫ����\n" NOR, enemy[i]);
                        COMBAT_D->report_status(enemy[i]);
                    }

                    else message_vision(HIC "\n$N�˱ȵ���, ���յ���������һ����\n" NOR, enemy[i]);
                }
            }
}
            if( random(me->query("cps")) < 10 ) {
                me->add("sen", -10);
                me->add("kee", -30);
                tell_object(me,
                     "\n��ʹ�˿쵶ն��, ���ڶ�������, �����ھ����޷����С�\n\n");
            }
        }
        if( level > 10 ) level = 10;
        i = (level+1) * 2;
        if( i == 21 ) {
            enemy = me->query_enemy();
            for(j=0; j<sizeof(enemy); j++)
                enemy[j]->start_busy(3);
        }
        return action[random(i)];
}

