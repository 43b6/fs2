inherit SKILL;

#include <ansi.h>

string *dodge_msg = ({

"
        "HIW"$n�چ���"HIR"������־�"HIW"��,��"HIG"��"HIY"��"HIG"��"HIW"��Ϊ��
                �������������̸�,���ҡҷ"NOR"

ֻ��$N�Ĺ������紵����ǿ��һ��,$n�·��������Ʈ��,˿������Ӱ�졣\n",
"
        "HIW"$n�چ���"HIR"������־�"HIW"��,��"HIG"��"HIC"��"HIG"��"HIW"��Ϊ��
                �������,Ʈ���Ĵ�,��������"NOR"

$N�������ڵĹ���,ֻ������$n�Ĳ�Ӱ,���޻���$n��\n",
"
        "HIW"$n�چ���"HIR"������־�"HIW"��,��"HIG"��"NOR+GRN"��"HIG"��"HIW"��Ϊ��
                ��̤��Ӱ����,�û�ǧ��,$N����������֮��"NOR"

$N���ŵ����˲���,�������ƾʹ��߽⡣\n",
"
        "HIW"$n�چ���"HIR"������־�"HIW"��,��"HIG"��"HIR"��"HIG"��"HIW"��Ϊ��
                ͻȻ����ð�������һ�,�۱����,�������"NOR"

$n��ȫ���һ�ۼ���˫����,�Ա����������𾢽�$N�Ĺ��Ƹ������ˡ�\n",
"
        "HIW"$n�چ���"HIR"������־�"HIW"��,��"HIG"��"NOR+YEL"ɽ"HIG"��"HIW"��Ϊ��
                ��������,�ſ�˫��,������ɽ"NOR"

$N�Ĺ����·����һ��ɽһ��,�޷���ҡ��$n�ֺ���\n",
});


int valid_enable(string usage){
        return ( usage=="dodge" || usage=="move" || usage=="parry");
}

int practice_skill(object me){
        return notify_fail(HIR"������־�"NOR"�޷�������ϰ������\n");
}

string query_dodge_msg(string limb){
        return dodge_msg[random(sizeof(dodge_msg))];
}
