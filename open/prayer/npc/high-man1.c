//��ͽ��
#include <command.h>
#include "/open/open.h"
 
inherit NPC;

void create()
{
    set_name("��������",({"man"}));
    set("gender", "����");
    set("age",40);
    set("attitude","peaceful");
    set("long",@LONG

	���ǹ���ɵĵ���, ������λ!!��ͨ����!!

LONG);
 
    set("combat_exp",10000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",700);
    set("kee",700);
    set("max_force",500);
    set("force_factor", 10);
    set("force",500);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("dodge",60);
    set_skill("move",60);
    set_skill("parry",60);
    set_skill("force",60);
    set_skill("fireforce",60);
    set_skill("blade",60);
    set_skill("dragon-blade",60);
    map_skill("force", "fireforce");
    map_skill("blade", "dragon-blade");
    setup();
    carry_object("/open/port/obj/ghost_blade")->wield();
    
}

int accept_kill(object ob)
{
	if( ob->query("kill_high1") )
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
    ob->add("potential", 10000);
    ob->set("kill_high1", 1);
    write("[36m������ѧ��չ֮��, �����¿ɾ�����!![0m\n");
    }
    ::die() ;
}


