#include <ansi.h>
#include <command.h>
#include "/open/open.h"
inherit NPC;
void create()
{
    set_name("������",({"red man","man"}));
    set("gender", "����");
    set("age",68);
    set("attitude","peaceful");
    set("long",@LONG

        ���������Ųؾ������غ������˵ĵĵ���, ���еڶ�!!��ͨ�޷�!!
LONG);

    set("combat_exp",100000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",900);
    set("kee",900);
    set("max_force",900);
    set("force_factor", 10);
    set("force",500);
    set_skill("dodge",60);
    set_skill("move",60);
    set_skill("parry",60);
    set_skill("force",60);
    set_skill("sixforce",60);
    set_skill("whip",60);
    set_skill("gwhip",60);
    map_skill("force", "sixforce");
    map_skill("whip", "gwhip");
    setup();
    carry_object("/open/poison/obj/snake_whip")->wield();

}
void die()
{
    object ob;
    ob= this_object()->query_temp("last_damage_from");
    if( ob && userp(ob) )
    {
    ob->set("red", 1);
    ob->delete("yellow");
    tell_object( ob ,"[1;33m������ѧ��ɲ�, ���˿ɾ�!![0m\n");
    }
    ::die() ;
}
void greeting(object ob)
{
        if( ob->query("yellow") ==1 ) 
{
        command("say ��ʦ��֮���������д輸��!!");
        kill_ob(ob);
}
}


