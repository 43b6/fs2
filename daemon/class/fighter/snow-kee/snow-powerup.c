#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit F_CLEAN_UP;
int perform(object me, object target)
{
  int flv,value;
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
   flv=(int)me->query_skill("force")/5;
   if(flv>90) flv=90;
   value = (int)me->query("functions/snow-powerup/level");
   if ( value > 80 )
   { 
      message_vision(HIC"
		$N��ȫ��������ʹ����˪�澢֮���޾�ʽ��
	             "NOR""BWHT""HIW"���ޣ������󣽣���˪������ѩ��"NOR""HIC"
      	    $N�����Χ�ź����������ƺ����Ӿ���㲻�²��죡\n"NOR,me);
	me->set("force_factor",flv);
if(!me->query("snow_add_force")) { 
me->add("force",me->query("max_force"));
me->set("snow_add_force",1); } 
    } else if ( value > 60 )
    {
     message_vision(
     HIW"$N������˪�澢֮��߹���---"HIC"��˪�ɾ�"HIW"---ʹ�����������һ�㺮˪��\n
         $N�о����ϵĺ���ԴԴ����!!������֮��ǿ!!!\n" NOR,me);
     me->set("force_factor",flv);
    }else if ( value > 40 )
    {
     message_vision(
     HIW"$N������˪�澢�����㹦��---"HIC"��ѩ�ɾ�"HIW"---ʹ������Ϸ���˿˿��ѩ����\n
         $N�о����ϵ�ѩ��ԴԴ����!!������֮��ǿ!!!\n" NOR,me);
      me->set("force_factor",flv);
    }else if ( value > 20 )
    {
     message_vision(
      HIW"$N������˪�澢֮�ڶ��㹦��---"HIC"��ˮ�ɾ�"HIW"---�������е�ˮ������ɱ��ǡ�\n
         $N�о����ϵ�ˮ��ԴԴ����!!������֮��ǿ!!!\n" NOR,me);
     me->set("force_factor",flv);
    }else
    {
     message_vision(
     HIW"$N������˪�澢֮��һ�㹦��---"HIC"�����ɾ�"HIW"---��������������������\n
         $N�о�ȫ����ھ�ԴԴ����!!������֮��ǿ!!!\n" NOR,me);
     me->set("force_factor",flv);
    }
    me->add ("force", -250);
    me->set("powerup_flag",1);
    me->apply_condition("powerup",1+value/10);	
  return 1;
}

