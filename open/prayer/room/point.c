//check.c
#include <ansi.h>
inherit SSERVER;
int perform(object me,object target)
{
        string msg,opp;
        int a,b;
        if(!target) target=offensive_target(me);
        if((!target)
        ||(target==me)
        ||(!target->is_character())
        ||(target->is_corpse()))
                return notify_fail("̽��ָֻ���������������ϡ�\n");
        if (((string)me->query("class")!="healer")&&(me->query("force")<20))
                return notify_fail("���������㣬�޷�ʹ��̽��ָ��\n");
        if ((string)me->query("class")!="healer") me->add("force",-20);
        message_vision(HIC"$N����������ٵذ���$n�������� ....\n"NOR,me,target);
        me->start_busy(1);
        if ((random(target->query("bellicosity"))>1200)&&(!environment(target)->query("no_fight"))) {
                tell_object(target,"�㷢��"+me->name()+"׽�����������������ǣ��൱��ŭ��\n");
                message_vision("$N�е������ô׽���ң��ҿ����ǻ�ò��ͷ��ˣ���\n",target);
                target->kill_ob(me);
        }
        opp=target->name();
        write("\n");
        if(random(10)>2) {
                if (target->query("combat_exp") > me->query("combat_exp")*10)
                msg=HIR"�㴥��"+opp+"������ʱ���е���һ��ǰ��δ�еĿ־� ....\n"NOR;
                else if (target->query("combat_exp") > me->query("combat_exp")*5)
                msg=HIM""+opp+"����������ǿ��� ....\n"NOR;
                else if (target->query("combat_exp")> me->query("combat_exp")*3/2)
                msg=HIG""+opp+"����������ǿЩ��� ....\n"NOR;
                else if(target->query("combat_exp")>me->query("combat_exp")*2/3)
                msg=HIY""+opp+"�Ķ��������൱�Ľӽ� ....\n"NOR;
                else if(target->query("combat_exp")>me->query("combat_exp")/5)
                msg=HIB""+opp+"���������Ȳ����� ....\n"NOR;
                else if(target->query("combat_exp")>me->query("combat_exp")/10)
                msg=MAG"����о�����"+opp+"������ ....\n"NOR;
                else msg=CYN"������о�����"+opp+"���κε�ս���� ....\n"NOR;
                if (target->query("max_force")>me->query("max_force")*3/2) {
                        msg+=HIB""+opp+"��������������ߣ�";
                        if (target->query("force")>target->query("max_force")/2)
                        msg+="���������ܳ��棡\n"NOR;
                        else msg+="��������һ�㲻�� ....\n"NOR;
                }
                else if (target->query("max_force")>me->query("max_force")/2) {
                        msg+=HIB"����������Է����ಮ�٣�";
                        if (target->query("force")>target->query("max_force")/2)
                        msg+="���Է�ʤ��������ԣ��\n"NOR;
                        else msg+="��"+opp+"����������̫�㹻 ....\n"NOR;
                }
                else {
                        msg+=HIB"���������"+opp+"ǿ��";
                        if (target->query("force")>target->query("max_force")/2)
                        msg+="���Է������������Ĳ������ӣ�\n"NOR;
                        else msg+="����"+opp+"���������ز��� ....\n"NOR;
                }
        write(msg);
        if (userp(target)) {
        a=(int)(target->query("learned_points")*(target->query("int")-1)
                +target->query("combat_exp"));
        b=(int)(me->query("learned_points")*(me->query("int")-1)
                +me->query("combat_exp"));
        if (a>b*3/2) write("��"+opp+"Ѫ������������е��Լ��ļ����Ȳ���"+opp+" ....\n");
        else if (a>b/2) write(opp+"����Ϣ������ - ���"+opp+"�ļ�����ʵ���˶��� ....\n");
        else write ("��ӶԷ������󿴵ó���"+opp+"�ļ��������Ȳ������ ....\n");
        }
        write("\n");
        return 1;
        }
        write("���ָ������"+opp+"�����ϣ�ȴ������Ѩ�����ڣ��޷�ʹ��̽��ָ ....\n");
        return 1;
}
