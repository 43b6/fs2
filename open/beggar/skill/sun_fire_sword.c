// �����߾�����
//ȡ��ԭ����Ѹ�׽��� && ��߽����Ѷ�
//roger && taifar�� 98/8/16

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void sp_attack0(object me, object victim, object  weapon, int damage);
void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_attack2(object me, object victim, object  weapon, int damage);
void sp_attack3(object me, object victim, object  weapon, int damage);
void sp_attack4(object me, object victim, object  weapon, int damage);
void sp_attack5(object me, object victim, object  weapon, int damage);
void sp_attack6(object me, object victim, object  weapon, int damage);

int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int sp_value;

string *parry_msg = ({
"\n��$n���еĳ���һ�ᣬһ��"HIB"�������Ὥ��"NOR"��Юǧ����ǰһ��һ�ͣ�����һ�������˵��𻨷���$N���е�$w��Щ��ɣ�\n"NOR,
"\n��$n����һת��˳��$N��$w��һ��"HIC"��˳�����¡�"NOR"��$N����ָ��ȥ��$N��ʧɫ�¼�æ���лؼ�\n",
"\n$n�������飬���г�����������һ�����ı���ײ������$n�ѽ�$N�Ŀ���ȫ�����⣡\n",
HIW"\n$n�Կ��ƿ죬$N�쵫$n���죬�����̳���������ʮ�Ž�֯��һ��������$N����ʽ����������\n"NOR,    
        });

string *unarmed_parry_msg = ({
"���Ǳ�$n���ˡ�\n",
"�����$n�����ˡ�\n",
});

string *lan_yan = ({
HIW"$Nʹ��������һʽ"HIR"�����ճ�����"HIW"�����е�$w"HIW"�����趯�ţ�Ю�������ҷ�Ϯ�����ܣ�һʱ�佣���ݺ�\n"NOR,
HIW"$N����$w"HIW"ͻȻ���˾��죬ʹ�������ڶ�ʽ"HIR"������������"HIW"������$w"HIW"��������������������ܵĵ���\n"NOR,
HIW"$N����$w"HIW"���ٲ�����˲�����콣��������������������ʽ"HIR"��ǧ��ӳ�ա�"HIW"������������ֻ�����˵�Ѫ���仨��ɽ�...\n"NOR,
HIW"$N���μ�����ʹ����������ʽ"HIR"����ɳ���ա�"HIW"��ֻ�����̵ķ���������ɳ������������$N�ںη�...\n"NOR,
HIW"$N���󽣾�����Ȼ���е�$w"HIW"����շ�ȥ��˲ʱ�������������¼��䣬������������ʽ"HIR"�����ƹ��ա�\n"NOR,
HIW"$Nʹ����������ʽ"HIR"���������ա�"HIW"��������һ�������������ϣ���ɢ�������ȵ���ϢϮ�����ܣ�����Ҫһ����û�����Ƶ�\n"NOR,
HIW"$N���һ����ʹ����������ʽ"HIR"�����յ��ա�"HIW"��һ˲���������ܴ̳���������ʮ�Ž�!\n"NOR,
HIW"$N���е�$w"HIW"���������̣�һ�������ڰ�ʽ��"HIR"���������ס�"HIW"ʹ������������������¡¡����!\n"NOR,
HIW"$N���е�$w"HIW"��â��Ȼһ����ʹ�������ھ�ʽ"HIR"�����շɵ硯"HIW"��ֻ����â��ͣ��������˸�������ۻ����Ҽ�$w"HIW"���Ѵ������...\n"NOR,
HIW"$Nʹ�������Ṧ��һ��������ʮʽ"HIR"���������ա�"HIW"��ʹ����������Χ���˷׷ײ�ס�ص���...\n"NOR,
HIW"$N����һ�Σ�����$w"HIW"�������������׷���ȥ������������ʮһʽ"HIR"��б�չ�Ӱ��"HIW"������˱��޿ɱ�\n"NOR,
HIW"$N���е�$w"HIW"��Ȼ����������࣬����ȥ�ƹ���Ī�⣬����������ʮ��ʽ"HIR"���������ա�"HIW"������޴��м���\n"NOR,
HIW"$N���е�$w"HIW"���������ʹ��������ʮ��ʽ"HIR"�����շɷ硯"HIW"��ֻ��$w"HIW"��$N˫�������Ŀ������Լ��ߵ��ٶȴ�����Χ�ĵ��ˡ�\n"NOR,
HIW"$Nʹ��������ʮ��ʽ"HIR"������ǧӡ��"HIW"�����е�$w"HIW"��Ȼ�ɿ���趯���γ�һ������Ӱ������Χ�ĵ��ˡ�\n"NOR,
HIW"$N���е�$w"HIW"����һ�֣���Ȼ���ɳ�ǧ����Ļ�Ӱ���������ܵĵ��ˣ�����������ʮ��ʽ"HIR"���������⡯"HIW"����Χ���˷׷���ȴ...\n"NOR,
HIW"$N�����е�$w"HIW"��ø�����ʹ��������ʮ��ʽ"HIR"�����վ�ʴ��"HIW"�����������������Ӱ��������ֻ��һ���Һ�$n�ѱ�����!��\n"NOR,
HIW"$Nʹ��������ʮ��ʽ"HIR"��α��Ϊ�桯"HIW"������֮�죬��ʽ֮����ʵ�����˷�����˼�����̳���ÿһ�н�������ܵ��ش�\n"NOR,
});

string *shasword = ({
"$N���󽣾�������һͦ��ʹ��һ��"HIC"��Ȫ��ܽ�ء�"NOR"����̬���ţ��������������·���֮��\n",
"$Nһ���������е�$w�ڿ�������һ����âֱ����$n��$l����̬����һ���ǳɣ�����һ��"HIY"�������ա�\n"NOR,
"$N���΢�������ֽ���б��������һ����ʹ��һ��"HIM"���з����ǡ�"NOR"����Ѹ������ֱ��$n��$l��ȥ\n",
"$N����һ��������Ʈ�ݾ��ף�ʹ��һ��"HIW"��"HIY"�����ɸ�"HIW"��"NOR"ֱ���������������͵���$n���ϴ���նȥ\n",
"$N���ƴ󿪴��أ�ʹ��һ��"HIC"������ɨӰ��"NOR"��籩������ʽʹ$n�е������м�\n",
"$N��������������������һ��"HIW"��Ʈ�ƴ�ѩ��"NOR"�縡�ư�Ʈ�ݣ�����ƬƬ��ѩ��������$n������\n",
"$N�����е�$wб����ʹ��һ��"HIW"���ͱڶ��ơ�"NOR"��������ΰ���������ݺ�ʹ$n�е���֧��׾�����м�\n",
"$N�����������е�$w��ʹ��һ��"HIR"���ɺ�Ὥ��"NOR"��ʱ��������������ĺ�ɫ��â��������˸���������촦��$n���̶�ȥ\n",
"$N���е�$wһ�����ʣ���â���£�������˸��һ��"HIB"����â������"NOR"�������ɵ�㺮â��$n���Ϸ�ȥ\n",
"$Nһ����Х�����г������������԰ټƵ���ɫ��â��$N�Ľ��⼲�ɶ��������������ӷɽ�������һ��"HIW"��"HIY"��������"HIW"��\n"NOR,
"$Nʹ���ɽ���֮����"HIG"����ֽ������"NOR"�����е�$w�黮��$n�Ȼ��������֮�ʲ�֪�Լ������ѱ�ն��...\n",
"$N�����������۾������ʹ�����ɽ������е���߾���"HIY"������˪�졯"NOR"�������ɻ���ʹ�����ɣ������ҫ��$nȫ���ѱ����˶ദ...\n",
});



mapping *action = ({
//1
        ([      
                "action"     :               HIC"$N�չ�Ϊ�����ճ��ᣬʹ�����ɽ�����֮�����߾��ڶ�ʽ"HIY"��������"HIC"��˲������Ӱ�䲽�������ָ$n$l"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                200,
                "force"      :                200,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "����"
        ]),
//2
        ([     
                "action"     :               HIC"$N�����ι�ʹ���ɽ�����֮�����߾�����ʽ"HIY"��ů����"HIC"��������ȼ��һ�����Ľ�ѹ���رƽ�$n"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                200,
                "force"      :                200,
                "post_action":                (: sp_attack1 :),
                "damage_type":               "����"
        ]),
//3
        ([   
                "action"     :               HIC"$N�����ԾٿȻʹ�����ɽ�����֮�����߾�����ʽ"HIY"��������"HIC"����������ջԻͣ���ֱ����$nü��"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                200,
                "force"      :                200,
                "post_action":                (: sp_attack2 :),
                "damage_type":               "����"
        ]),
//4
        ([  
                "action"     :               HIC"$N�����羲������ֹˮ�������ޣ��ɽ�����֮�����߾�����ʽ"HIY"��������"HIC"���𲨲�ɱ��������$n������ȥ"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                300,
                "force"      :                300,
                "post_action":                (: sp_attack3 :),
                "damage_type":               "����"
        ]),
//5
        ([ 
                "action"     :               HIC"$N�����$w"HIC"����������ĺɫ��Ľ������ɽ�����֮�����߾�����ʽ"HIY"��Ϧ����"HIC"����ϼ�����쾡��$n����"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                300,
                "force"      :                300,
                "post_action":                (: sp_attack4 :),
                "damage_type":               "����"
        ]),
//6
        ([
                "action"     :               HIC"$N���·ת�ھ���Ȼ�ϴ�ʹ���ɽ�����֮�����߾���һʽ"HIY"��������"HIC"����������������ֱ��$n�Ŀ�"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack5 :),
                "damage_type":               "����"
        ]),
//7
         ([     "action"     :               HIC"$N��$w"HIC"���ʶ��룬�۾�����ʹ���ɽ�����֮�����߾�����ʽ"HIY"��������"HIC"��ֻ�������糿��է�ֻ���$n"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack6 :),
                "damage_type":                "����",
           ]),
});

int valid_learn(object me)
{
       if(!me->query("quest/sun_fire_sword",1)){
        tell_object(me,"�㻹�����ʸ��������߾�������\n");
        return 0;
                                               }

       if( !me->query_temp("weapon")){
        tell_object(me,"�������߾������������ðѽ���\n");
        return 0;
                                     }
       if( (me->query("potential") - me->query("learned_points")) < 5 ) {
        tell_object(me, "���Ǳ�ܲ�����㣬�޷����˽�����\n");
        return 0;
                                                                         }
        me->add("potential", -5);
        return   1;
}

int valid_enable(string usage)
{
        return ( usage=="sword" || usage=="parry" );
}


mapping query_action(object me, object *weapon)
{

 int skill_level,limit,i;

 skill_level = (int)(me->query_skill("sun_fire_sword",1));
 limit= skill_level;
     
        if (limit < 15)
                return action[random(1)];
        else if (limit < 30)
                return action[random(2)];
        else if (limit < 45)
                return action[random(3)];
        else if (limit < 60)
                return action[random(4)];
        else if (limit < 75)
                return action[random(5)];
        else if (limit < 90)
                return action[random(6)];
        else       
          return action[random(7)]; 
}

void sp_attack0(object me, object victim, object  weapon, int damage)
{
  string do_action;
  string arg;
  mixed all;
  object *enemy,who,room,weaponn,obj;
  string actionn;
  int i,j,force;

  force=me->query("force",1);
  enemy = me->query_enemy();
  i=random(sizeof(enemy));
if( me->query("family/family_name")=="�ɽ���"){  
//������ 1/2*1/7=~7%

  if( random(2) == 0 && me->query("force") > 360 && !me->query_temp("conti",1)) {
  
message_vision(HIY"
����$n�����е�˲�䣬$N��ת"HIR"������ǧ�⡯"HIY"���Ҳ���Ӱ�ڹ�Ϊ��
һ��ǧ�У�ͬһ�ѽ������ȴ�ǲ�ͬ����ʽ�����г���$n��ҪѨ��ȥ
\n"NOR,me,victim);
          
    for(j=0; j < 12; j++) {
       do_action = shasword[j];
       actionn = "\n";
       actionn += do_action;
     
       if( weaponn=me->query_temp("weapon") )
       actionn = replace_string(actionn, "$w", weaponn->name());
       message_vision(actionn, me, enemy[i]);
          if( random(me->query("combat_exp")) >
        random(enemy[i]->query("combat_exp"))/6 ) {
        message_vision("\n����$N���㲻�������϶�ʱ�����һ��Ѫ���ܵĽ��ۡ�\n" , enemy[i]);
        enemy[i]->receive_damage("kee",40,me);
        me->add("force",-30);
        COMBAT_D->report_status(enemy[i]);
                                                  }
   else message_vision("\n$N�˱Ƚ���, ���յ���������һ�С�\n" , enemy[i]);
                             }
//�����cps����10��ppl �����Ը�exp ѹ�� delay ����
     if( random(me->query("cps")) < 8 && random(me->query("combat_exp",1)) < 900000) {
        me->add("force",-100);
        message_vision("\n$Nʹ��"HIY"������ǧ�⡯"NOR"�����ڶ������鲻�㣬��������һʱ����Ϊ��\n",me);
        me->start_busy(1);
                                        }
                                                          }
                                                }
 
}

void sp_attack1(object me, object victim, object  weapon, int damage)
{
    sp_value =4*(str+cor)+cps+kar+spi+int1;
if( me->query("family/family_name")=="�ɽ���"){
    message_vision(HIW"
��ѹ����������$N������Խ��ǿ�ң�$n�޴ӷ���������ȫȫ
�ܵ���ѹ�Ŀ��ƣ�����һʽ"HIY"��ů��ӡ����"HIW"�����Ľ����ڿ��в�ͣ�ؾ�
��������ɲ�Ǽ�!!��ر�ɫ������ӿ��һ��ů���ڿ���֮�����ζ���
$n�����龰�����壬һ˲���ѱ���û�ڹ�â֮��
\n"NOR,me,victim);

   victim->receive_damage("kee",sp_value/2,me);
   COMBAT_D->report_status(victim);
                                              }
}

void sp_attack2(object me, object victim, object  weapon, int damage)
{
    sp_value =4*(spi+int1)+cps+kar+str+cor;
if( me->query("family/family_name")=="�ɽ���"){
    message_vision(HIY"
����ͬʱ��$N������أ��������棬�񱼵�����˲��ƽϢ��$N��
��ط·���Ϊһ�����������ʶ�Ŀ����ֹסȫ���ĵĶ��� 
һʽ"HIW"����������--����ˡ�"HIY"Ѹ���׹�����$n
\n"NOR,me,victim);

   victim->receive_damage("kee",sp_value/2,me);
if(random(100) > 80) {
   victim->set_temp("no_power",1);
   victim->apply_condition("no_power",1);
}
   COMBAT_D->report_status(victim); 
                                              }
}

void sp_attack3(object me, object victim, object  weapon, int damage)
{
    sp_value =4*(cps+kar)+str+cor+spi+int1;
if( me->query("family/family_name")=="�ɽ���"){
    message_vision(HIW"
$N�ھ���תʹ������Ψһ����֮�У�˲ʱ��һ�ɺ����������ԣ�ֻ��
���ϱ�������óɱ�����$N��ʹ���죬������ӿ����˲ʱѹ��������
ʱ����ˮ�������仯��ǧ��$n˲��ֲ��彣�ںη�, ���ڳ���֮
�ʣ�$Nһʽ"HIC"�����������"HIW"�����˪��ѩֱ��$n�Ŀ�
\n"NOR,me,victim);

    victim->receive_damage("kee",sp_value/2,me);
    COMBAT_D->report_status(victim);
                                              }
}

void sp_attack4(object me, object victim, object  weapon, int damage)
{
    int i;
if( me->query("family/family_name")=="�ɽ���"){
    message_vision(HIR"
$N���Ʒ����Ծ��б�ؽ��⣬��ת�鶯ʹ��"HIW"����ȾϦ����"HIR"����ʱ
ɱ��񱼣�����Ѫ���޷����ƣ����ķ������������������η��У���
��ι����ղ���
"NOR,me,victim);

    me->set_temp("conti",1);
    for(i=0; i<3 ;i++)
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
    me->delete_temp("conti");
                                              }  
}

void sp_attack5(object me, object victim, object  weapon, int damage)
{
  string do_action;
  string arg;
  mixed all;
  object *enemy,who,room,weaponn,obj;
  string actionn;
  int i,j,force;
  
  force=me->query("force",1);
  enemy = me->query_enemy();
  i=random(sizeof(enemy));
  
//������ 1/2*1/7=~7%
if( me->query("family/family_name")=="�ɽ���"){
if( random(2) == 0 && me->query("force") > 510 && !me->query_temp("conti",1)) {
message_vision(HIR"
գ�ۼ䣬���淺�𣬻�⽥�����ձ��ˣ�$N�绯ף��ȫ����
���һ�����"HIW"��[31;1m��[37;1mP[31;1m��[37;1m��[31;1m��[37;1mQ[31;1m��[37;1mC[31;1m��[37;1m�xz"HIR"�����г������ƻ������죬����ǧ���
��ֻ��һ˲��$n����ȫ��������û
\n"NOR,me,victim);            
    for(j=0; j < 17; j++) {
       do_action = lan_yan[j];
       actionn = "\n";
       actionn += do_action;

       if( weaponn=me->query_temp("weapon") )
       actionn = replace_string(actionn, "$w", weaponn->name());
       message_vision(actionn, me, enemy[i]);
          if( random(me->query("combat_exp")) >
        random(enemy[i]->query("combat_exp"))/6 ) {
        message_vision("\n����$N���㲻�������϶�ʱ�����һ��Ѫ���ܵĽ��ۡ�\n" , enemy[i]);
        enemy[i]->receive_damage("kee",60,me);
        me->add("force",-30);
        COMBAT_D->report_status(enemy[i]);
                                                  }
   else message_vision("\n$N�˱Ƚ��죬���յ���������һ�С�\n" , enemy[i]);
                             }
//�����cps����10��ppl �����Ը�exp ѹ�� delay ����
     if( random(me->query("cps")) < 10 && random(me->query("combat_exp",1)) < 900000) {
        me->add("force",-100);
        message_vision("\n$Nʹ��"HIR"������ʮ��ʽ��"NOR"�����ڶ������鲻�㣬��������һʱ����Ϊ��\n",me);
        me->start_busy(1);
                                        }
                                                  }
                                             }
 
}


void sp_attack6(object me, object victim, object  weapon, int damage)
{
    int i;
    sp_value =4*(str+cor+cps)+spi+int1+kar;
  if (sp_value > 250) sp_value=250;
if( me->query("family/family_name")=="�ɽ���"){
    message_vision(HIY"
˲�䣬$N���ս����ʣ�����һʽ"HIW"���������֡�"HIY"�����������������
ͬʱ������������ֱ��$n���ʺ�
\n"NOR,me,victim);
   if( weapon->query("id")=="sun_fire_sword"){
    message_vision(HIY"�齣�������š��������֡���һʽɢ��������Ǳ�ص�������ɲ�Ǽ�!�������
��ȫ�����˰�Ӱ����ǧ�ٸ�̫����$N�����У�һ����������ױȵĹ�â����$n�����޷�
����\n"NOR,me,victim);
    victim->receive_wound("kee",sp_value+150,me);
    victim->start_busy(1);
if(random(100) > 70) {
    victim->set_temp("no_power",1);
    victim->apply_condition("no_power",1);
}
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",sp_value,me);
if(random(100) > 80) {
    victim->set_temp("no_power",1);
    victim->apply_condition("no_power",1);
}
    COMBAT_D->report_status(victim);
       }
                                              }
}


string query_parry_msg(string limb)
{
 object me=this_player();
 object weapon=me->query_temp("weapon");

  if(weapon && weapon->query("skill_type")=="sword")
      return parry_msg[random(sizeof(parry_msg))];
  else 
      return unarmed_parry_msg[random(sizeof(unarmed_parry_msg))];
}

string perform_action_file(string action)
{
          return CLASS_D("swordsman")+"/shasword/"+action;
}   
        
