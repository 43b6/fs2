//��ͽ��
#include <command.h>
#include "/open/open.h"
 
inherit NPC;

void create()
{
    set_name("��������",({"man"}));
    set("gender", "����");
    set("age",30);
    set("attitude","peaceful");
    set("long",@LONG

	���ǹ���ɵĵ���, ���еڶ�!!��ͨ�޷�!!

LONG);
 
    set("combat_exp",3000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",900);
    set("kee",900);
    set("max_force",900);
    set("force_factor", 10);
    set("force",500);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("dodge",60);
    set_skill("move",60);
    set_skill("parry",60);
    set_skill("force",60);
    set_skill("fireforce",60);
    set_skill("whip",60);
    set_skill("sunwhip",60);
    map_skill("force", "fireforce");
    map_skill("whip", "sunwhip");
    map_skill("force", "fireforce");
    setup();
    carry_object("/open/poison/obj/snake_whip")->wield();

}

int accept_kill(object ob)
{
	if( ob->query("kill_high2") )
        {
        write("[36m�����Ѿ�ʤ������,  ˡ���²��Է���!![0m\n");
	return 0;
        }
	else
	{
        tell_object( ob ,"[36m��ʦ��֮���������д輸��!![0m\n");
        return 1;
	}
}

void die()
{
    object ob;
    ob= this_object()->query_temp("last_damage_from");
    if( ob && userp(ob) ) 
    {
    ob->add("combat_exp", 50000);
    ob->set("kill_high2", 1);
    write("[36m������ѧ���, ���˿ɾ�!![0m\n");
    }
    ::die() ;
}


