inherit NPC;
#include <ansi.h>
void create()
{
        set_name("������", ({ "degu sa","sa"}) );
        set("long",
        "����degu sa�...�Һܻ�����....\n");
        set("gender","����");
        set("title","������ʥ");
        set("age", 100000);
        set("max_gin", 80000);
        set("max_kee", 80000);
        set("max_sen", 80000);
        set("max_force", 2000000);
        set("force", 2000000);
        set("force_factor",1);
        set("str", 99);
        set("cor", 99);
        set("spi", 99);
        set("int", 99);
        set("bellicosity",10000);
        set("no_plan_follow",1);
        set_temp("no_die_soon",1);
        set("combat_exp", 1);
        set_temp("kang-power",1);
        setup();
}

void die()
{
object me,ob;
ob=this_object();
me=query_temp("last_damage_from");
tell_object(me,HIY"������˵�������ô������...�˼һ�ʹ�İ�...��������...����..\n"NOR);
destruct(ob);
}
