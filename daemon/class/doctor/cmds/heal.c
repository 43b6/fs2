#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me, string arg)
{
    object ob;
    int sk, sk2;
    sk = (int)me->query_skill("cure",1);
    sk2 = (int)me->query_skill("godcure",1);    
    if(!me) return 1;
    if(!arg) return notify_fail("ָ���ʽ��cmd heal <id>\n");
    if(environment(me)->query("no_kill") == 1)
    return notify_fail("�˵ز��ʺ�ҽ������ࡣ�\n");
    if(me->query("family/family_name") != "������" && !wizardp(me))
    return notify_fail("�㲻�Ǹ�ҽ������ô�ܰ��˿��\n");
    if(sk < 120) return notify_fail("���ҽ�������������ʸ���˿��\n");
    if(sk2 < 100) return notify_fail("��Ļ�٢ҽ�������������ʸ���˿��\n");
    if(!me->query("doctor/vet")) return notify_fail("�㻹û�о�����٢����֤ࡣ�\n");
    if(me->query("gin") < 500) return notify_fail("��ľ������㣬û�а취���˿��\n");
    if(me->query("sen") < 500) return notify_fail("�������㣬û�а취���˿��\n");
    if(me->is_fighting() || me->is_busy()) return notify_fail("�㻹���Ȱ��ֱߵ���æ��ɣ�\n");
    arg = lower_case(arg);
    ob = present(arg, environment(me));
    if(!objectp(ob)) return notify_fail("����Ҫ������λ���˰���\n");
    if(!ob->is_character()) return notify_fail("��ֻ�ܰ��˿���ò��ã�\n");
    if(ob->is_corpse()) return notify_fail("���ڲ�Ҫ����������...̫����Щ�ɣ�\n");
    message_vision(HIW"$Nץ��$n���֣��۾������Ϊ$n�Ѱ�������ʼ������������\n"NOR,me, ob);
    if(ob->query_temp("over/right")&&ob->query_temp("over/left")) {
        message_vision(HIC"ԭ��$N˫�����ˣ�����������ҩ�࣬������û����!\n"NOR,ob);
        ob->delete_temp("over/right");
        ob->delete_temp("over/left");
        ob->delete_temp("hand-all");
        } else if(ob->query_temp("over/r-eyes")&&ob->query_temp("over/l-eyes")) {
        message_vision(HIC"ԭ��$N˫Ŀʧ��������������ҩ�࣬������û����!\n"NOR,ob);
        ob->delete_temp("over/r-eyes");
        ob->delete_temp("over/l-eyes");
        ob->delete_temp("eyes-all");
        } else if(ob->query_temp("over/left")) {
        message_vision(HIC"ԭ��$N�������ˣ�����������ҩ�࣬������û����!\n"NOR,ob);
        ob->delete_temp("over/left");
        } else if(ob->query_temp("over/right")) {
        message_vision(HIC"ԭ��$N�������ˣ�����������ҩ�࣬������û����!\n"NOR,ob);
        ob->delete_temp("over/right");
        } else if(ob->query_temp("over/r-eyes")) {
        message_vision(HIC"ԭ��$N����ʧ��������������ҩ�࣬������û����!\n"NOR,ob);
        ob->delete_temp("over/r-eyes");
        } else if(ob->query_temp("over/l-eyes")) {
        message_vision(HIC"ԭ��$N����ʧ��������������ҩ�࣬������û����!\n"NOR,ob);
        ob->delete_temp("over/l-eyes");
        } else {
        message_vision(HIW"$N����ܽ�������û������!\n"NOR,ob);
        }
    me->receive_damage("gin",500);
    me->receive_damage("sen",500);
    return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ��cmd heal <id>
ָ��˵����
������       ҽ��רΪ�۾�ʧ��˫�����˵�ҽ�ƣ�
HELP);
        return 1;
}

