//��ͽ��
#include <command.h>
#include "/open/open.h"
 
inherit NPC;

void create()
{
    set_name("��������",({"man"}));
    set("gender", "����");
    set("age",23);
    set("attitude","peaceful");
    set("long",@LONG

	���ǹ���ɵĵ���, ���е���!!��ͨ����!!

LONG);
 
    set("combat_exp",3000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",100);
    set("kee",100);
    set("max_force",500);
    set("force_factor", 1);
    set("force",500);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("dodge",60);
    set_skill("move",60);
    set_skill("parry",60);
    set_skill("force",60);
    set_skill("fireforce",60);
    map_skill("force", "fireforce");
    set_skill("sword",60);
    set_skill("shasword",60);
    map_skill("sword", "shasword");
    setup();
    carry_object("/open/gsword/obj/woodsword")->wield();
}

int accept_kill(object ob)
{
	if( ob->query_temp("high-man") == 4 && !ob->query("quests/high-man") )
        {
        message_vision("[36m��ͻȻ���Դ�, ������һ���̴���������� .... [0m\n",ob);
        message_vision("\n",ob);
        tell_object( ob ,"[31m�����ǰһƬ�ڰ�......[0m\n");
        this_object()->remove_all_killer();
        ob->unconcious();
        load_object("/open/prayer/room/westarea/highroom");
        ob->move("/open/prayer/room/westarea/highroom");
        return 1;
        }
        else
        {
        return 1;
        }
}

