//Designed by Wataru    2000/9/6
//����ְҵ---����
//ר����ʽ֮һ:Զ���빥����    ���컨���ַ�
//��ɫ���������г��������Ĳ�ͬ�����в�ͬ����Ĺ���
//fsû������(��ƶ���)���ڣ�ֻ���Ի�������Ϊ����������������һ�����Ƕ���
//���е���������㹫ʽ�����ڵ������Ժ�ῼ�ǵ���˫�����������������ж�
//һ����Ի���dodgeΪ��Ҫ������������ο�����.�����񹦡�������������
//�ҹ�ʽ�ļ�����ٶ�����һ�㣬�ع����˺�Ҳ���ٵ���
//Ŀǰ����������ֻ��Ϊʵ��������skills���Ƿ����������
//��󣬻��ټ�����ν�ġ����������ȡ����ò�ͬ����������в�ͬ��������
//Ȼ�������ȵĸߵͣ�Ҳ������ع����ֻ��ʣ����ع�����
//�����Ȼ����������ԣ�Ŀǰ���ȼ���ȥ������Ŀǰֻ�趨����
//����if (me->query("rainbow/fly/exp"))
//              me->add("rainbow/fly/exp",1);
//      else
//              me->set("rainbow/fly/exp",1);
//���ں����������ǻ���ɵȼ�������˵��������ĳһЩskills�ĵȼ�����ʱ�����趨
//��Ȼ����������һ�����컨����ع�����ÿһ�������(������)
//�������ȵ���һ���ȼ������ع��ľ��вŻ����
//������� perform throwing.XXXXX   (���ع�û�еȼ�������)
//XXXXҪ�����������ȵ�һ���̶ȲŻ���֣��������functionҲ��check������
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void thunder_shot(object,object,object,int);
void double_dragon(object,object,object,int);
void pilibomb(object,object,object,int);
void world_rain(object,object,object,int);
void live_snake(object,object,object,int);
void shock_wave(object,object,object,int);

mapping *action = ({
        (["action":HIW"$N����������е�$w���������Ĺ�â��"+
                        "$n�е�һ�󲻰����·�Σ���ķ�\n"+
                        "Ȼ��һ���ƺ���̫����Ϊ$w����һ����â��"+
                        "����$n��ȥ��һ�ж�����ô�Ŀ������޷�����\n"+
                        "$Nʩչ��˵�е����컨���ַ�----"+HIM+"�����һ����"NOR,
                "dodge":        -20,
                "damage":       250,
                "force":         50,
                "parry":        -10,
                "damage_type" : "����",
                "post_action":  (: thunder_shot :),
        ]),
        (["action":HIW"$n��ǰһ�����Ѿ�ʧȥ��$N����Ӱ��"+
                        "$n������������Ѱ��ȥ����Ҫ����$N�Ĵ���\n"+
                        "������Ѱ֮ʱ��$n�����Լ�����һ���ܴ�Ĵ���"+
                        "��Ϊ�����Ѿ����������ƿ�֮��!!!\n"+
                        "$N������һ���յ�������˫�ֵ�$w֮�ϣ�\n"+
                        "ʹ�����컨���ַ�----"+HIM+"������˫����"NOR,
                "dodge":        -20,
                "damage":       250,
                "force":        50,
                "parry":        -5,
                "damage_type" : "����",
                "post_action":(: double_dragon :),
        ]),
        (["action":HIW"$N���÷ֹ���Ӱ�񹦻û���������Ӱ��"+
            "��ʧ��$n��ǰ��!!!!\n"+
            "����$nΪ��ǰ�仯�����ŵ�ʱ��$N��Ӱ�Ѿ������ڸ߿���\n"+
            "�����Ѿ��������ִ�˵�е�ǿ��������$w�����ƴ���!!!!\n"+
            "$n����������Ȼ��$N�Ѿ�ʩչ���컨���ַ�----"+
                HIM"���������硯\n"NOR,
                "dodge":        -20,
                "damage":       150,
                "force":        50,
                "parry":        -10,
            "damage_type" : "����",
                "post_action":(: pilibomb :),
        ]),
(["action":HIW"$Nŭ��һ����������ڵ�ɱ���붷��������ǿ�Ҷ�����תȫ��\n"+
        "$N��������ʩչ���ִ�˵�е��񼼣����컨���ַ�---"+HIM+
        "���������ꡯ\n"NOR,
                "dodge":        -10,
                "damage":       150,
                "force":        100,
                "parry":        -20,
            "damage_type" : "����",
                "post_action":(: world_rain :),
        ]),
(["action":HIW"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"+
        "$N�����컨���ַ�--"+HIM+"��������ʡ�"+HIW"ȥ�ٿ����е�$w \n"+
        "$w�������߳���һ�㣬������ж���$n������ѹ�������Է�Ӧ\n"+
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"NOR,
                "dodge":        -10,
                "damage":       350,
                "force":        100,
                "parry":        -20,
                "damage_type" : "����",
                "post_action":(: live_snake :),
        ]),
(["action":HIW"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"+
        HIW"$N������ʩչ��$w��������컨���ַ�--"+HIM+"��������á�\n"+
        HIW"$w���ٵ���ת������������ҫ��ħ�ð�Ĺ�â������Ŀ��覼�\n"+
        HIW"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"NOR,
                "dodge":        -10,
                "damage":       400,
                "force":        100,
                "parry":        -20,
                "damage_type" : "����",
                "post_action":(: shock_wave :),
        ]),
(["action":"$Nһ�С�������ӿ���������$w�Լ��˵��ٶȷ���$n��$lȥ",
             "dodge":        -15,
             "damage_type" : "����",
                "damage":       100,
                "force":        100,
                "parry":        -10,
        ]),
});

int valid_learn(object me)
{
        object ob;
        //����Ƿ��н������
        if ( me->query("quest/ninja") != 1)
                return notify_fail("��ѧ���������ʸ�����˵��!!\n");
        //�Ժ����ﻹҪ���ϼ�飬�����ѧdagger����ģ��Ͳ�����ѧ��һ��
        //������˵�����ϼ����ʦ�Ĳ���
        if(me->query_skill("throwing",1) <100)
                return notify_fail("��Ҫѧ���컨���ַ��� ������ô����������ɡ�\n");

        if( !(ob = me->query_temp("weapon"))    ||(string)ob->query("skill_type")!="throwing")
                return notify_fail("�õ㰵����....��Ȼ��Ҫ��ôѧ��\n");
        return 1;
}

int valid_enable(string usage)
{
        return usage=="throwing" || usage=="parry";
}

mapping query_action(object me, object weapon)
{//��������������������������ع����͵ĵط�
        int wea,i;
        object ob;

        ob = me->query_temp("weapon");
        wea= ob->query("fly-type");

        //�ȼ�������ķ������࣬��������������һ����������Ȼ���в�ͬ���ع�������

        //1:���Ͱ���    ����ȡ�ã��������������ع�ʱ����������busy
        //2:������      ȡ�����ѣ�����ǿ�������ع�ʱ������Ҳ������busy�������ԶԸ�ȫ��
        //3:������      ��ͨ��������ͨ���ع�Ҳ��ͨ
switch(wea)
        {//��ΪĿǰ���������࣬������ʽ��ȻҲ����
                case 1: //0-1   Ŀǰ����2��
                        return action[random(2)];
                case 2: // 2-3  Ŀǰ����2��
                        return action[random(2)+2];
                case 3: // 4-5  Ŀǰ����2��
                        return action[random(2)+4];
                default://д������÷�ר��������ʱ��
                        return action[6];
        }
}

int practice_skill(object me)
{
        //�ݶ�������ϰ
        return 0;

        if( (int)me->query("kee") < 100
        ||      (int)me->query("force") < 50 )
                return notify_fail("��������������������������컨���ַ���\n");
        me->receive_damage("kee", 100);
        me->add("force", -50);
        return 1;
}

/*Ŀǰ������������perform
string perform_action_file(string action)
{
        return CLASS_D("killer")+"/rainbow/"+action;
}
*/
void thunder_shot(object me, object victim, object weapon, int damage)
{
  if( objectp(weapon) )
  {
        if( (int)weapon->query_amount()==1 )
        {
                  weapon->unequip();
         tell_object(me, "\n���" + weapon->query("name") + "�����ˣ�\n\n");
       }
       else
       {
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 30)
                return ;
        if (me->query("rainbow/fly/exp"))
                me->add("rainbow/fly/exp",1);
        else
                me->set("rainbow/fly/exp",1);
        if (random(150) <sk_lv)
        {//���ڼ������ᷢ�����У����Ǹ��ּ��������кܸߵķ�������
                //���������������ж�Ϊ�����˺���Ϊ�������������ж�95%
                if ( random(100)  < 94)
                {
                message_vision(sprintf(HIG"��â�ڿ���������������ȼ��"+
                        "����������֮���ת����գ������Ʋ�"+
                        "�쳣�Ĳ�����\n��������صı䶯"+weapon->query("name")
                +HIG"�����������$n����Դ˱仯$n�����޷���Ӧ!!!!\n"NOR)
                                ,me,victim);
                 victim->receive_damage("kee",50+5*sk_lv);
                 victim->start_busy(1);
                 me->add("atman",-30);
                 COMBAT_D->report_status(victim, 1);
                }
        }
                weapon->add_amount(-1);
        }
  }
}
void double_dragon(object me, object victim, object weapon, int damage)
{
  if( objectp(weapon) )
  {
        if( (int)weapon->query_amount()==1 )
       {
                     weapon->unequip();
         tell_object(me, "\n���" + weapon->query("name") + "�����ˣ�\n\n");
      }
     else
      {
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 40)
                return ;
        if (me->query("rainbow/fly/exp"))
                me->add("rainbow/fly/exp",1);
        else
                me->set("rainbow/fly/exp",1);
        if (random(200)         <       sk_lv)
        {//���ڼ������ᷢ�����У����Ǹ��ּ��������кܸߵķ�������
                //���������������ж�Ϊ�����˺���Ϊ�������������ж�90%
                if ( random(100)  < 89)
                {
                message_vision(sprintf(HIG"$n����ת���������㿪��һ��"
                        +"��Ȼ�������������µĵڶ�������!\n"
                        +HIR"���ȵĺ�⣬���Ҳ���ٵĽӽ�$n���·�һ�������»�Ļ���\n"
                        +HIB"�����Ķ����������Ѹ�ٵĽӽ�$n���·�һ���������ı���\n"
                        +HIM"˫����Ϊһ�壬����$n������$n�������ŵĴ���\n"NOR),me,victim);
                 victim->receive_damage("kee",100+7*sk_lv);
                 victim->receive_wound("kee",500);
                 victim->start_busy(1);
                 me->add("atman",-40);
                 COMBAT_D->report_status(victim, 1);
                }
        }
                weapon->add_amount(-2);
       }
   }
}

void pilibomb(object me, object victim, object weapon, int damage)
{
 object *target;
 int i,j;

 target=me->query_enemy();
 i=sizeof(target);

  if( objectp(weapon) )
  {
        if( (int)weapon->query_amount()==1 )
       {
                     weapon->unequip();
         tell_object(me, "\n���" + weapon->query("name") + "�����ˣ�\n\n");
      }
     else
      {//�������м���û��ʲô��������Ϊ��������ȡ�ã����Բ�һ��ÿһ�λ�ʹ��
       //������û�����жȿ��ԣ���Ϊÿһ��һ�����У����������������Ƿ񷢶�
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 30)
                return ;
        if (me->query("rainbow/bomb/exp"))
                me->add("rainbow/bomb/exp",1);
        else
                me->set("rainbow/bomb/exp",1);
        if (    random(sk_lv) > 70)     //�������ʺܵ� lv70����û�з�������
        {
                //����֮���Լ�Ϊ�˻���������Ҫ���㣬���Ի�busy (2)
                message_vision(sprintf(weapon->query("name")+
        HIC"�·��������Ƶģ��ڳ���Ѹ�ٵ���ת�������γ�һ��������������ɵ�����\n"
        +"���˷������е�$N֮�⣬���ڵ�����һ�����������������\n"
        +"�������������������޷����룬�Ҳ��ϱ��ȵ���������\n"
        +"��ʱ��"+weapon->query("name")+"����һ���������������Ļ��±���!!!\n"NOR)
                                ,me,victim);
         for(j=0;j<i;j++)
         {//�����ݶ���ˣ����Ժ����.�����񹦣��ֹ���Ӱ�񹦳��ֺ��ٵ�����ʽ
                target[j]->receive_damage("kee",200+10*sk_lv);
                target[j]->receive_damage("kee",(10*sk_lv));
                COMBAT_D->report_status(target[j], 1);
         }
         me->start_busy(2);
         me->add("atman",-30);
         weapon->add_amount(-1);
        }
        else
        {//�󲿷�Ӧ����û�з�����״̬����Ҫ�������Ŷ��֣��ö���busy
                message_vision(sprintf(weapon->query("name")+
        HIC"�·��������Ƶģ��ڳ���Ѹ�ٵ���ת�������γ�һ��������������ɵ�����\n"
        +"���˷������е�$N֮�⣬���ڵ�����һ�����������������\n"
        +"�������������������޷����룬�Ҳ��ϱ��ȵ���������\n"
        +"��ʱ��"+weapon->query("name")+HIC"����һ�����򣬱�$N�ջ�����\n"
        +"�����������ų�һ���亹���þò����Լ�\n"NOR),me,victim);
         for(j=0;j<i;j++)
         {//�����ݶ���ˣ����Ժ����.�����񹦣��ֹ���Ӱ�񹦳��ֺ��ٵ�����ʽ
                target[j]->receive_damage("sen",random(3*sk_lv));
                target[j]->receive_damage("gin",random(3*sk_lv));
                COMBAT_D->report_status(target[j], 1);
                if (random(10) < 4)     //Լ��3�ɻ�busy
                target[j]->start_busy(2);
         }
        }
       }
   }
}


void world_rain(object me, object victim, object weapon, int damage)
{
 object *target;
 int i,j;

 target=me->query_enemy();
 i=sizeof(target);

  if( objectp(weapon) )
  {
        if( (int)weapon->query_amount()==1 )
       {
                     weapon->unequip();
         tell_object(me, "\n���" + weapon->query("name") + "�����ˣ�\n\n");
      }
     else
      {//�������м���û��ʲô��������Ϊ��������ȡ�ã����Բ�һ��ÿһ�λ�ʹ��
       //������û�����жȿ��ԣ���Ϊÿһ��һ�����У����������������Ƿ񷢶�
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 60)
                return ;
        if (me->query("rainbow/bomb/exp"))
                me->add("rainbow/bomb/exp",1);
        else
                me->set("rainbow/bomb/exp",1);
        if (    random(sk_lv) > 80)     //�������ʺܵ� lv80����û�з�������
        {
                //����֮���Լ�Ϊ�˻���������Ҫ���㣬���Ի�busy (2)
                message_vision(sprintf(
                HIW"$N���е�"+weapon->query("name")+"�����ĵ���ͬɫ�ʵĹ�Ӱ���\n"
                +HIR"���ڵĿ����ƺ���ʼȼ�������ˣ����Ÿ��Ȼ������ȸ������!!!\n"
                +HIB"һ����Ӱ������£���û�б���������ȴ����ǿ�ҵĵ���!!\n"
                +HIG"�ڳ��ص�����һ�ߣ��ƿ�֮����Х������������Ӱ�û�����\n"
                +HIC"���������ĳ��֣���ӰҲ�û����׻�����\n"
                +HIM"�����Ӱ����ĵ���Ӱ��Ϊһ�壬�ڳ�������ǿ�ҵı�ը!!!\n"NOR)
                                ,me,victim);
         for(j=0;j<i;j++)
         {//�����ݶ���ˣ����Ժ����.�����񹦣��ֹ���Ӱ�񹦳��ֺ��ٵ�����ʽ
                target[j]->receive_damage("kee",200+random(12*sk_lv));
                target[j]->receive_wound("kee",(random(12*sk_lv)));
                COMBAT_D->report_status(target[j], 1);
         }
         me->start_busy(2);
         me->add("atman",-60);
         weapon->add_amount(-4);
        }
        else
        {//�󲿷�Ӧ����û�з�����״̬����Ҫ�������Ŷ��֣��ö���busy
                message_vision(sprintf(HIW"$N���е�"+weapon->query("name")
                +"�����ĵ���ͬɫ�ʵĹ�Ӱ���\n"
                +HIR"���ڵĿ����ƺ���ʼȼ�������ˣ����Ÿ��Ȼ������ȸ������!!!\n"
                +HIB"һ����Ӱ������£���û�б���������ȴ����ǿ�ҵĵ���!!\n"
                +HIG"�ڳ��ص�����һ�ߣ��ƿ�֮����Х������������Ӱ�û�����\n"
                +HIC"���������ĳ��֣���ӰҲ�û����׻�����\n"
                +HIM"Ȼ�������Ӱ����ĵ���Ӱ���ٴλص�$N���У�\nһ�����鶼û�з���"
                +HIM"�������ڵ��������ѱ����Ӱ�������ţ�����������ս\n"NOR)
                                ,me,victim);
         for(j=0;j<i;j++)
         {//�����ݶ���ˣ����Ժ����.�����񹦣��ֹ���Ӱ�񹦳��ֺ��ٵ�����ʽ
                target[j]->receive_damage("sen",random(5*sk_lv));
                target[j]->receive_damage("gin",random(5*sk_lv));
                COMBAT_D->report_status(target[j], 1);
                if (random(10) < 3)     //Լ��2�ɻ�busy
                target[j]->start_busy(3);
         }
        }
       }
   }
}

void live_snake(object me, object victim, object weapon, int damage)
{
        int am,sk_lv;
        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 35)
                return ;
        if (me->query("rainbow/chain/exp"))
                me->add("rainbow/chain/exp",1);
        else
                me->set("rainbow/chain/exp",1);
        if (random(180) <sk_lv)
        {       //���ڼ������ᷢ�����У����Ǹ��ּ��������кܸߵķ�������
                //����������������ͨ�����������ж�70%
                if ( random(100)  < 70)
                {
                message_vision(sprintf(weapon->query("name")
                +HIG"��$N�Ĳٿ��£�ͻȻ����ǿ����������$n����������!!!!\n"
                +HIG"һ��ǿ���ѹ����������ɽ����һ��"
                +"����$n��ȥ���޴����ܣ���ȫ����\n"NOR)
                                ,me,victim);
                 victim->receive_damage("kee",100+6*sk_lv);
                 victim->start_busy(1);
                 me->add("atman",-35);
                 COMBAT_D->report_status(victim, 1);
                }
        }
}

void shock_wave(object me, object victim, object weapon, int damage)
{
        int am,sk_lv;

        sk_lv=me->query_skill("rainbow",1);
        if (me->query("atman") < 45)
                return ;
        if (me->query("rainbow/chain/exp"))
                me->add("rainbow/chain/exp",1);
        else
                me->set("rainbow/chain/exp",1);
        if (random(180) <sk_lv)
        {       //���ڼ������ᷢ�����У����Ǹ��ּ��������кܸߵķ�������
                //����������������ͨ�����������ж�70%
                if ( random(100)  < 70)
                {
                message_vision(sprintf(weapon->query("name")
                +HIG"ԽתԽ�죬�Ѿ��޷��ֱ浽���Ǻ��ֶ�����"
                +"ֻ����һ����Ӱ��$n�Ͽ���ת\n"
                +"$n�е����Ժ�����������������ѹ������"
                +"������ҲԽ��Խ���Զ���\n"
                +"��Ȼ"+weapon->query("name")+HIG+"��ֹ�ڿ��в����ˣ�\n"
                +"��ѹ���Ŀ�����˲�䱻�ͷſ�����"
                +"ת����ǿ��ĳ������������$N���ɵ�����!\n"NOR)
                                ,me,victim);
                 victim->receive_damage("kee",100+6*sk_lv);
                 victim->start_busy(1);
                 me->add("atman",-35);
                 COMBAT_D->report_status(victim, 1);
                }
        }
}

