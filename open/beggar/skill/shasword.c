#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void berserk(object me, object victim, object  weapon, int damage);
void sp_attack0(object me, object victim, object  weapon, int damage);
void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_att2(object me, object victim, object  weapon, int damage);
string m1="[1;37m$N���г�����â��ʢ������Ӱ����������$nֱ�̶�ȥ��\n\n[0m";
void array1();
void drunk();
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

//����;roger��˼������ҹ����
//idea ��Ȩ����;ģ�±ط���

void array1()
{
 object me=this_player();
 int number,i,j,m,n,hurt,mean=0,k=0,sha_mean=0,get_sha=0;
 object *partner,*target;

 partner=me->query_team();
 number=sizeof(partner);

 target=me->query_enemy();
 i=sizeof(target);
 
 for(j=0;j<number;j++){
  if(present(partner[j],environment(me)) && partner[j]->query_temp("use_form")==1)
  k=k+1;
                      }

 for(j=0;j<number;j++){
  if(partner[j]->query("get_sha_sp")==1)
  get_sha=get_sha+1;
                      }

 for(j=0;j<number;j++){
  sha_mean=sha_mean+partner[j]->query_skill("shasword",1);
                      }
  sha_mean=sha_mean/number;
 for(j=0;j<number;j++){
  mean=mean+(partner[j]->query_skill("array"));
                      }
  mean=mean/number;  

   if(k==2){
   if(random(100) > 82 && mean < 75){ 
hurt=mean*1.4*2;
message_vision("
"HIM"$Nһ����Х������һת��$n����ʹ���������ǽ���ľ���"NOR"
---[35;1m��[37;1mb[35;1m��[37;1m��[35;1m��[37;1m��[35;1m��[37;1m��[0m---
"HIM"$N���һ��������������ҫ���Ϲ⣬����Ϊ֮һʱ�޷������۾���ͬʱֻ��$n�������ߣ��������ɺװ��������飬���ڵ�������ͬʱȫ���ܵ����ش�
\n"NOR,partner[0],partner[1]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 COMBAT_D->report_status(target[j], 1);
                 }
                                    }

   else if(random(100) > 82 && mean >= 75){
hurt=mean*1.9*2;
message_vision(HIR"
$N��$n������ͨ��ʹ�������������󷨵ľ���---"HIR"��"HIM"����������"HIR"��
$N��$nͬʱ����һԾ���Լ�����ٶ��������ƶ�����ɲ�Ǽ��������ں�Ӱ����������������������...
"NOR"������ڵĵ��˲�֪��η������׷ױ���������
\n",partner[0],partner[1]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 COMBAT_D->report_status(target[j], 1);
                 }
                                          }

   else if(random(100) > 80){
message_vision(HIG"$N��$n��ͣ�����л�λ������������ת����ʹ���˿����ۻ�����\n"NOR,partner[m],partner[m+1]);
                            }
}

   else if(k==3){
  if(random(100) > 82){
   if(mean >= 75 && get_sha==3){
hurt=mean*2.2*3;//���˽��к��� && sha-array ƽ������75 ���������ϵ�
message_vision(HIY"
�������ź�Ȼ������ͨ����Լ��ͬ��ʹ���ɽ�����ʽ�е�һ�У��ںϳɴ˿�������
"HIW"------"HIY"�ɽ�������һʽ"HIW"------\n
$Nʹ���ɽ�����ʽ֮��һ��
----[1;36m��[1;34mB[1;36m��[1;34mY[1;36m��[1;34mH[1;36m��[1;34m��[0m"HIW"---                
$N�����н�,˲ʱ��һ�ɺ�����������,ֻ�����ϱ�������óɱ���,$N���г�����ɨ,ֻ�������潣�����������Ѵ�ȥ
����˲�䱻���˶ദ...\n",partner[0]);
message_vision("
$Nʹ���ɽ�����ʽ֮�ڶ���
----[1;35m��[1;31mU[1;35m��[1;31mV[1;35m��[1;31mi[1;35m��[1;31mi[0m"HIW"---
$N���г�����ʹ,��ʹ����,������ӿ���������ֱ���ȥ,˲ʱѹ������,
���˱������������,��Ѫ����....\n",partner[1]);
message_vision("
$Nʹ���ɽ�����ʽ֮������
----[1;32m��[1;33m��[1;32m��[1;33m��[1;32m��[1;33mi[1;32m��[1;33m��[0m"HIW"---                             
$N��������,��ʱ����ˮ�������仯��ǧ����Ԥ��,����˲��ֲ��彣�ںη�
���ڳ���֮��,.���Ѵ������....\n
"HIY"���к�һ�����ƾ��ˣ�һ��ǿ��Ľ��������ڳ�ײ�����˷�������\n"NOR,partner[2]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 COMBAT_D->report_status(target[j], 1);
                 }
                   }

   else { 
hurt=mean*1.5*3;
message_vision(HIY"
���Ž���������������������"HIW"��"HIY"�۹�����"HIW"��"HIY"����������֮���ڳ���
$N�������������������ת���ͷ׶�Ŀ������������֮��......
\n"NOR,partner[0]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 COMBAT_D->report_status(target[j], 1);
                 }
        }
                                 }

   else if(random(100) > 80){
message_vision(HIY"$Nָ���������������λ���һ����صù�������\n"NOR,partner[0]);
                            }
}

   else if(k==4){
  if(random(100) > 79){
   if(mean >= 75 && sha_mean >= 95){
//�������У����˽�Ҫ��˫ʮ���У��ܻ����ܲ����л�����...
hurt=mean*3.1*4;
message_vision(HIB"
�������������Ȼ���򣬾�������һ���������ںϳ���������"HIY"��"HIB"��������"HIY"��"HIB"!!!
\n"HIW"ֻ����������ͬʱ���쳤Х ,һ��ʹ���ɽ�����֮��"HIR"�� ˫��ʮ����������ն ��"HIB"!!!
\n"HIB"�����������ĸ��˵Ľ��������ڿ��в�ͣ�ؾۺ�������ɲ�Ǽ�!!!��ر�ɫ��
������ӿ��һ��"HIY"����"HIB"������֮�����Σ�������Ҳ�����龰�����壬һ˲����
����û�ڹ�â֮�С�\n\n"NOR,partner[0]);

 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 target[j]->start_busy(1);
 COMBAT_D->report_status(target[j], 1);
                 }
                   }

   else { 
hurt=mean*1.7*4;
message_vision(HIC"
�ڽ�ʿ��Ȼ�Ľ������ʹ�������ߴ����ľ���"HIB"��"HIC"�Ľ��˴�"HIB"��"HIC"�������촦����ֱָ
���˵���ǰ��ͬʱ�����������ҷִ̡��������������м�ʱ�Ľ���ͬʱ�ֻ��ϴ̣���
��ʵ�ھ���!
\n"NOR,partner[0]);
 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",hurt);
 target[j]->start_busy(1);
 COMBAT_D->report_status(target[j], 1);
                 }
        }
                                 }

   else if(random(100) > 80){
message_vision(HIB"$N��ȫ����ת�����ߴ�󣬽��������ε���������\n"NOR,partner[0]);
                            }
}

//����������ɣ���˸��ɽ����֣�������������200 and sha-array >=80
//so ������ǿ
   else if(k==8){
   if(random(100) >= 75){
message_vision(HIG"\n$N���쳤Х���߶�����������ʹ���������׵��ɽ�������������

                     "HIW"��"HIR"�������ϡ����������ߡ�����ն"HIW"��"NOR"

"HIR"����һ�������춯�أ���˵���ɽ�����������δ��ʹ�ù�!!\n",partner[0]);
message_vision(sprintf(HIB"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾���һʽ"HIW"��"HIB"����"HIW"��"HIB"!!\n"NOR ),partner[1]); 
message_vision(sprintf(HIR"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾��ڶ�ʽ"HIW"��"HIR"����"HIW"��"HIR"!!\n"NOR ),partner[2]);
message_vision(sprintf(HIW"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��������!!\n"NOR),partner[3]); 
message_vision(sprintf(HIM"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIM"ů��"HIW"��"HIM"!!\n"NOR),partner[4]);   
message_vision(sprintf(HIC"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIC"����"HIW"��"HIC"!!\n"NOR),partner[5]);
message_vision(sprintf(HIG"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIG"����"HIW"��"HIG"!!\n"NOR),partner[6]); 
message_vision(sprintf(HIY"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIY"Ϧ��"HIW"��"HIY"!!\n"NOR), partner[7]);
message_vision(HIW"\n�ߵ�����ͬʱ���ն��������������족�ڿ���֯��һ��������
"HIG"�������$N����һԾ������׼���������һʽ������⾪��ض���һ����\n"NOR,partner[0]);
message_vision(sprintf(HIW"\nֻ��$N�������� ,���һ����"HIR"��Ӱ�������������졯!!\n"NOR),partner[0]);
message_vision(HIW"$N�����������������磬��������ǰ�ɽ�����֮�����߾����߹ɸ��᲻�ȵĽ��磬ֻ������Х�죬���콣Ӱ�����ڵ���ȫ���ܵ����ش�\n"NOR,partner[0]);

 for(j=0;j<i;j++){
 target[j]->receive_damage("kee",800);
 target[j]->start_busy(2);
 COMBAT_D->report_status(target[j], 1);
                 }
                      }
   else if(random(100) > 60){
message_vision(HIM"$Nָ�Ӱ����������ڵĽ�ʿ��ͣ�����л�λ��������ǧ��\n"NOR,partner[0]);
                            } 
}

}
//����;roger��˼������ҹ����
//idea ��Ȩ����;ģ�±ط���:P

void drunk()
{
 object me=this_player();
 int number,i,j,me_lv,tar_lv;
 object *target;
 target=me->query_enemy();
 i=sizeof(target);
 j=random(i);
 me_lv=me->query_skill("dodge");
 me_lv*=1.3;
 tar_lv=target[j]->query_skill("dodge");
 if(me->query_skill("shasword",1) > 70&&me->query_skill("sha-steps",1)>50&&!me->query_temp("conti",1))
{
 message_vision("\n$N��������
[37;1m   �������˷�������ħ��ؼ䡣�о�����ң���޾�����ߡ�
     һ�������ӣ����������¡�ǧ��������Ψ��"HIR+me->query("name")+HIW"��
ʹ��һ��[37;1m��[31;1m����ǧ��[37;1m��[0m�����ž��⽫�ɽ��������ӵ����쾡��\n",me);
     if(me_lv > tar_lv){
 message_vision("\n$N���ܲ����������е��ش���\n",target[j]);
 target[j]->receive_damage("kee",250);
 COMBAT_D->report_status(target[j]);
 me->add("force",-30);
                       }
 else message_vision("\n$N����Ծ�𣬼�ʱ��������һ��\n",target[j]);                                                    
}                                         
}                                                                                               


mapping *action = ({
//1
        ([      
                "action"     :               "$N���󽣾�������һͦ��ʹ��һ��"HIC"��Ȫ��ܽ�ء�"NOR"����̬���ţ��������������·���֮��",
                "dodge"      :               -10,
                "parry"      :               -10,
                "damage"     :                40,
                "force"      :                40,
                "damage_type":               "����"
        ]),
//2
        ([     
                "action"     :               "$Nһ���������е�$w�ڿ�������һ����âֱ����$n��$l����̬����һ���ǳɣ�����һ��"HIY"�������ա�"NOR,
                "dodge"      :                0,
                "parry"      :                0,
                "damage"     :                80,
                "force"      :                80,
                "damage_type":               "����"
        ]),
//3
        ([   
                "action"     :               "$N���΢�������ֽ���б��������һ����ʹ��һ��"HIM"���з����ǡ�"NOR"����Ѹ������ֱ��$n��$l��ȥ",
                "dodge"      :                10,
                "parry"      :                10,
                "damage"     :                100,
                "force"      :                100,
                "damage_type":               "����"
        ]),
//4
        ([  
                "action"     :               "$N����һ��������Ʈ�ݾ��ף�ʹ��һ��"HIW"��"HIY"�����ɸ�"HIW"��"NOR"ֱ���������������͵���$n���ϴ���նȥ",
                "dodge"      :                20,
                "parry"      :                20,
                "damage"     :                150,
                "force"      :                150,
                "damage_type":               "����"
        ]),
//5
        ([ 
                "action"     :               "$N���ƴ󿪴��أ�ʹ��һ��"HIC"������ɨӰ��"NOR"��籩������ʽʹ$n�е������м�",
                "dodge"      :                30,
                "parry"      :                30,
                "damage"     :                170,
                "force"      :                170,
                "damage_type":               "����"
        ]),
//6
        ([
                "action"     :               "$N��������������������һ��"HIW"��Ʈ�ƴ�ѩ��"NOR"�縡�ư�Ʈ�ݣ�����ƬƬ��ѩ��������$n������",
                "dodge"      :                30,
                "parry"      :                20,
                "damage"     :                200,
                "force"      :                200,
                "damage_type":               "����"
        ]),
//7
         ([     "action"     :               "$N�����е�$wб����ʹ��һ��"HIW"���ͱڶ��ơ�"NOR"��������ΰ���������ݺ�ʹ$n�е���֧��׾�����м�",
                "parry"      :                30,
                "dodge"      :                40,
                "damage"     :                220,
                "force"      :                220,
                "damage_type":                "����",
           ]),
//8
          ([    "action"     :               "$N�����������е�$w��ʹ��һ��"HIR"���ɺ�Ὥ��"NOR"��ʱ��������������ĺ�ɫ��â��������˸���������촦��$n���̶�ȥ",
                "parry"      :                30,
                "dodge"      :                40,
                "damage"     :		      240,
                "force"      :                240,
                "post_action":                (: berserk :),
                "damage_type":                "����",
            ]),
//9
            ([  "action"     :                "$N���е�$wһ�����ʣ���â���£�������˸��һ��"HIB"����â������"NOR"�������ɵ�㺮â��$n���Ϸ�ȥ",
                "dodge"      :                50,
                "parry"      :                30,
                "damage"     :                260,
                "force"      :                260,
                "post_action":                (: berserk :),
                "damage_type":                "����",
             ]),
//10
            ([  "action"     :                "$Nһ����Х�����г������������԰ټƵ���ɫ��â��$N�Ľ��⼲�ɶ��������������ӷɽ�������һ��"HIW"��"HIY"��������"HIW"��"NOR"��",
                "dodge"      :                60,
                "parry"      :                30,
                "damage"     :                280,
                "force"      :                280,               
                "damage_type":                "����",
             ]),
//11
             ([ "action"     :                "$Nʹ���ɽ���֮����"HIG"����ֽ������"NOR"�����е�$w�黮��$n�Ȼ��������֮�ʲ�֪�Լ������ѱ�ն��...",
                "dodge"      :                60,
                "parry"      :                40,
                "damage"     :                300,
                "force"      :                300,
                "post_action":                (: berserk :),
                "damage_type":                "��������",
             ]),
//12
             ([ "action"     :                "$N�����������۾������ʹ�����ɽ������е���߾���"HIY"������˪�졯"NOR"�������ɻ���ʹ�����ɣ������ҫ��$nȫ���ѱ����˶ദ...",
                "parry"      :                40,
                "dodge"      :                70,
                "damage"     :                300,
                "force"      :                300,               
                "damage_type":                "�Ľ�֮��",
             ]),
             ([ "action"     :                "$Nʹ���ɽ�����ʽ֮��һ��\n"+
                                              "----[1;36m��[1;34mB[1;36m��[1;34mY[1;36m��[1;34mH[1;36m��[1;34m��[0m---\n"+                
                                              "$N�����н�,˲ʱ��һ�ɺ�����������,ֻ�����ϱ�������óɱ���,$N���г�����ɨ,ֻ�������潣����$n���Ѵ�ȥ\n"+
                                              "$n˲�䱻���˶ദ...\n",
                 "dodge"     :                50,
                 "parry"     :                80,
                 "damage"    :                400,
                 "force"     :                400,
                 "post_action":               (: sp_attack0 :),
                 "damage_type":               "����",
                ]),
             ([ "action"     :                 "$Nʹ���ɽ�����ʽ֮�ڶ���\n"+
                                               "----[1;35m��[1;31mU[1;35m��[1;31mV[1;35m��[1;31mi[1;35m��[1;31mi[0m---\n"+
                                               "$N���г�����ʹ,��ʹ����,������ӿ������$nֱ���ȥ,˲ʱѹ������,\n"+
                                               "$n�������������,��Ѫ����....\n",
                                                   
                "dodge"      :                 50,
                "parry"      :                 80,
                "damage"     :                 400,
                "force"      :                 400,
                "post_action":               (: sp_attack1 :),
                "damage_type":               "����",
                                    
                 ]),
                   
              ([ "action"     :               "$Nʹ���ɽ�����ʽ֮������\n"+
                                              "----[1;32m��[1;33m��[1;32m��[1;33m��[1;32m��[1;33mi[1;32m��[1;33m��[0m---\n"+                              
                                              "$N��������,��ʱ����ˮ�������仯��ǧ����Ԥ��,$n˲��ֲ��彣�ںη�\n"+
                                              ",���ڳ���֮��,.���Ѵ������....\n",
 
              "dodge"      :                 50,
              "parry"      :                 80,
              "damage"     :                 400,
              "force"      :                 400,
              "post_action":               (: sp_att2 :),
              "damage_type":               "����",
                                                                                
              ]),
//16
            ([  "action"     :                "\n$N��������
               [32;1m��[37;1mն���ѩ��ǧ��               �����賾һ���� 
                 Ц�������ݺ���               ��������˸���[32;1m��[0m
�����轣����ʹ�����ɽ��ɵ�ɱ��[37;1m��[32;1m��[37;1m��[32;1m��[37;1mi[32;1m��[37;1m��[32;1m��[37;1m��[32;1m��[37;1mM����
[32;1m������������$N�����趯�±��̽����ݺ����������Σ�ȴ�ڲ�ס�������е�ɱ��[0m",
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                320,
                "force"      :                320,
                "post_action":               (: berserk :),
                "damage_type":                "����",
             ]),
//17                      
            ([  "action"     :                "\n$N�ؽ����ʣ�����˵����
              [37;1m��[31;1mһ��һ��ƽ����               ��������ɱ����[37;1m��[0m
˵������ɱ�ⶸʢ���ν����ʣ�ʹ�����ɽ��ɽ���[37;1m��[31;1m��[37;1m��[31;1m��[37;1m��[31;1m��[37;1m��[31;1m��[37;1m��[31;1m��[37;1m��[37;1m����
[31;1m$NѸ�ٵػӶ����е�$w[31;1m��ֻ������Ѫ���������յ����ͣ�ȴԭ����$n��ɱ�����ˣ�������Ѫ�����ڿ��У�[0m",
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                340,
                "force"      :                340,
                "post_action":               (: berserk :),
                "damage_type":                "����",
             ]),
//18
            ([  "action"     :                "$Nüͷ������������ͷ�������쳤̾һ����ʹ����[37;1m��[32;1m��[33;1m��[32;1m��[33;1mN[32;1m��[33;1mT[32;1m��[33;1mL[32;1m��[33;1m��[37;1m��
"HIG"$N�ν����ʣ�����쪣����е�$w"HIG"��$n�����ܻ�ΪƬƬ��Ҷ��˲ʱ��$n�ѱ����˶ദ..."NOR,
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                360,
                "force"      :                360,
                "damage_type":                "����",
             ]),             
//19 
            ([  "action"     :                "$N����ŭ�⼱��������ʹ���ɽ���֮����---[33;1m��[33;1m��[37;1m��[33;1m��[37;1mF[33;1m��[37;1m��[33;1m��[37;1m��[33;1m��[37;1m��[33;1m����
$N�˽���磬�����ݺἤ����������ɳ������ǧ������۳Ұ���$n������ȥ"NOR,
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                380,
                "force"      :                380,
                "post_action":               (: berserk :),
                "damage_type":                "����",
             ]),      
//20
            ([  "action"     :                "$Nͻ������֮���⣬��Ȼʹ����[37;1m��[34;1m��[37;1mH[34;1m��[37;1m][34;1m��[37;1mt[34;1m��[37;1mP[34;1m��[37;1mY����
"HIW"$N�������һ���������ӿ�����$n���̶��£�����ȫȻ���˼���ɼ�ʩչ֮������֮���⼰ɱ��ʵ�ѵ���ļ��㡣��$n�����������ʩչ���ŵ�������ɫ���Ѿ���֪����мܣ�\n",
                "dodge"      :                60,
                "parry"      :                50,
                "damage"     :                400,
                "force"      :                400,
                "post_action":               (: berserk :),
                "damage_type":                "����",
             ]),      
                            
             });


int valid_learn(object me)
{
       if( !me->query_temp("weapon") )
        return   notify_fail("���ɽ������������ðѽ���\n");
        return   1;
}

int valid_enable(string usage)
{
        return ( usage=="sword" || usage=="parry" );
}


mapping query_action(object me, object *weapon)
{

 int skill_level,limit,i,bellicosity;
 object victim ,*enemy;

 enemy = me->query_enemy();
 i=sizeof(enemy);
 weapon=me->query_temp("weapon");
 victim = enemy[random(i)];
 skill_level = (int)(me->query_skill("shasword",1));
 limit= skill_level;
 bellicosity=(int)(me->query("bellicosity",1));
 
 if(skill_level >= 95 && (me->query("family/family_name")=="�ɽ���") && me->query("id")!="murofu" && me->query("name")!="Ľ�ݸ�"
 && me->query("force",1) > 200 && random(100) > 85)
                          {
        message_vision( sprintf(HIW"        
\nֻ��$N���쳤Х ,ʹ���ɽ�����֮��"HIR"�� ˫��ʮ����������ն ��"HIB"!!!
"NOR),me ,victim);
        message_vision(sprintf(HIB"\n$N��ͣ�ط����Ž��������ν����ػ�Ϊ���Σ�"+
         "ɲ�Ǽ�!!���Ϊ֮��ɫ�����ܲ�ľ�Էǣ�\n$nҲ�������������ס��"+
         "һ˲��$n�����������ɡ�\n\n "NOR), me ,victim); 
        if(weapon->query("id")=="silver sword"){
        message_vision(HIW"
$N�����۹Ž���Ӧ��"HIR"�� ˫��ʮ����������ն ��"HIW"�ľ������ƣ����ϵ����۰׹�
��ҫ�»���һ�����ν���ֱ����$n\n"NOR,me,victim);
         victim->receive_wound("kee",400,me);
         COMBAT_D->report_status(victim, 1);
         victim->start_busy(1); //�������˶�skills
         me->add("force",-180);
        
                                               }
        else{
         victim->receive_wound("kee",300,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-90);
            }   
                           
                           }

 if( me->is_team_leader() && me->query_temp("use_form")==1) 
        array1();
                                  
 if(me->query_condition("drunk",1) > 0 && random(5)==0) drunk();
     
        if (limit < 10)
                return action[random(2)];
        else if (limit < 20)
                return action[random(4)];
        else if (limit < 30)
                return action[random(5)];
        else if (limit < 40)
                return action[random(5)+1];
        else if (limit < 50)
                return action[random(5)+2];
        else if (limit < 60)
                return action[random(5)+3];
        else if (limit < 70)                        
                return action[random(5)+4];
        else if (limit < 80)                        
                return action[random(5)+5];
  if( me->query("family/family_name")!="�ɽ���" || !me->query("get_sha_sp",1) )
        {
        if (limit < 85)
                return action[random(5)+6];
        else if (limit < 90)
                return action[random(5)+7];
        else if(limit >= 90 && bellicosity >= 1000)
                return action[random(5)+15];
        else
                return action[random(5)+7];
         }
  else
        {
        if (limit < 90)
           return action[random(8)+7];
        else if(limit >= 90 && bellicosity >= 1000)
           return action[random(8)+12];
        else       
          return action[random(8)+7];
        } 
}

void sp_attack0(object me, object victim, object  weapon, int damage)
{
       sp_value =4*(cps+kar)+str+cor+spi+int1; 
       if(sp_value > 400) sp_value=400;
if( weapon->query("id")=="han_bin_sword" ||weapon->query("id")=="Sad sword")
        { 
         message_vision("\n[1;36m��[1;34mH[1;36m��[1;34mB[1;36m��[1;34mC[0m"HIC"���Ϻ�����"NOR"$N"HIC"���ں������ ,��ʱ�����¶��ή ,һ��
�����ھ���$N���г���������$n��ȥ\n"NOR,me,victim);
         victim->add("kee",-sp_value);        
         COMBAT_D->report_status(victim, 1);
         }         
         
       else
        { 
         message_vision("$Nһ�˾�һ����������$N������ ,�������г���ն��$n\n",me,victim);
         victim->add("kee",-sp_value/2);         
         COMBAT_D->report_status(victim, 1);
        }
 
 }
void sp_attack1(object me, object victim, object  weapon, int damage)
{
    int i;
    sp_value =4*(str+cor)+cps+kar+spi+int1;
    if(sp_value > 400) sp_value=400;
    if( weapon->query("id")=="hon_water_sword" || weapon->query("id")=="Sad sword" )
    {
      message_vision("[1;31m��[1;35ml[1;31m��[1;35m��[1;31m��[1;35mC[0m"HIW"�̺�ˮ������ ,�����ʽ�����Ǻ� ,һ������ˮ��ǿ���˵��ھ�����"NOR"$N"HIW"����ֱ��$n��ȥ\n"NOR,me,victim);
      victim->add("kee",-sp_value);
      COMBAT_D->report_status(victim, 1);
      
    }
    else
    {
      if(!me->query_temp("conti",1))
        {
         message_vision("���ɴ��еľ��� ,��е�һ��ǰ��δ��������������ԴԴ���� ,һ���й���Է�\n",me,victim);
         me->set_temp("conti",1);
          for(i=0;i<=2;i++)
          COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
        me->delete_temp("conti");
        }
    }
}

void sp_att2(object me, object victim, object  weapon, int damage)
 {
    if( weapon->query("id")=="han_thon_sword" || weapon->query("id")=="Sad sword" )
    { 
     message_vision("[1;32m��[1;33mH[1;32m��[1;33m��[1;32m��[1;33mC[0m���������Ѳ� ,���ϵ�����֮���Ī�� ,$nһ������������$N һ��ǿ������ʱ�޷���$Nչ������\n",me,victim);
    victim->add("kee",-400);    
    victim->start_busy(1);
    COMBAT_D->report_status(victim, 1);
    }
    else
    { 
    message_vision("$N��ʽͻȻǧ���� ,���г������߰������� ,$n������$N�Ķ��� ,�䲻��������һ��\n",me,victim);
    victim->add("kee",-200);     
    COMBAT_D->report_status(victim, 1);
    
    } 
 }

void berserk(object me, object victim, object  weapon, int damage)
{ 
 int skill_level=me->query_skill("shasword",1);
  if( random(100) > 70 && me->query("force",1) > 100)
  {
    if(!me->query_temp("conti"))
    {

     if( me->query("family/master_name")=="֣ʿ��" || me->query("name")=="֣ʿ��"|| me->query("dragon-sword",1)==1 )
     {
       message_vision( 
         sprintf(HIW"\nֻ��$N�������� ,���һ����"HIR"��Ӱ���� ��������"HIW"��!!\n"),me ,victim);
         message_vision( sprintf("�߹ɸ��᲻�ȵĺ�ɫ���������$N���������$n������Թ��Ƶ��ˡ�\n\n [0m"), me ,victim);
         victim->receive_wound("kee",400,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-80);

     }else  
     if( me->query("family/master_name")=="�ų˷�" || 
         me->query("sha-stop-1",1))
     {   
       message_vision(
         sprintf(HIW"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾���һʽ��"HIR"����"HIW"��!!\n"NOR ),me ,victim); 
         message_vision(sprintf(m1),me ,victim);
         victim->receive_wound("kee",300,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-40);            
     }else
     if( me->query("family/master_name")=="�ų���" ||
         me->query("sha-stop-2",1))
     { 
       message_vision(
         sprintf(HIW"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾��ڶ�ʽ"HIW"��"HIR"����"HIW"��!!��\n"NOR ), me, victim );       
         message_vision(sprintf(m1), me, victim );
         victim->receive_wound("kee",300,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-40);
     }else
     if( me->query("family/master_name")=="����" || 
         me->query("sha-stop-3",1) )
     { 
       message_vision( sprintf(HIW"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIY"����"HIW"��!!\n"NOR), me ,victim); 
         message_vision(sprintf(m1), me ,victim);
         victim->receive_wound("kee",300,me);
         COMBAT_D->report_status(victim, 1);
         me->add("force",-40);      
     }else        
     if( me->query("family/master_name")=="�Ժ�" ||
         me->query("sha-stop-4",1))
     {
        message_vision(sprintf(HIW"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIY"ů��"HIW"��!!��\n"NOR),me ,victim);    
          message_vision( sprintf(m1),me ,victim);
          victim->receive_wound("kee",300,me);
          me->add("force",-15);        
     }else
     if( me->query("family/master_name")=="÷Ӱ" ||
         me->query("sha-stop-5",1))
     {
        message_vision(sprintf(HIW"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIC"����"HIW"��!!��\n"NOR),me,victim);   
           message_vision(sprintf(m1),me,victim);
           victim->receive_wound("kee",300,me);
           COMBAT_D->report_status(victim, 1);
           me->add("force",-10);                
      }else
      if(me->query("family/master_name")=="��˫˫" ||
         me->query("sha-stop-6",1))
      {
        message_vision( sprintf(HIW"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIY"����"HIW"��!!\n"NOR),me ,victim );    
           message_vision(sprintf(m1),me ,victim ); 
           victim->receive_wound("kee",300,me);
           COMBAT_D->report_status(victim, 1);
           me->add("force",-10);              
       }else               

        if( me->query_skill("shasword",1) >=60 ||  me->query("sha-stop-7",1))
// ���İ�player ������ 
       {
         message_vision( sprintf(HIW"\n$N�������𣬿������дǣ�ʹ���ɽ�����֮�����߾�����ʽ"HIW"��"HIY"Ϧ��"HIW"��!!\n"NOR), me ,victim );        
           message_vision(sprintf(m1), me ,victim );
           victim->receive_wound("kee",300,me);
           COMBAT_D->report_status(victim, 1);
           me->add("force",-30);            
            }
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

int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        if( (int)me->query("force") < 5 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        me->receive_damage("kee", 40);
        me->add("force", -5);
        return 1;
}

string perform_action_file(string action)
{
          return CLASS_D("swordsman")+"/shasword/"+action;
}   
         
