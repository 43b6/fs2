
#include <ansi.h>
inherit NPC;

void create()
{
        set_name("[31m�������[m",
        ({"fire-phoenix","fire","phoenix",}));
        set("mount_id","fire-phoenix");
        set("age",12);
        set("race","Ұ��");
        set("score",1000000);
        set("gender","Ů��");
set("level",1);
        set("rider","phoenix");
        setup();
}
string *dodge_msg = ({
"[47;30m$n[47;30m�ĺ�ɫ½������װҪ����[1m��[;47;30m��$N[47;30m��ע���"
"[1m��[;47;30mһ��˲��$n[47;30m�Ѷ��$N[47;30m�Ĺ���[1m��[m\n",
"[47;30m$n[47;30m����һ��[1m��[;47;30m�ڴ�˲���ɫ½������ǰ��[1m��"
"[;47;30m���䲻��[1m��[m\n",
});
string query_dodge_msg()
{
        return dodge_msg[random(sizeof(dodge_msg))];
}
