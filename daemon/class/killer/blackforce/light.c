//made by leei to test 
//�޸����֮���� /std/char.c ��ע�� 
//               /daemon/skill/blackforce.c  2~4��
//               /cmds/drop.c  65~69��
#include <ansi.h>
inherit F_FUNCTION; 
inherit F_CLEAN_UP;  
int exert(object me, object target)
{
        int fun_lv, ski_lv, x;
        ski_lv = me->query_skill("blackforce");
        fun_lv = me->query("functions/light/level",1);

        if( me->query("family/family_name") != "������" ) {
        tell_object(me,"ֻ�к����������˲ſ���ʹ�á�\n"); return 1; }
        if( ski_lv < 1 ) {
        tell_object(me,"��ġ������񹦡�û�����ҡ�\n"); return 1; }
        if( me->query("force") < fun_lv+5 ) {
        tell_object(me,"�������������\n"); return 1; }
        if( me->query("sen") < 50 ) {
        tell_object(me,"�������״̬�������С�\n"); return 1; }
        if( !target ) {
        tell_object(me,"ʹ�ø�ʽ exert light <��Ʒ>��\n"); return 1; }
        if( target->query("had_light")  ) {
        tell_object(me,target->name()+"Ŀǰ�ѱ�ʩ��������Ҫ��ʩһ���ˡ�\n");
        return 1; }
        if( target->query("light_up") ) {
        tell_object(me,target->name()+"���Ѿ�������������Ҫ��ʩ���ˡ�\n");
        return 1; }
        if( target->query("no_get") ) {
        tell_object(me,target->name()+"�޷�����ʩ����\n"); return 1; }
        if( me->is_fighting() ) {
        tell_object(me,"ս�����޷�ʩչ���������\n"); return 1; }
        if( target->is_character() || target->is_corpse() ) {
        tell_object(me,"��ֻ�ܶԷ�����ʹ�����ġ�\n"); return 1; }

        me->receive_damage("sen",25); 
	message_vision(HIR"$N���о���ר�ĵ�������"HIW"������"HIR"��...��\n"NOR,me);

	if( random(ski_lv + fun_lv)  < random(fun_lv)+random(ski_lv) )
        {
        if ( ski_lv < 10 ) x=3;
        else x=ski_lv/3;

   target->add("light_up",(fun_lv*x)+(target->query_weight()/100));
   me->add("force",- (me->query("force"))/5 );  
   message_vision(HIW"\n��$N�������һ��ǿ�ҵĹ�âע��$n�С�\n"NOR,me,target);
        call_out("been_light", 3+random(fun_lv/4), me, target);
        me->start_busy(random(x)/3);
        } else {
	message_vision(YEL"\n$N���������ĺ�ȴ��ô��Ҳû������\n"NOR,me);
        me->add("force",-fun_lv);  
        me->start_busy(random(x)/3);
        }
   function_improved("light",random(me->query("max_force",1)/3));    
        return 1;
}
int been_light(object me, object target)
{
        int fun_lv,ski_lv,weight;
        if(!target) return notify_fail("Ŀ�겻����!!\n");
        ski_lv = me->query_skill("blackforce");
        weight=target->query_weight();
        fun_lv = me->query("functions/light/level");
        if( weight < 0 ) {
   message_vision(HIY"\n$n�������Ѿ���$Nե���˶���ʧ����\n"NOR,me,target);
        destruct(target);
        } else {
   message_vision(HIY"\n$n��������$N��������������ǿ�ҵĹ�ã��\n"NOR,me,target);
      if ( weight > 1000 ) {
        target->set_weight(weight-fun_lv*ski_lv/3);  }
      else { target->set_weight(weight-ski_lv*2); }
        target->set("had_light",1);
        target->set("be_light",1); 
        target->set("old_name", target->name() );
        target->set("name","[4;1m"+target->name()+"[0m");
        }
}
