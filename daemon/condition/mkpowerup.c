// ���� mk-blade �Ŀ� condition by swy
#include <ansi.h>
inherit F_FUNCTION;
int update_condition(object me, int duration)
{
if(duration==0) {
object wname=me->query_temp("secondary_weapon");
int fun = me->query("functions/powerup/level");
        if(me) {
      if(me->query_temp("powerup")) {
        me->delete_temp("powerup");
        me->add_temp("apply/dodge",20);
        me->add_temp("apply/move",20);
        me->add_temp("apply/parry",20);
        me->add_temp("apply/attack",-((fun*2)+30));
       if(wname) wname->delete("nodrop");
      }
        message_vision(HIW"$N���ĵ���Ѫ����ʧ�ˡ�\n"NOR,me);
        if(fun<100) { function_improved("powerup",random(700)); }
        }
return 0;
}
tell_object(me ,HIW"�㡮"HIY"��Ѫ��"HIW"����ͻȻ����ʹ��Ŀ�ɱ���ˡ�\n"NOR);
message("vision",HIC+me->name()+"��"HIY"��Ѫ��"HIC"�����Ϳ�Ҫɥʧ�����ˡ�\n"NOR,environment(me),me);
me->apply_condition("mkpowerup",duration-1);
return 1;
}

