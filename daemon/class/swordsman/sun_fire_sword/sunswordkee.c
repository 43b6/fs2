// appo ����..����ǰ..���ȸ�֪
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me)
{
        string msg;
        int i,j;
        object ob,room,*enemy,target;
        room = environment(me);
        enemy=me->query_enemy(room);
        i=sizeof(enemy);
        target=offensive_target(me);
        if(!(ob=me->query_temp("weapon")) || (string)ob->query("skill_type") != "sword")
           return notify_fail("����Ҫװ��һ�ѽ��ᣬ����ʩչ�������߻�����\n");
        if(me->query("quests/sunfire")!=1)
           return notify_fail("��Ľ����ļ��ɲ����޷�ʹ���������߻�����\n");
        if(me->query_temp("usesunsword",1))
           return notify_fail("���Ѿ������ˡ�\n");
        if(!me->is_fighting())
           return notify_fail("�������߻���ֻ����ս����ʹ�á�\n");
     if(environment(me)!=environment(target))
            return notify_fail("û����..��ƨ��..��\n");
        if(!enemy)
           return notify_fail("��û����..����ŷ��\n");
        if(me->query("force") < 1000)
           return notify_fail("�������������\n");
        me->add("force",-100);
        message_vision(HIY"\n
$N�󿪴��أ��ڻ���������������ֻ��������㽥����$N���Ͼۼ�...ת�ۼ�.
       $Nҫ�����..������������˲��ת�Ƶ��佣��...ֻ��$N��:
                            "HIW"��"HIC"����     �ϡ�"HIW"��\n"NOR"
              "HIG"��"HIR"    �� �� �� �� �� �� �� �� �� �� �� �� ն  "HIG"��
                                      "WHT"����"NOR"
                                       "RED"��"NOR"
                               "WHT"����    "RED"��    "WHT"����"NOR"
                                "RED"��     "RED"��     "RED"��"NOR"
                         "WHT"����   "RED"��  "CYN"��������  "RED"��   "WHT"����"NOR"
                          "RED"��    "RED"��   "HIY"������"NOR"   "RED"��    "RED"��"NOR"
                   "WHT"����   "RED"��  "CYN"������ "HIY"������"NOR" "CYN"������  "RED"��   "WHT"����"NOR"
                    "RED"��    "RED"��  "HIC"������ "HIY" ����  "HIM"��Ϧ��"NOR"  "RED"��    "RED"��"NOR"
                    "RED"��  "CYN"������"HIC"������ "HIY" ����  "HIM"������"NOR""CYN"������  "RED"��"NOR"
                    "RED"��  "HIW"���ޣ�"HIC"��  �� "HIY" ����  "HIM"��  ��"HIG"��ů��"NOR"  "RED"��"NOR"
                  "CYN"������"HIW"������"HIC"��  �� "HIY" ����  "HIM"��  ��"HIG"������"NOR""CYN"������"NOR"
                  "HIR"���ң�"HIW"��  ��"HIC"��  �� "HIY" ����  "HIM"��  ��"HIG"��  ��"HIB"���У�"NOR"
	          "HIR"������"HIW"��  ��"HIC"��  �� "HIY" ����  "HIM"��  ��"HIG"��  ��"HIB"������"NOR"
	          "HIR"��  ��"HIW"��  ��"HIC"��  �� "HIY" ����  "HIM"��  ��"HIG"��  ��"HIB"��  ��"NOR"
                  "HIR"��  ��"HIW"��  ��"HIC"��  �� "HIY" ����  "HIM"��  ��"HIG"��  ��"HIB"��  ��"NOR"
                  "HIR"��  ��"HIW"��  ��"HIC"��  ��  "HIY"����  "HIM"��  ��"HIG"��  ��"HIB"��  ��"NOR"
	          "HIR"��  ��"HIW"��  ��"HIC"��  ��        "HIM"��  ��"HIG"��  ��"HIB"��  ��"NOR"
		  "HIR"��  ��"HIW"��  ��"HIC" �ܣ�         "HIM" �ܣ� "HIG"��  ��"HIB"��  ��"NOR"
		  "HIR"��  ��"HIW"��  ��                    "HIG"��  ��"HIB"��  ��"NOR"
		  "HIR"��  �� "HIW"�ܣ�                     "HIG" �ܣ� "HIB"��  ��"NOR"
		  "HIR"��  ��                                "HIB"��  ��"NOR"
 		   "HIR"�ܣ�                                 "HIB" �ܣ�"NOR"
\n"NOR,me);
     message_vision(HBYEL"$N����������������˲�������ռ�������ڽ��ɫ�Ľ�����..\n"NOR,me);
     for(j=0;j < i;j++)
     {
           enemy[j]->receive_damage("kee",300+random(200));
           enemy[j]->start_busy(1);
           COMBAT_D->report_status(enemy[j]);
          }
           me->add("force",-50);
           me->start_busy(1);
        call_out("act1",0,msg,target,me);
        message_vision( NOR,me);
return 1;
}
int act1(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        kee_lv=me->query_function("sunswordkee");
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("��û����..����ŷ��\n");
        }
        else
        {
        damage = 50 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N�������������������˹�â...\n"NOR,me);
     for(i=0;i < j;i++)
     {
 if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))
          {
           message_vision(HBCYN"$N���·ת�ھ���Ȼ�ϴ�ʹ��"HIY"���������顯,"HIC"��������������ֱ��$n�Ŀڡ�\n"NOR,me,enemy[i]);
           message_vision(HIR"$n���㲻�����������˺��Ľ����ᴩ��\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           COMBAT_D->report_status(enemy[i]);
          }
         else {
           message_vision(HBCYN"$N���·ת�ھ���Ȼ�ϴ�ʹ��"HIY"���������顯,"HIC"��������������ֱ��$n�Ŀڡ�\n"NOR,me,enemy[i]);
           message_vision(HIB"$nȫ���ע����$N���ڷѾ�ǧ�����֮�������ҳ�������������һ����\n"NOR,me,enemy[i]);
           me->add("force",-20);
          }
        }
        me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
        call_out("act2",1,msg,target,me);
        return 1;
        }
}

int act2(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        kee_lv=me->query_function("sunswordkee");
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("��û����..����ŷ��\n");
        }
        else
        {
        damage = 70 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N�������������������˹�â...\n"NOR,me);
     for(i=0;i < j;i++)
     {
if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))
          {
            message_vision(HBCYN"$N�չ�Ϊ�����ճ��ᣬʹ����"HIY"������ǧ�⡯,"HIC"˲������Ӱ�䲽������ֱ��$n��\n"NOR,me,enemy[i]);
            message_vision(HIR"$n���㲻�����������˺��Ľ����ᴩ��\n"NOR,me,enemy[i]);
            me->add("force",-50);
            enemy[i]->receive_damage("kee",damage);
            COMBAT_D->report_status(enemy[i]);
          } else {
            message_vision(HBCYN"$N�չ�Ϊ�����ճ��ᣬʹ����"HIY"������ǧ�⡯,"HIC"˲������Ӱ�䲽������ֱ��$n��\n"NOR,me,enemy[i]);
            message_vision(HIB"$nȫ���ע����$N���ڷѾ�ǧ�����֮�������ҳ�������������һ����\n"NOR,me,enemy[i]);
            me->add("force",-20);
          }
        }
       me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
       call_out("act3",1,msg,target,me);
       return 1;
       }
}

int act3(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        kee_lv=me->query_function("sunswordkee");
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("��û����..����ŷ��\n");
        }
        else
        {
        damage = 90 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N�������������������˹�â...\n"NOR,me);
     for(i=0;i < j;i++)
     {
 if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))

          {
           message_vision(HBCYN"$N�����ԾٿȻʹ����"HIY"������������,"HIC"��������ջԻͣ���ֱ����$nü�ġ�\n"NOR,me,enemy[i]);
           message_vision(HIR"$n���㲻�����������˺��Ľ����ᴩ��\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           enemy[i]->set_temp("no_power",1);
           enemy[i]->apply_condition("no_power",1);
           COMBAT_D->report_status(enemy[i]);
          } else {
           message_vision(HBCYN"$N�����ԾٿȻʹ����"HIY"������������,"HIC"��������ջԻͣ���ֱ����$nü�ġ�\n"NOR,me,enemy[i]);
           message_vision(HIB"$nȫ���ע����$N���ڷѾ�ǧ�����֮�������ҳ�������������һ����\n"NOR,me,enemy[i]);
           me->add("force",-20);
          }
        }
        me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
        call_out("act4",1,msg,enemy,me);
        return 1;
        }
}

int act4(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        kee_lv=me->query_function("sunswordkee");
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("��û����..����ŷ��\n");
        }
        else
        {
        damage = 100 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N�������������������˹�â...\n"NOR,me);
     for(i=0;i < j;i++)
     {
 if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))

          {
           message_vision(HBCYN"$N�����ι�ʹ����������.ʹ��"HIY"��ů���޷桯,"HIC"������ȼ��һ�����Ľ�ѹ�ƽ�$n��\n"NOR,me,enemy[i]);
           message_vision(HIR"$n���㲻�����������˺��Ľ����ᴩ��\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           COMBAT_D->report_status(enemy[i]);
           } else {
           message_vision(HBCYN"$N�����ι�ʹ����������.ʹ��"HIY"��ů���޷桯,"HIC"������ȼ��һ�����Ľ�ѹ�ƽ�$n��\n"NOR,me,enemy[i]);
           message_vision(HIB"$nȫ���ע����$N���ڷѾ�ǧ�����֮�������ҳ�������������һ����\n"NOR,me,enemy[i]);
           me->add("force",-20);
          }
        }
               me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
         call_out("act5",1,msg,target,me);

        return 1;
        }
}
int act5(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        j=sizeof(enemy);
        kee_lv=me->query_function("sunswordkee");
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("��û����..����ŷ��\n");
        }
        else
        {
        damage = 110 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N�������������������˹�â...\n"NOR,me);
     for(i=0;i < j;i++)
     {
        if(!enemy[i]) continue;
 if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))

          {
           message_vision(HBCYN"$N�����羲������ֹˮ�������ޣ�"HIY"���������⡯,"HIC"���𲨲�ɱ��������$n������ȥ��\n"NOR,me,enemy[i]);
           message_vision(HIR"$n���㲻�����������˺��Ľ����ᴩ��\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           COMBAT_D->report_status(enemy[i]);
          } else {
           message_vision(HBCYN"$N�����羲������ֹˮ�������ޣ�"HIY"���������⡯,"HIC"���𲨲�ɱ��������$n������ȥ��\n"NOR,me,enemy[i]);
           message_vision(HIB"$nȫ���ע����$N���ڷѾ�ǧ�����֮�������ҳ�������������һ����\n"NOR,me,enemy[i]);
           me->add("force",-20);
          }
        }
        me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
        call_out("act6",1,msg,target,me);
        return 1;
        }
}
int act6(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        kee_lv=me->query_function("sunswordkee");
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("��û����..����ŷ��\n");
        }
        else
        {
               damage = 120 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N�������������������˹�â...\n"NOR,me);
     for(i=0;i < j;i++)
     {
if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))
          {
           message_vision(HBCYN"$N�����ϳ���"HIC"���ʶ��룬�۾�����ʹ��"HIY"������������,"HIC"ֻ�������糿��է�ֻ���$n��\n"NOR,me,enemy[i]);
           message_vision(HIR"$n���㲻�����������˺��Ľ����ᴩ��\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           enemy[i]->start_busy(2);
           enemy[i]->set_temp("no_power",1);
           enemy[i]->apply_condition("no_power",1);
           COMBAT_D->report_status(enemy[i]);
          } else {
           message_vision(HBCYN"$N�����ϳ���"HIC"���ʶ��룬�۾�����ʹ��"HIY"������������,"HIC"ֻ�������糿��է�ֻ���$n��\n"NOR,me,enemy[i]);
           message_vision(HIB"$nȫ���ע����$N���ڷѾ�ǧ�����֮�������ҳ��������ع���Ҫ����һ��
                                �ڱܹ�ɱ��֮���������в���$n���౻�����ü����˿ڡ�\n"NOR,me,enemy[i]);
           me->add("force",-20);
           enemy[i]->receive_damage("kee",50);
           enemy[i]->start_busy(1);
          }
        }
        me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
        call_out("act7",1,msg,target,me);
        return 1;
        }
}
int act7(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        j=sizeof(enemy);
        me->delete_temp("usesunsword");
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("��û����..����ŷ��\n");
        }
        else
        {
        damage = 150 + kee_lv + random(me->query_skill("sun_fire_sword"));
        kee_lv=me->query_function("sunswordkee");
        message_vision(HBCYN"$N�������������������˹�â...\n"NOR,me);
     for(i=0;i < j;i++)
     {
         if( environment(me) != environment(enemy[i]) || (!enemy[i]) )
          return 1;
if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))
            {
           message_vision(HBCYN"$N������佣"HIC"����������ĺɫ��Ľ�����"HIY"��Ϧ�����ġ�,"HIC"����ϼ�����쾡��$n���ϡ�\n"NOR,me,enemy[i]);
           message_vision(HIR"$n���㲻�����������˺��Ľ����ᴩ��\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           COMBAT_D->report_status(enemy[i]);
          } else {
           message_vision(HBCYN"$N������佣"HIC"����������ĺɫ��Ľ�����"HIY"��Ϧ�����ġ�,"HIC"����ϼ�����쾡��$n���ϡ�\n"NOR,me,enemy[i]);
           message_vision(HIB"$nȫ���ע����$N���ڷѾ�ǧ�����֮�������ҳ�������������һ����\n"NOR,me,enemy[i]);
           me->add("force",-20);
         }
     }
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
    return 1;
  }
}

