#include <ansi.h>
inherit NPC;
void create()
{
    set_name("ʬ����",({"ghost"}) );
    set("long",
   "�������Ľ������������Ĺ����ʬ�����ҩˮ�У�ֻ��ʩҩ�ߵ�����\n");
    set("race", "����");
    set("gender","����");
    set("combat_exp",550000);
    set("age",40);
    set("title","��������Ա");
    set("kee",400);
    set("max_kee",400);
    set("bellicosity",300);
    set_skill("dagger",70);
    setup();
    carry_object("/open/killer/obj/dagger")->wield();
}