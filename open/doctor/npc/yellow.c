#include <ansi.h>
#include <command.h>
#include "/open/open.h"
inherit NPC;
void create()
{
    set_name("������",({"yellow man","man"}));
    set("gender", "����");
    set("age",71);
    set("attitude","peaceful");
    set("long",@LONG

        ���������Ųؾ������غ������˵ĵ���, ������λ !!��ͨ����!!
LONG);

    set("combat_exp",100000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",700);
    set("kee",700);
    set("max_force",500);
    set("force_factor", 10);
    set("force",500);
    set_skill("dodge",60);
    set_skill("move",60);
    set_skill("parry",60);
    set_skill("force",60);
    set_skill("sixforce",60);
    set_skill("blade",60);
    set_skill("dragon-blade",50);
    map_skill("force","sixforce");
    map_skill("blade","dragon-blade");
    setup();
    carry_object("/open/port/obj/ghost_blade")->wield();
}
void die()
{
    object ob;
    ob= this_object()->query_temp("last_damage_from");
    if( ob && userp(ob) )
    {
    ob->set("yellow", 1);
    tell_object( ob ,"[1;33m������ѧ��ɲ�, ���˿ɾ�!![0m\n");
    }
    ::die() ;
}
void greeting(object ob)
{
        if( ob->query("allow_pass") ==1 ) 
{
        command("say ��ʦ��֮���������д輸��!!");
        kill_ob(ob);
}
}


