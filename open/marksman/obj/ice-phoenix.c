
#include <ansi.h>
inherit NPC;

void create()
{
        set_name("[1;37m���������[0m",
        ({"ice-phoenix","ice","phoenix",}));
        set("mount_id","ice-phoenix");
        set("age",12);
        set("race","Ұ��");
        set("score",1000000);
        set("gender","Ů��");
set("level",1);
        set("rider","phoenix");
        setup();
}
string *dodge_msg = ({
HIB"$n"HIB"����ɫ½������װҪ����"BLU"��"HIB"��$N"HIB"��ע���"BLU"��"
HIB"һ��˲��$n"HIB"�Ѷ��$N"HIB"�Ĺ���"BLU"��\n"NOR,
HIB"$n"HIB"����һ��"BLU"��"HIB"�ڴ�˲����ɫ½������ǰ��"BLU"��"HIB"���䲻��"BLU"��\n"NOR,
});
string query_dodge_msg()
{
        return dodge_msg[random(sizeof(dodge_msg))];
}
