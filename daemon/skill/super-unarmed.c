
#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_attack2(object me, object victim, object  weapon, int damage);
void sp_attack3(object me, object victim, object  weapon, int damage);
void sp_attack4(object me, object victim, object  weapon, int damage);
void sp_attack5(object me, object victim, object  weapon, int damage);
void sp_attack6(object me, object victim, object  weapon, int damage);
void sp_attack7(object me, object victim, object  weapon, int damage);
void sp_attack8(object me, object victim, object  weapon, int damage);
void sp_attack9(object me, object victim, object  weapon, int damage);
void sp_attack10(object me, object victim, object  weapon, int damage);

int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int white=this_player()->query("/functions/white/level",1);
int nine=this_player()->query("/functions/nine/level",1);
int gen=this_player()->query("/functions/gen/level",1);
int ice=this_player()->query("/functions/ice/level",1);
int purple=this_player()->query("/functions/purple/level",1);
int black=this_player()->query("/functions/black/level",1);
int bluesea=this_player()->query("/functions/bluesea/level",1);
int goldsun=this_player()->query("/functions/goldsun/level",1);
int blood=this_player()->query("/functions/blood/level",1);
int green=this_player()->query("/functions/green/level",1);

int sp_value;

string *unarmed_parry_msg = ({
"\n$n����"HIG"�������ķ�"NOR"��֮"HIG"�����١�"NOR"��ֻ��$n��߸��ֳ���ɫ���ֽ�$N���Ƶ�����\n"NOR,
"\n$n����"HIW"�������ķ�"NOR"��֮"HIC"������������"NOR"��ֻ��$n������������������$N�޷�׽��\n",
"\n$n����"MAG"���Ǻ��ķ�"NOR"��֮"MAG"���Ǻ�������"NOR"��$N���α�һ����ɫ������ǣ��\n",
        });




mapping *action = ({
//1
        ([      
                "action"     :               HIW"$N������������������ʹ���˻��챦����һʽ�������̡���˲ʱ$N��������������������ס$n"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack1 :),
                "damage_type":               "����"
        ]),
//2
        ([     
                "action"     :               HIW"$N����������˫�ƣ�ʹ�����챦���ڶ�ʽ"HIM"��õ��ϼ��"HIW"��������������һ��ϼ��Ѹ�ٵı���$n"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack2 :),
                "damage_type":               "����"
        ]),
//3
        ([   
                "action"     :               HIW"$N���ھ�����һ���ᾢ�����ڵ��ϣ�ʹ���˻��챦������ʽ"HIY"�������ء�"HIW"��������Ȼ�ɵصױ�����$n�������� "NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack3 :),
                "damage_type":               "����"
        ]),
//4
        ([  
                "action"     :               HIW"$N�������������ھ���ʹ���˻��챦������ʽ"HIC"����ѩ����"HIW"������ˮ��������������������$n�����ȥ"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack4 :),
                "damage_type":               "����"
        ]),
//5
        ([ 
                "action"     :               HIW"$N˫�Ƴ��찵�˻����ķ���ʹ���˻��챦������ʽ"MAG"�����Ǻӡ�"HIW"��ֻ������������ɫ�ǳ�������$n����"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack5 :),
                "damage_type":               "����"
        ]),
//6
        ([
                "action"     :               HIW"$N���ڵ����������̹ſ����һ�㣬�����Ҵܣ�ʹ�����챦������ʽ"WHT"�������硯"HIW"��˲ʱ$n����ֻ��һƬ�ڰ����޷�����$N֮����"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack6 :),
                "damage_type":               "����"
        ]),
//7
         ([     "action"     :               HIW"$N�������ȵ������纣Х�㷭�ڣ�ʹ�����챦������ʽ"HIB"����׺���"HIW"���������˰�һ��һ����Ϯ��$n"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack7 :),
                "damage_type":                "����",
           ]),
//8
         ([     "action"     :               HIW"$NͻȻ����������⻪��Ŀ����ɫ���������������ƣ�ʹ�����챦���ڰ�ʽ"HIY"�����ء�"HIW"��$n˲ʱ���⻪����һʱ��֪����"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack8 :),
                "damage_type":                "����",
           ]),
//9
         ([     "action"     :               HIW"$N$N������Ѫ�������⻯��һƬѪ�죬ʹ�����챦���ھ�ʽ"HIR"��Ѫ�ԡ�"HIW"��$n�Ծ��·����������޵����������"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack9 :),
                "damage_type":                "����",
           ]),
//10
         ([     "action"     :               HIW"$N���˻����ķ���ʹ�����챦������ʽ"HIG"�������桯"HIW"��˲ʱ��ջ谵�����Ƿ�����ȫ������������������ǳ������������������������һ���������ų�$nϮȥ"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack10 :),
                "damage_type":                "����",
           ]),
});

int valid_learn(object me)
{
       if(!me->query("quest/super-unarmed",1)){
        tell_object(me,"�㻹�����ʸ������챦����\n");
        return 0;
                                               }

        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") ) {
        tell_object(me,"�����챦������Ҫ����ࡡ�\n");
        return 0;
                                               }
        if(me->query_skill("superforce",1)<200) {
                write("��Ļ����ķ��ȼ����������������챦����\n");
                return 0;
        }
	   
	   if( me->query("class") != "prayer"){
       tell_object(me,"�㲻��ʥ��ͽ��\n");
       return 0;                              }
       
	   if( (me->query("potential") - me->query("learned_points")) < 15 ) {
        tell_object(me, "���Ǳ�ܲ���ʮ��㣬�޷������챦����\n");
        return 0;
                                                                         }
        me->add("potential", -15);
        return 1;
}

int valid_enable(string usage)
{
        return ( usage=="unarmed" || usage=="parry" );
}


mapping query_action(object me, object *weapon)
{

 int skill_level,limit,i;

 skill_level = (int)(me->query_skill("super-unarmed",1));
 limit= skill_level;
if(me->query("family/family_name")!="ʥ���")
return action[1];
        if (limit < 10)
                return action[random(1)];
        else if (limit < 20)
                return action[random(2)];
        else if (limit < 30)
                return action[random(3)];
        else if (limit < 40)
                return action[random(4)];
        else if (limit < 50)
                return action[random(5)];
		else if (limit < 60)
                return action[random(6)];
		else if (limit < 70)
                return action[random(7)];
		else if (limit < 80)
                return action[random(8)];
        else if (limit < 90)
                return action[random(9)];
        else       
          return action[random(10)]; 
}




string perform_action_file(string action)
{
          return CLASS_D("prayer")+"/super-unarmed/"+action;
}   
        
void sp_attack1(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIW"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIC"
�쾧����Ż����ķ��е�"HIW"�������̡�"HIC"��ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(sp_value/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(sp_value/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack2(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =(nine+spi);   
    message_vision(HIM"$nֻ��һƬϼ�⳯�Լ�ӭ�����\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIC"
�쾧����Ż����ķ��е�"HIM"��õ��ϼ��"HIC"��ˮ���·����ķ�����Ӧ��
һ����ϼ����쾧��$n��Ϯ��ȥ��ֻ��$n������
\n"NOR,me,victim);
    victim->receive_wound("kee",nine*10,me);
    victim->add("gin",-(sp_value*5));
    victim->add("sen",-(sp_value*5));
	COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",nine*5,me);
    victim->add("gin",-(sp_value*2));
    victim->add("sen",-(sp_value*2));
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack3(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
�쾧����Ż����ķ��еġ������̡���ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack4(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
�쾧����Ż����ķ��еġ������̡���ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack5(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
�쾧����Ż����ķ��еġ������̡���ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack6(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
�쾧����Ż����ķ��еġ������̡���ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack7(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
�쾧����Ż����ķ��еġ������̡���ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack8(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
�쾧����Ż����ķ��еġ������̡���ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack9(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
�쾧����Ż����ķ��еġ������̡���ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack10(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"˲��ֻ����������������$n��$nͻȻ��������\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
�쾧����Ż����ķ��еġ������̡���ˮ���·����ķ�����Ӧ��
$N������������˲ʱ�������ڷ�Բʮ�$n�Ծ��Լ�����һƬ�ƺ�֮��
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
