#include <combat.h>
#include <ansi.h>
inherit F_CLEAN_UP;
int update_condition(object me, int duration)
{
  if(!me) return 0;
  if(!environment(me)) return 0;
   if(duration<=1) return 0; 
        if( duration > 3 ) {
                tell_object(me, HIB"��Ŭ���Ľ��������뵤�\n"NOR);
                message("vision", me->name() + "���ϱ���ƬƬ�������й���ʱ�� \n",
                        environment(me), me);
        } else if( duration > 2 ) {
                tell_object(me, HIY"���й������������մ�붾�ء� \n"NOR);
                message("vision", me->name() + "�ƺ��ö��� \n",
                        environment(me), me);
        } else if( duration > 1 ) {
                tell_object(me, "�����ڽ���������ϡ� \n");
                message("vision", me->name() + "�й���ɣ��ָ������� \n",
                        environment(me), me);
        }
     me->add("poison",5);
        me->apply_condition("poison", duration - 1);
        COMBAT_D->report_status(me, 1);
     if( duration <= 1 ) return 0;
        return 1;
}

