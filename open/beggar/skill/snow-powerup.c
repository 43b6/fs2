#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit F_CLEAN_UP;
int perform(object me, object target)
{
  int skil,value,i;
  int tim;

   if(me->query("force")<50+(int)query_function("snow-powerup")*7)
          return notify_fail("�����������������ʹ����˪�澢���� \n");
   if( me->query("family/family_name") != "ѩ����" )
          return notify_fail("��˪�澢��Ϊѩ�����ڴ�֮���ɡ�\n");
   if( (string)me->query_skill_mapped("unarmed")!= "snow-martial")
          return notify_fail("��˪�澢���������ѩ����ѧ��\n");
   if( (string)me->query_skill_mapped("parry")!= "snow-kee")
          return notify_fail("ʹ����˪�澢������Ҫ�к������塣\n");
   if(me->query("powerup_flag"))
          return notify_fail("���Ѿ������ˡ�\n");
   skil = (int)me->query("functions/snow-powerup/level")/3+
(int)me->query_skill("snowforce",1)/15;
   if( skil > 20 ) skil = 20;
   value = (int)me->query("functions/snow-powerup/level");
   if ( value > 99 )
   { 
      message_vision(HIC"
		$N��ȫ��������ʹ����˪�澢֮���޾�ʽ��
	             "NOR""BWHT""HIW"���ޣ������󣽣���˪������ѩ��"NOR""HIC"
      	    $N�����Χ�ź����������ƺ����Ӿ���㲻�²��죡\n"NOR,me);
	me->add("force_factor",35+me->query("max_force")/1000);
      me->add("force",me->query("max_force"));
    } else if ( value > 49 )
    {
     message_vision(
     HIW"$N������˪�澢֮��߹���---"HIC"��˪�ɾ�"HIW"---ʹ�����������һ�㺮˪��\n
         $N�о����ϵĺ���ԴԴ����!!������֮��ǿ!!!\n" NOR,me);
     me->add("force_factor",30);
    }else if ( value > 39 )
    {
     message_vision(
     HIW"$N������˪�澢�����㹦��---"HIC"��ѩ�ɾ�"HIW"---ʹ������Ϸ���˿˿��ѩ����\n
         $N�о����ϵ�ѩ��ԴԴ����!!������֮��ǿ!!!\n" NOR,me);
      me->add("force_factor",25);
    }else if ( value > 29 )
    {
     message_vision(
      HIW"$N������˪�澢֮�ڶ��㹦��---"HIC"��ˮ�ɾ�"HIW"---�������е�ˮ������ɱ��ǡ�\n
         $N�о����ϵ�ˮ��ԴԴ����!!������֮��ǿ!!!\n" NOR,me);
     me->add("force_factor",20);
    }else
    {
     message_vision(
     HIW"$N������˪�澢֮��һ�㹦��---"HIC"�����ɾ�"HIW"---��������������������\n
         $N�о�ȫ����ھ�ԴԴ����!!������֮��ǿ!!!\n" NOR,me);
     me->add("force_factor",10);
    }
   me->add ("force", -(50+skil*3));
    me->set("powerup_flag",1);
    me->apply_condition("powerup",1+value/10);	
   if( me->is_fighting() ) me->start_busy(1);
  return 1;
}

