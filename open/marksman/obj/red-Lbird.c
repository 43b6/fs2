
#include <ansi.h>
inherit NPC;

void create()
{
        set_name(HIR"��ɫ½����"NOR,
        ({"red land of bird","red","land","bird",}));
        set("mount_id","red-Lbird");
        set("age",12);
        set("race","Ұ��");
        set("score",1000000);
        set("gender","Ů��");
        set("level",1);
        set("rider","Lbird");
        setup();
}
string *dodge_msg = ({
HIR"$n"HIR"�ĺ�ɫ½������װҪ����"RED"��"HIR"��$N"HIR"��ע���"RED"��"
HIR"һ��˲��$n"HIR"�Ѷ��$N"HIR"�Ĺ���"RED"��\n"NOR,
HIR"$n"HIR"����һ��"RED"��"HIR"�ڴ�˲���ɫ½������ǰ��"RED"��"HIR"���䲻��"
RED"��\n"NOR,
});
string query_dodge_msg()
{
        return dodge_msg[random(sizeof(dodge_msg))];
}
