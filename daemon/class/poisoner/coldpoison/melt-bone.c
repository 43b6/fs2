#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
        int bone_lv;
        int j;
        string msg;
        object weapon;
        string *name;
        bone_lv= query_function("melt-bone");
        j=random(100);
        if( !target ) target = offensive_target(me);
        if(!target) return notify_fail("�����Ǿ�����ҵĹ�ϵ,�㾹Ȼ�Ҳ�����������??\n");
//�����Թ����Լ�by bss
        if(target==me) return notify_fail("�����Լ�???������?\n");
        if(!me->is_fighting(target))
        return notify_fail("��������ֻ����ս����ʹ�á�\n");
        if(me->query("family/family_name")!="ڤ��ħ��")
        return notify_fail("���Ƕ��̽�ͽ����������\n");
  if(target->is_busy())
  return notify_fail("����busy�У��칥���ɣ�\n");
        if ( me->query("force") < 310 )
        return notify_fail("�����������\n");
    message_vision(HIC"$N����һ�� ,һ���ȳ�֮�������������� ,ɲ�Ǽ� ,\n"NOR,me,target);
    message_vision(HIC"��ر�ɫ ,�����!!\n"NOR,me,target);
    message_vision(HIC"\n$N����΢�� ,�ͺ�"HIR"��  ��������!! �� "HIC"$N�����Ʒ���Ȼ�����Ʈȥ!! \n"NOR,me,target);
if(80>random(100)) {
    if( j >= 95 && bone_lv>=90 && target->query_temp("no_die_soon")!=1)
    {
    me->add("force",-300);
    target->die();
    write (HIY"\n��Ľ���������˫�ƣ����һ�������˻�ΪѪˮ!!\n"NOR);
    say (HIY"\n����....�ۿ��Ŷ��ֻ�Ϊһ̯Ѫˮ ,���Ƕ�������......\n"NOR);
    }
else if( bone_lv <= 40)
    {
    me->add("force",-200);
    target->receive_damage("kee",(200+(bone_lv*3)));
    target->start_busy(1);
    write (HIG"ֻ���Ʒ����ɵĳ�����Ʈȥ ,���������������� ,���Ա��Ʒ�ɨ��!!\n"NOR);
    say (HIY"���ֱ�"+me->query("name")+"���������Ʒ�ɨ�� ,�ܵ���С���˺�!\n"NOR);
    }
else  if( bone_lv >= 41 && bone_lv <= 80)
    {
    me->add("force",-250);
    target->receive_damage("kee",(250+(bone_lv*4)));
    target->start_busy(2);
    write (RED"ֻ���Ʒ��������ް�Ʈ����� ,�������ܲ��� ,�����Ʒ�!!\n"NOR);
    say (HIY"ɷ�Ǽ� ,�������϶��һ����ӡ ,��Ȼ���˲���!!\n"NOR);
    }
else if( bone_lv >= 81) {
    me->add("force",-300);
    target->receive_damage("kee",(300+(bone_lv*5)));
    target->start_busy(3);
    write (HIC"ֻ���Ʒ���һ��ĺ���̰�Ʈ����� ,�����ڻ�Ȼ������ ,�Ѳ��ⶾ��!!\n"NOR);
    say (HIY"��֪��ô�� ,������Ѫ���� ,����Ȼ����!!\n"NOR);
}
} else {
    write (HIW"���� ,�Ʒ羹�����Լ�Ʈ�� ,����!!����ѷ����!!!\n"NOR);
    say (HIY"ֻ��"+me->query("name")+"����һ����ҡ ,�����ֺ������˵�վ��ԭ��\n"NOR);
}
    me->start_busy(1);
if( bone_lv < 100) function_improved ("melt-bone",random(700));
    return 1;
}
