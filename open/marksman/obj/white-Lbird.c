
#include <ansi.h>
inherit NPC;

void create()
{
        set_name(HIW"��ɫ½����"NOR,({"white land of bird","white","land","bird",}));
        set("mount_id","white-Lbird");
        set("age",12);
        set("race","Ұ��");
        set("score",1000000);
        set("gender","Ů��");
        set("level",1);
        set("rider","Lbird");
        setup();
}
string *dodge_msg = ({
HIW"$n"HIW"�İ�ɫ½������װҪ����"NOR"��"HIW"��$N"HIW"��ע���"NOR"��"
HIW"һ��˲��$n"HIW"�Ѷ��$N"HIW"�Ĺ���"NOR"��\n",
HIW"$n"HIW"����һ��"NOR"��"HIW"�ڴ�˲���ɫ½������ǰ��"NOR"��"HIW
"���䲻��"NOR"��\n",
});
string query_dodge_msg()
{
        return dodge_msg[random(sizeof(dodge_msg))];
}
