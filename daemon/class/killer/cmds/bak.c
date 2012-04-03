#include <ansi.h>

inherit F_GUILDCMDS;

void do_kill(object ,object);
void do_fkill(object ,object);

int main(object me, string arg)
{
        object env, target, weapon1, weapon2;
        object *inv;
        int i;
        env = environment(me);

        if( arg=="vis" ) {
                if( !me->query_temp("invis") )
                   return notify_fail("�������û�ڲ�������\n");
                message_vision(HIY"$N�ӷ���Ľ��������˳�����\n"NOR,me,target);
                me->delete_temp("invis");
                  }
        if( arg=="invis" ) {
                if( me->query_temp("invis") ){
                   return notify_fail("�㲻���Ѿ�����������\n");  }
                if (me->is_fighting()) { //�����������䱳�̣�
             return notify_fail("��ģ�ս���У��˼ҿ����㣬��ظ�ƨѽ��\n"); }

           inv = all_inventory(env);
           for( i=0; i<sizeof(inv); i++ ) {
                if( userp(inv[i]) && inv[i]!=me )
                   return notify_fail("���ﻹ�б����ڣ����ڲ���ᱻ���ֵġ�\n");
                                       }
                tell_object(me,HIY"���ҵ�һ�����ܵĽ��䣬������������\n"NOR);
                me->set_temp("invis",1); 
                 } 
        if( arg == "vis" || arg == "invis" ) return 1;
        if( !arg || arg=="") return notify_fail("�� help bak �ۿ�ָ���ʽ��\n");
        target=present(arg,environment(this_player()));
        if(!target) {
                write(HIC+"����û�� "+arg+" �����ม�\n"+NOR);
                return 1;  }

        if( (!(weapon1= me->query_temp("weapon")) 
            ||  (string)weapon1->query("skill_type") != "dagger")
            && (!(weapon2= me->query_temp("secondary_weapon")) 
            ||  (string)weapon2->query("skill_type") != "dagger") ) {

             return notify_fail(HIY"��û��ذ�ף�û�а취��ɱ���ˡ�\n"NOR);
             return 1;
              }
        if( environment(me)->query("no_fight") )  {
              return notify_fail(HIY"���ﲻ׼ս����\n"NOR);
             }
        if(wizardp(target) && !wizardp(me)) {
            return notify_fail(HIY"ɵ����,���Ӯ��ʦ�ġ�\n"NOR);
            }
        if(target==me) return notify_fail (HIY"Ҫ��ɱ�Լ�,�������\n"NOR);
         call_out("do_kill", 1, me, target);
         call_out("do_fkill", 1, me, target);
           return 1;
}
void do_kill(object me,object target)
{
      object env, weapon;
      object *inv;
      int i;
if(!me || !target) return ;
if( !me->is_fighting() && target->query("kee") > 0 ) {     
   if( !me->query_temp("invis") ) {
       tell_object(me,HIY"��û��������,�ᱻ���ֵġ�\n"NOR);
       return 0;    } 
   if (me->query("max_sen")!=me->query("sen")  ) {
      tell_object(me,HIY"��û���㹻����,ȥ����һ�εĴ�ɱ��\n"NOR);
      return 0;    }
       
    if(target !=me )
   {
      message_vision(HIC+"$N͵͵�������ߵ�$n����\n"+NOR,me,target); 
  if(random(10) > 2)
    {
       switch(random(3))
       {
         case 0:
      message_vision(HIW+"\n$N�Լ�����ٶȣ���׼$n����һ�̣�ʹ$n�ܵ�������˺���\n"+NOR,me,target);     
             target->receive_wound("kee", (int)target->query("max_kee")*20/100);
         break;
         case 1:
      message_vision(HIW+"\n$N����$n�ı����ݺ�һͱ��ʹ$nѪ����ֹ��\n"+NOR,me,target);
             target->receive_wound("kee", (int)target->query("max_kee")*15/100);
         break;
         case 2:
     message_vision(HIW+"\n$N������Ϣ���԰����ַ�����ذ����$n����һ�ӣ�ʹ$n�ܵ�����Ĵ����\n"+NOR,me,target);
             target->receive_wound("kee", (int)target->query("max_kee")*25/100);
        break;
       }
    message_vision(HIR+"\n$n�����ϲ���$N��ذ��,��ŭ����ɱ��$N��\n"+NOR,me,target);

    // ˫������  �Ը�Ϊ��
      if (weapon=me->query_temp("secondary_weapon"))           
      { weapon=me->query_temp("secondary_weapon"); }
      else { 
      weapon=me->query_temp("weapon"); 
            }

      weapon->unequip();
      weapon->move(target);

    //�ı����� 
      if ( weapon->query("BAK")!="USED" ) {
       weapon->set("name","ȾѪ��"+weapon->name()+"");   }

    //ÿ��һ�� �����ͱ仵       
      if ( weapon->query("weapon_prop/damage") >= 3 )
      { weapon->add("weapon_prop/damage", -3 ); }
      else { 
       weapon->set("value", 0 );
       weapon->set("no_sell",1);
       weapon->set("weapon_prop", 0); 
      }
 
      weapon->set("BAK","USED");
      me->reset_action();
      me->kill_ob(target); 
      target->kill_ob(me);
      me->delete_temp("invis");
      me->receive_damage("sen", (int)me->query("sen")/10  );
      target->apply_condition("bleeding",random(10)+1);
    }
   else {
      message_vision(HIW+"\n$nͻȻ������$N�Ĵ��ڣ�ʹ$N�Ҳ������ֵĻ��ᡣ\n"+NOR,me,target);
      me->add("sen",-10);
      me->delete_temp("invis");
        }
     }
  }
}
void do_fkill(object me,object target)
{
      object env, weapon;
      object *inv;
      int i, bel;
      if(!me || !target) return ;
      bel=(int)me->query("bellicosity");
// ���������ܶ�ɱ����ɱ�ֶ�ɱ���仹���� cmd bc ����
// ɱ��ɱ�����ܶ�������ֻҪɱ������10�����϶��б�ɱ
// ����������  By Swy
      if( bel > 30000 ) bel=30000;
if( me->is_fighting(target) )
{
  if ( bel < 20 ) { 
       tell_object(me,HIY"���ɱ�������!\n"NOR);
       return 0; }
  if ( me->query("force") < 20 ) {
        tell_object(me,HIY"������������!\n"NOR);
       return 0;   }
  if ( me->is_busy() ) {
       tell_object(me,HIY"��Ļ�û��׼��������һ���Ĵ�ɱ��\n"NOR);
      return 0; }

   if(target !=me )
   {
     message_vision(HIM+"\n$N��ذ�ף����˾ʹ̡�\n"+NOR,me,target);
     if (  random(10) > 2 ) {
   switch(random(3))
    {
      case 0:
     message_vision(HIW+"$N����$n���Ĵ�С�ɱɱɱ��,������$n�����Ҵ�ȥ��\n"+NOR,me,target);
          target->receive_wound("kee", bel/25 );
          me->add("force",-20);
      break;
      case 1:
    message_vision(HIW+"$N���һ����ɱ�ڡ���$n���ٳ��ȥ,���ҵض�$n���˼��¡�\n"+NOR,me,target);
          target->receive_wound("kee", bel/20 );
          me->add("force",-20);
      break; 
      case 2:
    message_vision(HIW+"$N��¶�׹⣬�͵ض�׼$nֱ����ȥ�����л�����������Ц�š�\n"+NOR,me,target);
          target->receive_wound("kee", bel/15 );
          me->add("force",-20);
      break;
     }
    COMBAT_D->report_status(target);
    me->start_busy(random(3)); 
   }
  else {
    message_vision(HIW+"\n$n����һ�㣬$N�Ĵ�ɱ��$n�����ˡ�\n"+NOR,me,target);
         me->add("force",-20);
         inv = all_inventory(environment(target));

       for(i=0;i<sizeof(inv);i++)
       {
      if(inv[i]->is_character() && inv[i]!=target && inv[i]!= me 
         && !inv[i]->is_corpse() && inv[i]->query("id")!=me->query("sub_id")
         && inv[i]->query("sub_id")!=me->query("id")  )
          {
            if(random(2)==0)
            {
               target = inv[i];
    message_vision(HIC+"$N���������Ա߹ۿ����ֵĵ�$n��\n"+NOR,me,target);
    message_vision(HIC+"$n����$N˵��: �ɶ�! ���Ҵ���,��Ҫ������ۡ�\n"+NOR,me,target);
         target->receive_wound("kee", bel/25 );
         target->fight_ob(me);
            }
          }
       }
    }
  }
}
        if(!target) return ;
      if ( (int)target->query("kee") < 0  )
      target->die();
}
int help(object me)
{
        write(@HELP

ָ���ʽ�� cmd bak [���� | invis | vis]

˵���� cmd bak [invis]
       ����ʹ���������,��ֻ�ܲ����������,���߶�����ʧ��
       cmd bak [vis]
       ��ͬһ���������ʹ��ȡ������,Ҳ���߶���ȡ����
       cmd bak [����]
       ���������ɱ����,�ֿɷ�Ϊ����:
     1.һ��ΪҪ������ɱ,����û��ս����ʹ��,�˽�ʹ�����ܵ�����Ĵ���
       �����������ڵ�������,���������öȻ����,��ʹ����Ѫ����ֹ��
     2.��Ϊս���з���ɱ,�������,��Ҫɱ����������,������С�ܶ�,������
       �Թ����ڵĻ�С�Ĵ�������,��Ҳ��������Ĩۡ�

       *������--����˫���ò�ͬ������ʹ�ñ��� ������һ֧��Ϊذ��*
HELP);
        return 1;
}
