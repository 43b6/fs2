#include <combat.h>
#include <ansi.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
        object *enemy,ob;          
        int damage,i,fun;
        enemy=me->query_enemy();
        i=sizeof(enemy);
        fun=me->query("functions/gold-dest/level");
        if(!(ob=me->query_temp("weapon")) ||
           (string)ob->query("skill_type") != "blade")
              return notify_fail("Ҫ�е�����ʹ��ǧ��ն��\n");
        if(me->query_skill("gold-blade",1)<60)
           return notify_fail("����Ͻ�������������������"+
                              "û�취ʹ������ն��\n");
if(me->query("family/family_name") != "����")
return notify_fail("�ǽ���ͽ�����ã���\n");
if(!me->is_fighting())
           return notify_fail("����նֻ����ս����ʹ�á�\n");
        if(me->query("force") < 50)
           return notify_fail("�������������\n");
if(fun==100) {
message_vision(HIC"$N���һ���������е���!!!\n\n"HIB"һ��"HIR"����ն"HIW"�ռ�ʽ"HIY"---"HIG"��"HIR"��"HIY"а"HIM"����ն"HIG"��!!!\n\n"NOR,me);
damage=me->query_skill("blade")*8;
} else if(fun<=20) {
message_vision(HIR"$N����һ����ʹ���𵶾�ѧ������ն��"+
                               "�������ֻ����У�\n"NOR,me);
damage=me->query_skill("gold-blade",1)*3;
} else if(fun<=40&&fun>=21) {
message_vision(HIG"$N����һ����ʹ���𵶾�ѧ��ʮ��ն��"+
                               "�������ֻ����У�\n"NOR,me);
damage=me->query_skill("gold-blade",1)*4;
} else if(fun<=60&&fun>=41) {
message_vision(HIY"$N����һ����ʹ���𵶾�ѧ������ն��"+
                               "�������ֻ����У�\n"NOR,me);
damage=me->query_skill("gold-blade",1)*5;
} else if(fun<=80&&fun>=61) {
message_vision(HIB"$N����һ����ʹ���𵶾�ѧ��ǧ��ն��"+
                               "�������ֻ����У�\n"NOR,me);
damage=me->query_skill("gold-blade",1)*7;
} else if(fun>=81&&fun<=99) {
message_vision(HIC"$N����һ����ʹ���𵶾�ѧ������ն��"+
                               "�������ֻ����У�\n"NOR,me);
damage=me->query_skill("gold-blade",1)*9;
}
        me->add("force",-50);
        me->start_busy(1);
        while(i--) {
if(!me || !enemy[i]) continue;
if(environment(me)!=environment(enemy[i])) continue;
if(random(100) > 20) {
              enemy[i]->receive_wound("kee",damage);
message_vision(HIR"$N���㲻�������������Źᴩ������\n"NOR,enemy[i]);
              COMBAT_D->report_status(enemy[i],1);
          }
          else message_vision(YEL"$N����Ķ���˵�����\n"NOR,enemy[i]);
        }
if(fun<100) { function_improved("gold-dest",random(300)); }
        return 1;
}       
