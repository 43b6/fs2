// �� condition ������������� crash ʱ���Խ������������� by swy
#include <ansi.h>
inherit F_FUNCTION;
int update_condition(object me, int duration)
{
if(duration==0) {
object wname=me->query_temp("secondary_weapon");
int fun = me->query("functions/addbasic/level");
if(me) {
me->delete_temp("addbasic");
me->delete("setgift-mk");
me->set("str",me->query("setgift/str"));
me->set("cps",me->query("setgift/cps"));
me->set("cor",me->query("setgift/cor"));
me->set("int",me->query("setgift/int"));
me->set("spi",me->query("setgift/spi"));
me->set("kar",me->query("setgift/kar"));
if(wname) wname->delete("nodrop");
message_vision(HIW"$N���ĵ���Ѫ����ʧ�ˡ�\n"NOR,me);
if(fun<100) { function_improved("addbasic",random(700)); }
}
return 0;
}
tell_object(me,HIW"�㡮"HIG"����쳣"HIW"��������ȫ���ƺ�����һ���ˡ�\n"NOR);
message("vision",HIC+me->name()+"ȫ��"HIG"����쳣"HIC"������ȫ���������˶����ϲ������ˡ�\n"NOR,environment(me),me);
me->apply_condition("giftout",duration-1);
return 1;
}

