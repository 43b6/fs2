//ư��ָ����ר������......

#include <weapon.h>

#include <ansi.h>

inherit STABBER;
int lv_check(object ob);
int do_shoot();
object user=this_player();
void create()
{
        object me=this_player();
        set_name(HBMAG+HIC"Ʈ"HIR"��"HIW"��"NOR, ({"finger fan", "fan"}) );
        set_weight(10000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        set("no_put",1);
        set("no_give",1);
        set("no_sac",1);
        set("no_steal",1);
        set("finger-fan",1);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","
��ǰ��������ʦ��ʤ������˼����һ�ֿ��԰ٷ�֮�ٴ����ھ�������������Ƴɣ�
�Ǳ�ʤ��Ϊ�μ��������ռ�������������ս�������(shoot)��ǰ������Ʈ���ȵ�
һ��ָ���˺����ˡ�
cf ���Բ�鿴fan���滹���м�ֻ����
��Ʈ��ָ���ĵȼ�����90����ʱ����set fan_auto_shoot�����Զ����ָ��
����Ҫ��shoot���䡣\n");
          set("value", 10000);
          set("material", "crimsonsteel");
          set("wield_msg", HIY"$N��$n"HIY"�������ϣ��о�ȫ����ھ���������ֹͣ������$n"HIY"�С�\n"NOR);
          set("unwield_msg", HIY"$N��$n"HIY"���$n"HIY"��ר��Ƥ���ڣ���Ȼ��һ��ʧ��С�\n"NOR);
         }
        init_stabber(100);
        setup();
}
void init()
{
     add_action("do_drop","drop");
     add_action("do_auc","auc");
     add_action("do_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
     add_action("do_shoot","shoot");
     add_action("do_check","cf");
}

int do_wield(string str)
{

     if(!query("equipped") )
     {
        user = this_player();
        set_heart_beat(1);
     }
}
int do_drop(string str)
{
   if(str=="finger fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}
int do_give(string str)
{
   if(str=="finger fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
    if(str=="finger fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}
int do_auc(string str)
{
    if(str=="finger fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}

int do_shoot()
{
    object me,*enemy;
    int i,j,fun,damage,k,sk_lv,power;
    me=user;
    if(!me) return notify_fail("�޷�ʹ��, ����unwield����wield����!!\n");
    enemy=me->query_enemy();
    j=sizeof(enemy);
    fun=me->query("functions/fan-finger/level");
    damage=fun*(random(7)+1);
    if(damage < 100 )
            damage=100;
    if(damage > 700)
            damage=700;


    if(!query("equipped"))
            return 0;

    if(me->is_busy())
            return 0;

    if(!(me->query("family/family_name")=="�μ�" && me->query("marks/fan-finger") && me->query("marks/six_sp")==3))
    {
    write("�㲻���ʸ�ʹ�ñ���,�ҽ������ȥ!!!\n");
    message_vision(HIM"ֻ��һ��������Ϲ���$N"+HIM+"����,$n����һ��,ȴ����$N"+HIM+"����$n��������ʧ����!!!",this_object(),me);
    if(query_heart_beat())
    set_heart_beat(0);
    destruct(this_object());
    }

    if(!me->query_temp("fan-finger"))
            return notify_fail(HIC"�㲢û������һ��ָ����"HIC"Ʈ"HIY"��"HIW"����!!\n"NOR);

    if(!me->is_fighting())
            return notify_fail(HIY"ֻ����ս���вſ���ʹ�á�Ʈ��ָ������\n"NOR);

    if(me->query("force") <= 100)
            return notify_fail(HIR"��������Ѿ��þ�����û��������������Ʈ��ָ������\n"NOR);

    if(me->query_temp("finger-rest",1))
            return notify_fail(HIY"����Ϊʹ����Ʈ��ָ������ʹ���������Ϣ������������ʱ�޷���ʹ����Ʈ��ָ������\n"NOR);

    if(me->query_temp("fan_damage_up")){
      me->delete_temp("fan_damage_up");
      power=me->query("combat_exp")/2000000+1;
      damage=damage*power;
      if(damage > 4000) damage=4000;
      me->add("force",-500);
      message_vision(BLINK+HIY"
$N����ָ���ӳ�ʱ�Ƕȵ���Ҫ�ԣ����е�"+NOR+"$n"+BLINK+HIY+"��һ��������ȫ�޷�����ĽǶȻ��˳�ȥ!!\n"NOR,me,this_object());
    }
	
    if(wizardp(me))
      tell_object(me,sprintf("damage=%d\n",damage));
    if(fun > 80 && ( me->query("force") > 600 ))
    {
      if(fun>=100 && me->query_temp("fan-finger") >= 5 && (10 > random(100) || wizardp(me)) && me->query("force")>2000 && me->query("env/Ʈ��������") )
      {
      message_vision(HIM"
      $N"HIM"��Ȼ������"BLINK+HIR"��Ʈ��ָ����"NOR+HIM"��"BLINK+HIY"��Ʈ�����ޣ������ݺᡱ"NOR+HIM"�����⣬���д��
      "HBRED+HIY"��Ʈ������ָ�������ɡ���������"NOR+HIM"������$n"HIM"һ������ͬ��ɫ��ָ���ڿ�
      �������������԰�ı�����С�\n
"NOR,me,this_object());
        i=random(j);
          if(enemy[i]){
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") >100000 )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"�еĵ�һʽ"HBRED+HIY"����������"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+1);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
          }
        i=random(j);
          if(enemy[i]){
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") > 100000 )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"�еĵڶ�ʽ"HBMAG+HIY"����������"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                damage=damage+100;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+2);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
          }
        i=random(j);
          if(enemy[i]){
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") > 100000 ){
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"�еĵ���ʽ"HBGRN+HIW"����������"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                damage=damage+200;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+3);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
          }
        for(i=0;i<j;i++)
        {
          if(!enemy[i]) continue;
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") >100000 )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"�еĵ���ʽ"HBYEL+HIC"����������"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                damage=damage+300;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+4);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
        }
        for(i=0;i<j;i++)
        {
          if(!enemy[i]) continue;
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") >100000 )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"�еĵ���ʽ"BLINK+HIC"����������"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                damage=damage+400;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+5);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
        }
        me->add("force",-2000);
        message_vision(HIY"$N��Ϊʹ����"BLINK+HIR"��Ʈ��ָ����"NOR+HIY"�������У����ڵ���Ϣ��й���������ڵ��������ص���ʧ��!!!\n"NOR,me);
        me->add_temp("fan-finger",-5);
        me->set_temp("finger-rest",1);
        call_out("rest",7,me);
        return 1;
        }
        message_vision(HIY"
        $N"HIY"������$n"HIY"����һ�ӣ�һ��������$n"HIY"��Х���������Ǵ��������һ��
        ����"BLINK+HIR"��Ʈ��ָ����"NOR+HIY"�еĵ���ʽ"BLINK+HIC"����������"NOR+HIY"��ָ������Ϊ����������
        ��ı�����С�\n
"NOR,me,this_object());

        for(i=0;i<j;i++)
        {
          if(!enemy[i]) continue;
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                damage=damage+400;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+5);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
        }
        me->add("force",-600);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
        }
        if(fun >60 && ( me->query("force") > 400 ))
        {
        message_vision(HIY"
        $N"HIY"������$n"HIY"����һ�ӣ�һ��������$n"HIY"��Х���������Ǵ��������һ��
        ����"BLINK+HIR"��Ʈ��ָ����"NOR+HIY"�еĵ���ʽ"HBYEL+HIC"����������"NOR+HIY"��ָ����Ϊ������ϸ������
        ������������С�\n
"NOR,me,this_object());

        for(i=0;i<j;i++)
        {
          if(!enemy[i]) continue;
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                damage=damage+300;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+4);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
        }
        me->add("force",-400);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
        }
        if(fun >40 && ( me->query("force") > 200) )
        {
        message_vision(HIY"
        $N"HIY"������$n"HIY"����һ�ӣ�һ��������$n"HIY"��Х���������Ǵ��������һ��
        ����"BLINK+HIR"��Ʈ��ָ����"NOR+HIY"�еĵ���ʽ"HBGRN+HIW"����������"NOR+HIY"��ָ������һ���޴�Ĺ���
        ��������Χ�ĵ��ˡ�\n
"NOR,me,this_object());

        i=random(j);
          if(!enemy[i]) return notify_fail("û�е��˿���ɱ��\n");
          if(enemy[i]){
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                damage=damage+200;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+3);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
        me->add("force",-200);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
          }
        }
        if( fun >20 && ( me->query("force") > 150 ) )
        {
        message_vision(HIY"
        $N"HIY"������$n"HIY"����һ�ӣ�һ��������$n"HIY"��Х���������Ǵ��������һ��
        ����"BLINK+HIR"��Ʈ��ָ����"NOR+HIY"�еĵڶ�ʽ"HBMAG+HIY"����������"NOR+HIY"��ָ���Լ�����ٶȻ�����
        ��Ŀ�����������������������ռ䡣\n
"NOR,me,this_object());

        i=random(j);
          if(!enemy[i]) return notify_fail("û�е��˿���ɱ��\n");
          if(enemy[i]){
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                damage=damage+100;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+2);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
        me->add("force",-150);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
          }
        }
        if(me->query("force") > 100)
        {
        message_vision(HIY"
        $N"HIY"������$n"HIY"����һ�ӣ�һ��������$n"HIY"��Х���������Ǵ��������һ��
        ����"BLINK+HIR"��Ʈ��ָ����"NOR+HIY"�еĵ�һʽ"HBRED+HIY"����������"NOR+HIY"��ָ���Լ�����ٶȻ�����
        ��Ŀ�����������������������ռ䡣\n
"NOR,me,this_object());

        i=random(j);
          if(!enemy[i]) return notify_fail("û�е��˿���ɱ��\n");
          if(enemy[i]){
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"�����岻�ұ�"BLINK+HIR"��Ʈ��ָ����"NOR+HIC"����͸����Ѫ���ϵĴ��˿�������\n"NOR,enemy[i]);
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+1);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"չ������һ������㿪��ָ����Ϯ����\n"NOR,enemy[i]);
                }
        me->add("force",-100);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
          }
        }
}
int rest(object me)
{
        if(!me) return 1;
        if(me->query("functions/fan-finger/level")!=120)
        {
        me->add("functions/fan-finger/learned",random(500));
        if(me->query("functions/fan-finger/learned") >= me->query("functions/fan-finger/level")*me->query("functions/fan-finger/level")*10)
        {
                me->add("functions/fan-finger/level",1);
                me->set("functions/fan-finger/learned",0);
                tell_object(me,HIY);
                tell_object(me,"���Ʈ��ָ����������һ�㡣\n" NOR);
        }
        }
        me->delete_temp("finger-rest");
        return 1;
}
int lv_check(object ob)
{
        if(ob->query_skill("dodge") >=150)
                return 150;
        else
                return ob->query_skill("dodge");
}
int do_check()
{
      object me=this_player();
      int i=me->query_temp("fan-finger");

      printf("Ʈ�����л�����%d֧��������ʹ��!!\n",i);
      if(query_heart_beat())
      printf("�Զ�����������!!\n");
      else if(query("equipped"))
        set_heart_beat(1);
      return 1;
}
void heart_beat()
{
    int ratio;

    if(!user) return ;
    if(!user->query("env/fan_auto_shoot")) return ;
    if(user->query_temp("finger-rest")) return ;
//    if(!userp(this_player(1))) return ;
    if(!user->query_temp("fan-finger")) return ;
    if(user->query("force") <= 100) return ;
    if(!user->is_fighting()) return ;
    if(user->query("functions/fan-finger/level") <90) return ;
    if(user->is_busy()) return ;

    if(wizardp(user)) ratio=95;
    else ratio=50;

    if(ratio >random(100) && !user->query_temp("fan_damage_up"))
      user->set_temp("fan_damage_up",1);

    tell_object(user,sprintf("�����Զ�����!!\n"));
    do_shoot();
    return ;
}


int query_autoload()
{
return 1;
}
