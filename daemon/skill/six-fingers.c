#include <combat.h>
#include <ansi.h>
inherit SKILL;
void hurt(object me, object victim, object weapon, int damage);
void block(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);
void sp1(object me, object victim, object weapon, int damage);
void sp2(object me, object victim, object weapon, int damage);
void sp3(object me, object victim, object weapon, int damage);
void sp_attack(object me, object victim, object weapon, int damage);
void sp_attack1(object me, object victim, object weapon, int damage);
mapping sp_action(object me,object weapon);
string *sword_name=({
    "���̽���",
    "��������",
    "�г彣��",
    "�س彣��",
    "�ٳ彣��",
    "���󽣷�",
});

string *attack =({
//���̽��� 0~4
"$NĴָһ�飬����������ת��ʹ��"HIW"�����̽���"NOR"�е�"HIY"��������ʯ��"NOR"�����۾��Ľ�·���Ե�����$n�����ȥ������ʯ���쾪���������֮��",
"$N��͸ָ�⣬ʹ��һ��"HIG"������Ԩ�s��"NOR"��һ���ۻ뽣��ֱ��$n�����Ͻ�����֮�ˣ�������"HIW"�����̽���"NOR"�󿪴��أ�������ΰ�Ľ���",
"$NĴָ�黮��ʹ��"HIR"��"HIY"�ƿ�����"HIR"��"NOR", ����һת,ָ������$n���㡣",
"$N�����ڿն���, Ĵָָ��΢��,��$n����, ����һ��"HIG"��"HIC"���ѵ�ˮ"HIG"��"NOR"��",
"$NĴָ������Ȼ��â���䣬���μ�ת��ʹ��һ��"HIR"��"HIY"����׷��"HIR"��"NOR"����$n��ȥ��",
//�������� 5~9
"$N˫ָ������������ν������༤����ֱ��$n��ȥ������"HIW"����������"NOR"�еľ���"HIR"������ͬҫ��"NOR,
"$N���ζ�ת��һ��"HIC"�������ӿ��"NOR"�û���������Ӱ��$n��ʱ������"HIW"����������"NOR"���ν���֮��",
"$N������Ԩ, ����Ϊ׾,ָ����ǰƽָ, ʹ����"HIM"���������ȡ�"NOR"��",
"$N��������, ������,һ��[1;37m��[1;30m���ҹ[1;33m��[1;37m��[0mʹ������, ���ܽ�����Ӱ��",
"$Nʹ��[1;37m��[1;35m���б�[1;33m��[1;37m��[0m, ���н���΢��,�����û������佣��, ��$n�����ڽ���֮�¡�",
//�г彣�� 10~14
"$N̹Ȼ�ص�����ָ��ʹ��"HIC"���г彣��"NOR"�е�"CYN"��ǧ��������"NOR"���佣�ƴ󿪴��أ�������������㣬���������س���$n��ȥ",
"$N�����ָ��һ��"HIW"���г彣��"HIB"����������졯"NOR"����$n�������������׾��죬���˲��ұ���",
"$N�����������, ƽ�ƶ���,��ָ����, ������ָ���첻��,����һ��[1;37m��[1;34m����ָ·[1;37m��[0m��",
"$N��¶΢Ц, ���Ӳ���,ʹ��[1;37m����[1;31m��[1;37m΢Ц��[0m, ����������������$n�񹥶�ȥ��",
"$N��ָ�ɵ�������һ��"+HIY+"����Х���족"+NOR+", ��ָ���¶��ϵĿ���$n�������������γɵ�������������㹥��$n��",
//�س彣�� 15~19
"$N�������������ָ����˿˿����������"HIW"���س彣��"NOR"�е�"HIY"��׳־���ơ�"NOR"����׾�͹��ӵĽ�������ס$nȫ��ֱֱ����$nײȥ  ",
"$NǱ���������Ծ��ƶ���һ��"HIG"��ʱ�괺�硯"NOR"ָ��$n������ʮ����Ѩ�����ƹ��ӣ�����"HIW"���س彣��"NOR"��ĸ���",
"$N��Ȼ��ǰ���һ����һ���Ӵ��ɱ����$N����ӿ����$N���һ��"+HIR+"��ɱ�������"+NOR+"�������������������ת������㳯$n�͹���",
"$N���������������棬���μ�ת�����һ��"+HIY+"��Ǳ�����족"+NOR+"������ָ����������һ�������������·�Ҫ�����ܵ�һ��ȫ���������Ƶ�",
"$N���һ��ʹ��"HIG"�����·ת��"NOR"������ָ������һ�����߰����$n",
//�ٳ彣�� 20~24
"$NСָ���ɵ�ת����һ��"HIW"���ٳ彣��"HIR"��ѩ���צ��"NOR"����ĳ�$n��ȥ�����ƹ��棬����׽ģ����",
"$Nһ��"HIW"���ٳ彣��"NOR"����$n�ؿڣ�������ߣ�һб��Сָ��ת����$n���䣬�����������������"HIM"���ֻ�������"NOR,
"$N�����������ݰ���ת������һ��"HIW"���ٳ彣��"HIY"���������ޡ�"NOR"������������᲻�ϵĳ�$n��ȥ��",
"$N�Ų��沽����Ȼ�Ƶ���$n�ı���һ��"HIW"���ٳ彣��"HIG"������������"NOR"��$n���Ĵ�Ѩ������ȥ��",
"$N���侫�⣬����һת����Сָ������һ��"HIW"���ٳ彣��"HBRED+HIY"���չ���硯"NOR"����һ���⻡ն��$n",
//���󽣷� 25~29
"$N���ɵ�ת��Сָ��ʹ��һ��"HIC"��������衯"NOR"��ֻ��"HIY"�����󽣡�"NOR"������ȥ���������߰��б��$n",
"$Nչ����ʽ�������飬���ν�����һ�գ���һ�䣬ԽתԽ������Ȼ��һ������$n������"HIY"�����󽣡�"NOR"�е�����"HIW"���Ǽٷǿա�"NOR,
"$N��ɫ���׺��죬ֻ��$NСָ����Խ��Խ����һ��"HIY"�����󽣡�"HIY"��������ء�"NOR"������$n��",
"$NСָ�黮ʮ�֣�������������ǰ��һ��"HIY"�����󽣡�"BLINK+HIR"��ʮ������"NOR"������������ɽ������$n��ȥ��",
"$N�������Сָ�����۶���ɢ�����������һ��ĳ�$nֱ���ȥ������"HIY"�����󽣡�"NOR"֮"BLINK+HIC"�����й�ء�"NOR,
});




mapping *action = ({

//1
([ "action":
"$NĴָһ�飬����������ת��ʹ��"HIW"�����̽���"NOR"�е�"HIY"��������ʯ��"NOR"�����۾��Ľ�·���Ե�����$n$l�����ȥ������ʯ���쾪���������֮��",
        "dodge": -30,
        "parry": -20,
        "damage": 100,
        "force":  100,
        "damage_type":  "����",
        "weapon": "Ĵָ����",
]),

//2
([ "action":
"$N��͸ָ�⣬ʹ��һ��"HIG"������Ԩ�s��"NOR"��һ���ۻ뽣��ֱ��$n$l�����Ͻ�����֮�ˣ�������"HIW"�����̽���"NOR"�󿪴��أ�������ΰ�Ľ���",
        "dodge": -30,
        "parry": -20,
        "damage": 100,
        "force":  100,
        "damage_type":  "����",
        "weapon": "Ĵָ����",
]),

//3
([ "action":
"$N˫ָ������������ν������༤����ֱ��$n$l��ȥ������"HIW"����������"NOR"�еľ���"HIR"������ͬҫ��"NOR,
        "dodge": -40,
        "parry": -15,
        "damage": 150,
        "force": 150,
        "damage_type": "����",
        "weapon": "ʳָ����",
]),

//4
([ "action":
"$N���ζ�ת��һ��"HIC"�������ӿ��"NOR"�û���������Ӱ��$n��ʱ������"HIW"����������"NOR"���ν���֮��",
        "dodge": -40,
        "parry": -15,
        "damage": 150,
        "force": 150,
        "damage_type": "����",
        "weapon": "ʳָ����",
]),

//5
([ "action":
"$N̹Ȼ�ص�����ָ��ʹ��"HIW"���г彣��"NOR"�е�"CYN"��ǧ��������"NOR"���佣�ƴ󿪴��أ�������������㣬���������س���$n$l��ȥ",
        "dodge": -35,
        "parry": -20,
        "damage": 200,
        "force": 200,
        "damage_type": "����",
        "weapon": "��ָ����",
        "post_action": (: block :),
]),

//6
([ "action":
"$N�����ָ��һ��"HIW"���г彣��"BLU"����������졯"NOR"����$n$l�������������׾��죬���˲��ұ���",
        "dodge": -35,
        "parry": -20,
        "damage": 200,
        "force": 200,
        "damage_type": "����",
        "weapon": "��ָ����",
        "post_action": (: block :),
]),

//7
([ "action":
"$N�������������ָ����˿˿����������"HIW"���س彣��"NOR"�е�"HIY"��׳־���ơ�"NOR"����׾�͹��ӵĽ�������ס$nȫ��ֱֱ��ײ����$l  ",
        "dodge": 25,
        "parry": 0,
        "damage": 250,
        "force": 250,
        "damage_type": "����",
        "weapon": "����ָ����",
]),

//8
([ "action":
"$NǱ���������Ծ��ƶ���һ��"HIG"��ʱ�괺�硯"NOR"ָ��$n������ʮ����Ѩ�����ƹ��ӣ�����"HIW"���س彣��"NOR"��ĸ���",
        "dodge": 25,
        "parry": 0,
        "damage": 250,
          "force": 250,
        "damage_type": "����",
        "weapon": "����ָ����",
]),

//9
([ "action":
"$NСָ���ɵ�ת����һ��"HIW"���ٳ彣��"HIR"��ѩ���צ��"NOR"����ĳ�$n$l��ȥ�����ƹ��棬����׽ģ����",
        "dodge": -50,
        "parry": -20,
        "damage": 300,
        "force": 300,
        "damage_type": "����",
        "weapon": "Сָ����",
        "post_action": (: hurt :),
]),

//10
([ "action":
"$Nһ��"HIW"���ٳ彣��"NOR"����$n�ؿڣ�������ߣ�һб��Сָ��ת����$n$l���䣬�����������������"HIM"���ֻ�������"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 300,
        "force": 300,
        "damage_type": "����",
        "weapon": "Сָ����",
]),

//11
([ "action":
"$N���ɵ�ת��Сָ��ʹ��һ��"HIC"��������衯"NOR"��ֻ��"HIW"�����󽣡�"NOR"������ȥ���������߰��б��$n$l",
        "dodge": -50,
        "parry": -20,
        "damage": 250,
        "force": 250,
        "damage_type": "����",
        "weapon": "Сָ����",
]),

//12
([ "action":
"$Nչ����ʽ�������飬���ν�����һ�գ���һ�䣬ԽתԽ������Ȼ��һ������$n$l������"HIW"�����󽣡�"NOR"�е�����"HIW"���Ǽٷǿա�"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 250,
        "force": 250,
        "damage_type": "����",
        "weapon": "Сָ����",
        "post_action": (: hurt :),
]),

//13
([ "action":
HIW"$N���һ�����Ķ�ȫ���������ھ���ת��˫�������뷢��ʮָ�ֵ�����ʱ�����ݺᣬ��������Ѹ�׼��绥�弤����$n��ȥ"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 300,
        "force": 300,
        "damage_type": "����",
        "weapon": "���ν���",
        "post_action": (: conti :),
]),

//14����(һ)
([ "action":
HIY"\n$N���о����ʢ�����:\n\n"
HIW"             ��\n"
HIR"                ����"HIW"��"HIG"����"HIW"��"HIM"������"HIW"!!\n"
"                                     ��\n"
"$NͻȻ���ˡ�һ���ķ�����������ӯ��һ����������$n�����ȥ\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
        "force": 300,
        "damage_type": "����",
        "post_action": (: sp1 :),
]),

//15����(��)
([ "action":
HIY"\n$N�������:\n\n"NOR
GRN"                   �� ����̤������·��һ�絣���Ž�� ��\n\n"
HIW"��ϡ��貨΢�����ľ�������û���������Ӱ��Χ$n��˫�ּ��䣬�����뷢����ʱ
��$n�������ν����Ŀ��ҽ���֮�У���������������Ҫ��$nȫ��˺�ѣ���������
������ϵĽ���ɱ��\n\n"
"                         �� "HIY" ��"HIM" ��"HIW" ��"RED" ��"HIC" ��"BLU" �� "HIW" ��\n\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
          "force": 300,
        "damage_type": "����",
        "post_action": (: sp2 :),
]),


//16����(��)
([ "action":
HIY"\n$N�����ղ�������:\n\n"NOR
YEL"                   �� ���¸�������ڣ����ǲ���ҫ���� ��\n\n"
HIW"��Ȼ��߸�Ծ�������ڿգ����Ƹ��أ����������ߵ����ν���������$n����ҪѨ��
ȥ���谵֮�У�ֻ���ߵ���â���ҫ�ۣ����Ǵ�������������еľ�ѧ\n\n"
"                           ��"HIM" ��"HIY" ��"HIC" ��"HIG" ��"HIR" ��"HIW" ��\n\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
        "force": 300,
        "damage_type": "����",
        "post_action": (: sp3 :),
]),
//17���̽���
([ "action":
"$N"HIR"ʹ���������еġ����̽��� ����Ĵָ��������ʵ�ʣ���"NOR"$n"HIR"��ȥ��"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                330,
                "force"      :                330,
                "post_action":                (: sp_attack :),
                "damage_type":               "����"
]),
//18��������
([ "action":
"$N"HIY"ʹ���������еġ��������� ����ʳָ��������ʵ�ʣ���"NOR"$n"HIY"��ȥ��"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                340,
                "force"      :                340,
                "post_action":                (: sp_attack :),
                "damage_type":               "����"
]),
//19�г彣��
([ "action":
"$N"HIC"ʹ���������еġ��г彣�� ������ָ��������ʵ�ʣ���"NOR"$n"HIC"��ȥ��"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                350,
                "force"      :                350,
                "post_action":                (: sp_attack :),
                "damage_type":               "����"
]),
//20�س彣��
([ "action":
"$N"HIG"ʹ���������еġ��س彣�� ��������ָ��������ʵ�ʣ���"NOR"$n"HIG"��ȥ��"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                360,
                "force"      :                360,
                "post_action":                (: sp_attack :),
                "damage_type":               "����"
]),
//21�ٳ彣��
([ "action":
"$N"HIB"ʹ���������еġ��ٳ彣�� ����Сָ��������ʵ�ʣ���"NOR"$n"HIB"��ȥ��"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                370,
                "force"      :                370,
                "post_action":                (: sp_attack :),
                "damage_type":               "����"
]),
//22���󽣷�
([ "action":
"$N"HIM"ʹ���������еġ����󽣷� ����Сָ��������ʵ�ʣ���"NOR"$n"HIM"��ȥ��"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                380,
                "force"      :                380,
                "post_action":                (: sp_attack :),
                "damage_type":               "����"
]),
//23������һ
([ "action":
"$N����������"BLINK+HBRED+HIY"��Բ�����⣬��ת��Ϣ��"NOR"�����⣬�����䷢����$n��ȥ��",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack1 :),
                "damage_type":               "����"
]),

});

void hurt(object me, object victim, object weapon, int damage)
{
        int force;
        if( random(100)>50 && !me->query_temp("conti",1) &&
            me->query("family/family_name")=="�μ�" )
        {
          force = me->query_skill("sunforce",1);
          if(force > 250) force=250;
          victim->receive_damage("kee", 50+force );
          message_vision(sprintf(HIM"$N�����񽣹������������$n���ڣ�$n����ͻȻһ����ף����������˲�С�����ˡ�\n"NOR),me,victim);
          COMBAT_D->report_status(victim);
          me->add("force",-force);
        }

        else
        {
          message_vision(sprintf(HIW"$n�Ǳ���������$N�Ĺ�������, ���Ѵ����ܡ�\n"NOR),me,victim);
        }
}
void block(object me, object victim, object weapon, int damage)
{
        if( random(100)>50 && !me->query_temp("conti",1) &&
            me->query("family/family_name")=="�μ�" )
        {
          victim->apply_condition("blockade",3);
          message_vision(sprintf(HIY"$N�����񽣰���һ��ָ�ַ������ֵ���$n�����д�Ѩ��\n"NOR),me,victim);
          victim->start_busy(1);
          COMBAT_D->report_status(victim);
        }
        else
        {
          message_vision(sprintf(HIW"$N��ͼ��һ��ָ����$n, ���Ǳ�$n���˿�����\n"NOR),me,victim);
        }
}
void conti(object me, object victim, object weapon, int damage)
{
         int i,time = 3;
        if( me->query("force_factor") >= 10 &&
            me->query("family/family_name")=="�μ�" && 70>random(100) )
        {
          if( me->query_temp("conti") == 0 )
          {
            me->delete_temp("super");
            me->set_temp("conti",1);
      message_vision(sprintf("\n[1;33m$N��Ȼ����������[1;5;36m���ΰ�Ѩ[0m��[1;5;36m���಻��[0m[1;33m��Ҫ��, ������Ȼ��Ȼ���������, ���ղ���!![0m\n"),me);
              for(i=1;i<=time;i++)
              COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
            me->delete_temp("conti");
          }
        }
}

void sp1(object me, object victim, object weapon, int damage)
{
int i;
if(me->query("env/������","YES")&&!me->query_temp("conti",1))
{
  for(i=1;i<=6;i++)
  {
    switch(i)
    {
     case 1:
message_vision(sprintf("$N������"HIW"�����̽���"HIY"����ӿ��ɽ��ϯ�����¡�"NOR"�����⣬��$n��ͷն��!\n"),me,victim);
     break;
     case 2:
message_vision(sprintf("\n$N������"HIW"����������"HIG"�������鶯���������ơ�"NOR"�����⣬��$n��֫����!\n"),me,victim);
     break;
     case 3:
message_vision(sprintf("\n$N������"HIW"���г彣��"HIC"���������죬ӯ���ɾá�"NOR"�����⣬��$n��ǰ����!\n"),me,victim);
     break;
     case 4:
message_vision(sprintf("\n$N������"HIW"���س彣��"HIM"����������Ծ��ƶ���"NOR"�����⣬��Ȼ�����$n!\n"),me,victim);
     break;
     case 5:
message_vision(sprintf("\n$N������"HIW"���ٳ彣��"CYN"��Ӧ�����ң���ò�����"NOR"�����⣬��Ӱ��Χס$n!\n"),me,victim);
     break;
     case 6:
message_vision(sprintf("\n$N������"HIW"�����󽣡�"BLU"�����ܲ��������桯"NOR"�����⣬����������$n!\n"),me,victim);
     break;
     }
message_vision(sprintf(HIR"$Nȷʵ����$nҪ����$n��ʱѪ�����ء�\n"NOR),me,victim);
          victim->receive_damage("kee",150);
          COMBAT_D->report_status(victim);
          me->add("force",-20);
   }
message_vision(sprintf(HIW"\n��ʹ������,һʱ֮��������ս!\n"NOR),me,victim);
if(!me->query_temp("weapon")){
me->start_busy(1);
}
else
{
weapon=me->query_temp("weapon");
if(weapon->query("six_no_delay") && me->query("family/family_name")=="�μ�")
{
message_vision("����$N���е�$nȴ�����˵������⣬��$N�������ظ�����ʱ����ս��!!\n",me,weapon);
me->add("force",-20);
}
else
{
me->start_busy(1);
}
}
 }
}
void sp2(object me, object victim, object weapon, int damage)
{
if(!me->query_temp("conti",1)) {
        int six, force;
        six = me->query_skill("six-fingers",1);
        force = me->query_skill("sunforce",1);
        if(force>250) force=250;
          message_vision(sprintf(HIG"$N������Х��˫�ֻ�Ԫ��һ�й�ֱ�룬������������$n���϶Դ�����!!\n"NOR),me,victim);
          victim->receive_damage("kee",six+force);
          victim->apply_condition("bleeding",5);
          COMBAT_D->report_status(victim);
}
}
void sp3(object me, object victim, object weapon, int damage)
{
if(!me->query_temp("conti",1)) {
        int force;
        force = me->query_skill("sunforce",1);
        if(force > 350) force=350;
          message_vision(sprintf(HIC"$n��ǰ�����ܵ�$N���ν���ǣ����$n�����Ƹ�������!!\n"NOR),me,victim);
          victim->receive_damage("kee",force);
          victim->start_busy(1);
          COMBAT_D->report_status(victim);
}
}
void sp_attack(object me, object victim, object weapon, int damage)
{
    int i,sklv,str,range;
    string sp_name;
    if(!me || !victim) return ;
    if(!damage) return ;
    if(me->query("force") < 200) return ;
    sklv=me->query_skill("six-fingers",1);
    if(sklv > 120 && userp(me) && !wizardp(me)) sklv=120;
    str=victim->query("str");
    if(str > 35 ) str=35;
    sklv*=(5+random(3));
    str*=(6+random(5));
    range=me->query_temp("skills/six-fingers");
    if(!range) return;
    range*=5;
    switch(random(5))
    {
      case 0..3:
        i=range+random(4);
        message_vision(attack[i],me,victim);
        if(random(me->query("combat_exp")) >
           random(victim->query("combat_exp"))/6){
          message_vision("\n$N���㲻�������϶�ʱ�����һ��Ѫ���ܵĽ��ۡ�\n" , victim);
          victim->set_temp("no_armor_effect",1);
          victim->receive_damage("kee",sklv-str,me);
          COMBAT_D->report_status(victim);
          if(range==10)
            block(me,victim,weapon,damage);
          if(range==20)
            hurt(me,victim,weapon,damage);
        }
        else{
          message_vision("\n$N����һ��, ���յ���������һ�С�\n" , victim);
        }
        break;
      case 4:
       for(i=range;i<(range+5);i++){
        if(i >=sizeof(attack)) continue;
        message_vision(attack[i],me,victim);
        if(random(me->query("combat_exp")) >
           random(victim->query("combat_exp"))/6){
          message_vision("\n$N���㲻�������϶�ʱ�����һ��Ѫ���ܵĽ��ۡ�\n" , victim);
          me->add("force",-30);
          victim->set_temp("no_armor_effect",1);
          victim->receive_damage("kee",(sklv-str)*2,me);
          COMBAT_D->report_status(victim);
          if(range==20)
            hurt(me,victim,weapon,damage);
        }
        else{
          message_vision("\n$N����һ��, ���յ���������һ�С�\n" , victim);
        }
       }
       if( random(me->query("cps")) < 4 ) {
          me->add("force",-100);
          range/=5;
          sp_name=sword_name[range];
          message_vision("\n$Nʹ��"HIY"��"+sp_name+"��"NOR"�����ڶ������㣬��������һʱ����Ϊ��\n",me);
          me->start_busy(1);
       }
       break;
    }
}
void sp_attack1(object me, object victim, object weapon, int damage)
{
    int i,sklv,str,limit;
    if(!me || !victim) return ;
    if(!damage) return ;
    if(me->query("force") < 1000)
      return notify_fail("����������㣬�޷�ʹ��������������!!\n");
    sklv=me->query_skill("six-fingers",1);
    if(sklv > 120 && userp(me) && !wizardp(me)) sklv=120;
    str=victim->query("str");
    sklv*=(5+random(3));
    str*=(6+random(5));
    switch(me->query("combat_exp")){
      case 2000000..5000000:
        limit=3;
        break;
      case 5000001..8000000:
        limit=2;
        break;
      case 8000001..32000000:
        limit=1;
        break;
      default:
        tell_object(me,"��е�ͷ�Ի��������޷�ʹ��������!!\n");
        return ;
        break ;
    }
    if(wizardp(me) && me->query("env/��������")) limit=0;
    for(i=0;i<sizeof(attack);i++){
     if(i % 5 >= (5-limit)) continue;
     message_vision(attack[i],me,victim);
     if(random(me->query("combat_exp")) >
        random(victim->query("combat_exp"))/6){
       message_vision("\n$N���㲻�������϶�ʱ�����һ��Ѫ���ܵĽ��ۡ�\n" , victim);
       me->add("force",-30);
       victim->receive_damage("kee",(sklv-str)*2,me);
       COMBAT_D->report_status(victim);
     }
     else{
       message_vision("\n$N����һ��, ���յ���������һ�С�\n" , victim);
     }
    }
    if( random(me->query("cps")) < 4 ) {
       me->add("force",-100);
       message_vision("\n$Nʹ��"HIY"������������������"NOR"�����ڶ������㣬��������һʱ����Ϊ��\n",me);
       me->start_busy(1);
    }
}
mapping sp_action(object me,object weapon)
{
        int level=(int)(me->query_skill("six-fingers",1));
        int plus,value;

        if(level/2 > random(100) && me->query_temp("super")){
          me->delete_temp("super");
          me->set_temp("skills/six-fingers",6);
          return action[22];
        }
        value=random(2100);
        if(value > 2000) return action[22];
        else{
          plus=(int)(value/200);
          if(plus==10) plus--;
          if(plus-4>=0)
            me->set_temp("skills/six-fingers",plus-4);
          return action[12+plus];
        }
}
mapping query_action(object me, object weapon)
{
        int level=(int)(me->query_skill("six-fingers",1));

        if(me->query("marks/six-fingers")==3 && level >=100 && !me->query_temp("conti"))
          return sp_action(me,weapon);

        if ( level < 10 )
           return action [random(3)];
        else if ( level < 20 )
           return action [random(5)];
        else if ( level < 30 )
           return action [random(7)];
        else if ( level < 40 )
           return action [random(9)];
        else if ( level < 50 )
           return action [random(11)];
        else if ( level < 60 )
           return action [random(13)];
        else if ( level < 70 )
           return action [random(9)+4];
        else if ( level >= 70 && me->query_temp("super",1))
           return action [12];
        else if ( level >= 100 && me->query("marks/six_sp")==3 &&
                  me->query("family/family_name") == "�μ�")
           return action [random(12)+4];
        else
           return action [random(8)+5];
}

int valid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("�������񽣻���Ҫ���ְ�....\n");
        if(me->query_skill("force")*3<=me->query_skill("six-fingers",1))
          return notify_fail("��Ļ����������ܲ���, �޷��������񽣡�\n");
        if(me->query_skill("literate")*3<=me->query_skill("six-fingers",1))
          return notify_fail("���֪ʶ���㣬�޷�����������ȫ��������֮���ľ�Ҫ�仯��\n");
        return 1;
}

int valid_enable(string usage)
{
      if(this_player()->query_skill("six-fingers",1) >= 45)
         {
            return (usage=="unarmed"||usage=="stabber")||(usage=="parry");
         }
          return (usage=="unarmed");
}

int practice_skill(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("�������񽣻���Ҫ���ְ�....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("��ľ��������޷���ϰ��\n");
        if( (int)me->query("kee") < 30 )
          return notify_fail("����������,��Ϣһ���ټ�������.\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("Ŀǰ��������,��Ϣһ���������.\n");
        me->receive_damage("gin", 5);
        me->receive_damage("kee", 30);
        me->add("force", -1);
        return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("scholar")+"/six-fingers/"+action;
}
