// �޸�cmd search.c by nike

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int search(object me);
int main(object me)
{
    object room = environment(me);

    if(!me) return 1;
    if(me->query_skill("godcure",1) < 100 )
        return notify_fail("���ҩ���в�����Ϥ, ��������ҩ��!!\n");
    if(!room->query("can_search",1))
        return notify_fail("���ֱ��������˴����������ҵ��κ�ҩ��, �����˷�ʱ����!!\n");
    if(me->query("class") !="doctor" )
        return notify_fail("�㲻��ҽ����֪�����Ѱҩ��!!\n");
    if(me->query_temp("search") ==1  )
        return notify_fail("������Ѱ��ҩ��!!\n");
    if(me->is_fighting() || me->is_busy())
        return notify_fail("ս�����޷���Ѱҩ��!!\n");
    
        message_vision(HIB"$N��ʼ�Ĵ���Ѱҩ��!!\n"NOR,me);
        me->start_busy(2);
        me->set_temp("search",1);
        call_out("search",5,me);
        return 1;
}
int search(object me)
{
    object obj;
    int i = random(120);

    if(!me) return 1;
    if(i > 0 && i <= 3) {obj = new("/open/doctor/item/sky_item.c");}
    if(i > 5 && i <= 8)  {obj = new("/open/doctor/item/ground_item.c");}
    if(i > 10 && i <= 13)  {obj = new("/open/doctor/item/human_item.c");}
    if(i > 15 && i <= 20)  {obj = new("/open/doctor/item/bilin_item.c");}
    if(i > 22 && i <= 27) {obj = new("/open/doctor/item/f_item.c");}
    if(i > 29 && i <= 35) {obj = new("/open/doctor/item/ff_item.c");}
    if(i > 38 && i <= 44) {obj = new("/open/doctor/item/g_item.c");}
    if(i > 50 && i <= 57) {obj = new("/open/doctor/item/icetree_item.c");}
    if(i > 64 && i <= 72) {obj = new("/open/doctor/item/nine_item.c");}
    if(i > 79 && i <= 89) {obj = new("/open/doctor/item/seng_item.c");}
    if(i > 93 && i <= 100) {obj = new("/open/doctor/item/sick_item.c");}
    if(i > 105 && i <= 112) {obj = new("/open/doctor/item/taii_item.c");}
    if(obj)
    {
        message_vision(HIY"$N�Ѿ��������������ҵ���һ��$n��\n"NOR,me, obj);
        obj->move(me);
        me->delete_temp("search");
        return 1;
    }
        else
    {
        message_vision(HIY"$NŬ�������˰��죬����û�ҵ��κ�ҩ�ģ�\n"NOR,me);
        me->delete_temp("search");
        return 1;
    }
}

