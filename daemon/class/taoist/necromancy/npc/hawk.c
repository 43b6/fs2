#include <ansi.h>
#include <combat.h>
inherit NPC;
//inherit SSERVER;

void hawk1(object me, object victim, object  weapon, int damage);
void hawk2(object me, object victim, object  weapon, int damage);
void hawk3(object me, object victim, object  weapon, int damage);
void hawk4(object me, object victim, object  weapon, int damage);
void hawk5(object me, object victim, object  weapon, int damage);
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);

mapping *action = ({
([ "action" : "$N"HIC"ʹ��"HIY"��"HIB"ӥ���߱�"HIY"��"HIG"--"HIR"ӥХ��ʣ�"HIC"˲������ħ���������̼���$n"HIC"���Բ����������ǲ��塣"NOR,
             "dodge"      :  -25,
             "parry"      :  -25,
             "damage"     :  200,
             "post_action":               (: hawk1 :),
             "damage_type":  "���ǲ���",
]),

([ "action" : "$N"HIM"ʹ��"HIY"��"HIB"ӥ���߱�"HIY"��"HIG"--"HIY"������ӿ"HIM"����ӥ���������ǿ������Ϯ�������$n"HIM"��������У���ˤ�ڵء�"NOR,
             "dodge"      :  -15,
             "parry"      :  -15,
             "damage"     :  180,
             "post_action":               (: hawk2 :),
             "damage_type":  "ˤ��",
]),

([ "action" : "$N"HIB"ʹ��"HIY"��"HIB"ӥ���߱�"HIY"��"HIG"--"HIG"��������"HIB"��˲������ܲ�����غڰ�����ӥ�û���$n"HIB"�����������ơ�"NOR,
             "dodge"      :  -30,
             "parry"      :  -30,
             "damage"     :  100,
             "damage_type":  "ץ��",
]),

([ "action" : "$N"HIC"ʹ��"HIY"��"HIB"ӥ���߱�"HIY"��"HIG"--"HIM"��������"HIC"�����¹�����֮�ʷ�����ʣ���$n"HIC"������������޷��мܡ�"NOR,
             "dodge"      :  -15,
             "parry"      :  -15,
             "damage"     :  180,
             "post_action":               (: hawk3 :),
             "damage_type":  "ץ��",
]),

([ "action" : "$N"HIB"ʹ��"HIY"��"HIB"ӥ���߱�"HIY"��"HIG"--"HIR"��������"HIB"��ֻ�����ո��գ���ӥ��Хһ���������Ѹ�ٹ���$n��"NOR,
             "dodge"      :  -30,
             "parry"      :  -20,
             "damage"     :  100,
             "damage_type":  "ץ��",
]),

([ "action" : "$N"HIG"ʹ��"HIY"��"HIB"ӥ���߱�"HIY"��"HIG"--"HIM"���찵��"HIG"�������������ֲ�����������ӥ������ʣ����źڰ�֮����Ϯ$n��"NOR,
             "dodge"      :  -20,
             "parry"      :  -25,
             "damage"     :  200,
             "post_action":               (: hawk4 :),
             "damage_type":  "ץ��",
]),

([ "action" : "$N"HIC"ʹ��"HIY"��"HIB"ӥ���߱�"HIY"��"HIG"--"HIR"����"HIG"����"HIC"��ֻ����ӥ��������������β������ͣ�˳�Ƹ������Ю��һ��ǿ����������$n��"NOR,
             "dodge"      :  -30,
             "parry"      :  -30,
             "damage"     :  250,
             "post_action":               (: hawk5 :),
             "damage_type":  "����Ѫ��",
]),

([ "action" : HIY"��ӥ���ữ����ʽ��ᣬ���������������⣬˲Ϣ��������Ѹ����צ����$n��"NOR,
             "dodge"      :  -25,
             "parry"      :  -30,
             "damage"     :  220,
             "damage_type":  "ץ��",
]),

([ "action" : "$N"HIY"��������������$N"HIY"�����䷨���γ�һ������ȼ����Ŀ�ɿڴ���$n��"NOR,
             "dodge"      :  -30,
             "parry"      :  -30,
             "damage"     :  250,
             "post_action":               (: sp1 :),
             "damage_type":  "����",
]),

([ "action" : HIM"��ӥ���������������������֮��ӥ�۴����ʣ���ӥ������������һ��ǿ�����������Ĺ���$n��"NOR,
             "dodge"      :  -30,
             "parry"      :  -30,
             "damage"     :  250,
             "post_action":               (: sp2 :),
             "damage_type":  "����",
]),


});

object room2;
void create()
{
        set_name(HIM"����"NOR ,({"manes hawk", "hawk"}) );
        set("race", "Ұ��");
        set("nickname", HIG"��ӥ"NOR);
        set("age",534);
        set("long","����������ɽ�������������Ϊһ���ϡ�����ݣ��������ػ��������Ҫʹ��\n����ǰ���ʼ������Ϊ���ʥ�ޣ���˵��ͨ����ԣ���Ϊ���ġ�\n");
        set("str", 50);
        set("cor", 50);
        set("int", 50);
        set("con", 50);
        set("cps", 50);
        set("spi", 50);
        set("per", 50);
        set("kar", 50);
        set("kee", 50000);
        set("gin", 20000);
        set("sen", 20000);
        set("atman",20000);
        set("mana",20000);
        set("force", 100000);
        set("max_kee", 50000);
        set("max_atman",20000);
        set("max_mana",20000);
        set("max_gin", 20000);
        set("max_sen", 20000);
        set("max_force", 100000);
        set("score",100000);
        set("bellicosity", 5000);
        set_skill("move",120);
        set_skill("dodge",120);
        set_skill("parry",120);
        set("force_factor",15);
        set_skill("unarmed",120);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs",({"bite","claw"}));
        setup();

        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();
}

mapping query_action(object me)
{
    return action[random(sizeof(action))];
}

void hawk1(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIB"\nȺɽ����ܵ�"HIG"$N"HIB"��Х��������˲����������γ�����������¡��������$n��\n"NOR),me,victim);
               victim->receive_damage("gin", victim->query("max_gin",1)/10);
               victim->receive_damage("sen", victim->query("max_sen",1)/10);
               victim->start_busy(1);
               COMBAT_D->report_status(victim, 1);
}

void hawk2(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIC"\n��������˲���糱ˮ������ͣ��$n"HIC"�ܳ���Ӱ�콥�������������ж������á�\n"NOR),me,victim);
               victim->receive_damage("kee", victim->query("combat_exp",1)/15000);
               COMBAT_D->report_status(victim, 1);
}

void hawk3(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIY"\n\n-----  "HIM"��  "HIB"��  "HIC"�� "HIW"�� "HIR"ɱ  "HIY"-----\n\n"HIG"���Ʈ���������������ƻã����ɵ��¹�����������Ů��������Ӱ�������裬����������һ��\n"HIG"��������Ϣ���������������ⲻ֪ɱ���ƽ���ֻ��Ů��˲�仯Ϊӥ�������ǰ�ķ���$n��\n"NOR),me,victim);
               victim->receive_damage("kee", victim->query("max_kee",1)/10);
               victim->add("force", -(victim->query("max_force",1)/10));
               COMBAT_D->report_status(victim, 1);
}

void hawk4(object me, object victim, object  weapon, int damage)
{
    int hawkup;
    hawkup = victim->query("combat_exp",1)/10000 + victim->query("max_force",1)/15 + victim->query("max_kee",1)/15;

     message_vision(sprintf(HIY"\n��ӥ����Ӷ�˫�����һ���紵ɳ��˲�䳾ɳ����������������������ͣ��\n"NOR),me,victim);
               victim->receive_damage("kee", hawkup,me);
               COMBAT_D->report_status(victim, 1);
}

void hawk5(object me, object victim, object  weapon, int damage)
{
  int i;
  message_vision(HIM"\n��ӥ"HIG"������Х�ÿɺ޵������ǣ������µ���ȥ�ɣ�\n                                             "HIY"���װ������Һ������Ǵ�ػ���ɣ�\n                                             "HIR"��𰡣�������������������հɣ�\n\n"HIM"˲����Ϊ֮��������ս����������ף��ص�ӿ�������һ�ͬʱ����$n��\n\n"NOR,me,victim);
  for(i=1;i<=6;i++)
  {
    switch(random(i)+2)
    {
     case 1:
message_vision(sprintf(HIG"      �ߣߨx�y�z�{�|�}�~�� $N"HIY"���쳤Х�����װ�������������������ɡ�"HIG"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
     break;
     case 2:
message_vision(sprintf(HIG"      �ߣߨx�y�z�{�|�}�~�� $N"HIR"���쳤Х���ػ𰡣����մ�����������ɡ�"HIG"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
     break;
     case 3:
message_vision(sprintf(HIG"      �ߣߨx�y�z�{�|�}�~�� $N"HIY"���쳤Х��ŭ�װ������Ƹ������������ɡ�"HIG"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
     break;
     case 4:
message_vision(sprintf(HIG"      �ߣߨx�y�z�{�|�}�~�� $N"HIR"���쳤Х��ħ�𰡣��ٻ��������������ɡ�"HIG"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
     break;
     case 5:
message_vision(sprintf(HIG"      �ߣߨx�y�z�{�|�}�~�� $N"HIY"���쳤Х�����װ���ŭХ������������ɡ�"HIG"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
     break;
     case 6:
message_vision(sprintf(HIG"      �ߣߨx�y�z�{�|�}�~�� $N"HIR"���쳤Х����𰡣���ҫ������������ɡ�"HIG"���~�}�|�{�z�y�x�ߣ�\n"NOR),me,victim);
     break;
     }
  if( 80 >random(100) )
     {
          message_vision(sprintf(HIB"$n�����׻�����֮�ˣ��������Ѿ�һ��һ�ε����������ˣ�\n"NOR),me,victim);
          victim->receive_wound("kee",800,me);
          if(i != 7)
          COMBAT_D->report_status(victim,1);
          else if( damage <=0 )
          COMBAT_D->report_status(victim,1);
     }
     else
     {
           message_vision(sprintf(WHT"$n��ǧ��һ��֮�ʶ�����׻��������˺���\n"NOR),me,victim);
     }
   }
  }

void init()
{
       
      set_heart_beat(1);
}
void sp1(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIY"\n\n$N�������š�\n                    "HIB"��"HIR"��    "HIW"��    "HIG"��    "HIY"��    "HIC"��    "HIG"��    "HIR"��    "HIB"��    "HIM"ǰ"HIB"��\n                    "HIB"��   "HIW"��    ��    ��    ��    ��    ��    ��    ��   "HIB"��\n                    "HIB"������������������"HIM"��"HIC"��          "HIR"а"HIM"��"HIB"������������������\n\n"HIR"���Ŵ�ص�Զ�������ܵ��ٻ���Х����������ӥ���������Х���������˲�䴩͸$n�����塣\n\n"NOR),me,victim);
               victim->receive_damage("kee", 800 );
               COMBAT_D->report_status(victim, 1);
}

void sp2(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIM"\n          ��  ��  ��  "HIC"ѩ  ��  ��  ��  "HIW"��  "HIG"��  ��  "HIB"��  ��  "HIM"��  ��  ��\n"NOR),me,victim);
               victim->receive_damage("kee", 300 );
               victim->receive_damage("gin", 300 );
               victim->receive_damage("sen", 300 );
               victim->add("force", -500 );
               victim->start_busy(1);
               COMBAT_D->report_status(victim, 1);
}

void invocation(object who,object room)
{
        int i;
        object *enemy;
		room2=room;

        message("vision",
          NOR+name() + HIY + "������������:\n"HIR"                   �޴����˰��������˺����ػ��������ͽ����\n"HIR"               �����������ӥ�ػ��ڴ�,�����㳢����������ζ.....\n"NOR,
                environment(), this_object() );
        enemy = who->query_enemy();
        i = sizeof(enemy);
        while(i--) {
                if( enemy[i] && living(enemy[i]) ) {
                        kill_ob(enemy[i]);
                        if( userp(enemy[i]) ) enemy[i]->fight_ob(this_object());
                        else enemy[i]->kill_ob(this_object());
                }
        }
		set_leader(who);
        command("defend "+who->query("id"));
        who->set_temp("have_hawk",1);
        
}

void heart_beat()
{
 object env,me,*enemy,target,ob,who;
 int kee,i;

   i=random(sizeof(enemy));
   ob=this_object()->query_enemy();
 me = this_object();
 who = query_leader();
 env = environment(me);
        if(!who){
        call_out("leave",0);
        return ;
        }
		if (!me->is_fighting() ) {
	     call_out("leave",0);
	     return;
	    }
	    if(environment(me)!=environment(who)||!who->is_fighting()) {
             call_out("leave",0);
             return;
         }
/*        if(!target->is_fighting())
        {
        call_out("leave",0);
        return;
        } */
 if( random(100) < 50)
 {
    enemy=me->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    kee = random(target->query("kee")*0.4);
    if( env == environment(target) )
    {
message_vision(HIY"���ܾ���һ����������$N���������ˤ�ڵء�\n"+NOR,target);
      target->receive_damage("kee", kee);
      target->receive_wound("kee", random(kee) );
      target->receive_wound("sen", random(5) );
      target->receive_wound("gin", random(5) );
      COMBAT_D->report_status(target,0);
    }
	}
        
     
 

 if((me->query("kee")<me->query("max_kee")*0.1) && (random(100) < 5) )
 {
    tell_room(environment(), HIG"��ӥ"HIC"�ۼ����˵�������"NOR+RED"���в�ώ"HIC"������������ͣ������"HIY"�����"HIC"��"HIG"������"HIC"��˲��"HIM"�������"HIC"��ۣ��������\n\n                    "HIW"����"HIR"ӥ�������ꡡ����"HIY"���������졡�����ء�"HIW"��"NOR"\n\n"HIM"��ӥ�������¾�������Ӱ���ϵ��Ǵ�˲Ϣ�䱼����˲�����������һ������ӥ�Ա�����һ��\n�޴�Ļ��������������������������������ﾡ��������������ӥ������˳���ӹ���һ������\n"+NOR);
   ob->die();
 }

   ::heart_beat();

}

void leave()
{
        object who = query_leader();

        message_vision ("$N"HIY"˵��:��֮���ξ��ˣ����˶�����أ�\n" +
        HIC"���ܽ�������һ������$N"HIC"��Х��������ɳ۶�ȥ��\n" NOR, this_object());
        if (who)
        who->set_temp("have_hawk",0);
        destruct(this_object());
}

void unconcious ()
{
        object who = query_leader();
        if (who)
        who->set_temp("have_hawk",0);
  message_vision (HIR"$N�ҽ�һ���������������Ϊ���У���ʧ����Ӱ���١�\n", this_object ());
  destruct (this_object());
}

void die()
{
        object who = query_leader();
        if (who)
        who->set_temp("have_hawk",0);
        message_vision ("$N"HIR"�ҽ�һ��  ����  ˡ���޷��ٱ��������ˡ�\n"NOR, this_object());
        destruct (this_object());

        ::die();
}
