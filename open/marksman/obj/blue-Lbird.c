
#include <ansi.h>
inherit NPC;

void create()
{
        set_name(HIB"��ɫ½����"NOR,
        ({"blue land of bird","blue","land","bird",}));
        set("mount_id","blue-Lbird");
        set("age",12);
        set("race","Ұ��");
        set("score",1000000);
        set("gender","Ů��");
        set("level",1);
        set("rider","Lbird");
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
