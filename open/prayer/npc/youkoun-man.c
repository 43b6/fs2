//��ʮһ
#include <command.h>
 
inherit NPC;

string ask_red()
{
    object who=this_player();
    if( who->query_temp("youkoun") >= 4 )
    {
    who->set_temp("red",1);
    return("[36m��������������Ҳ��֪��, ���������������Ѿ����˼Ǻ�, ֻҪ��һ�����ͻᷢ����!![0m\n");
    }
    else
    {
    return("[36m�������Ѿ����ܬL������������ٶ����˰�!![0m\n");
    }
}

string ask_whip()
{
    object who=this_player();
    if( who->query_temp("kill_youkoun") && who->query_temp("help_red") && !who->query("quests/sunwhip"))
    {
    who->set("quests/sunwhip",1);
    who->set_skill("sunwhip",5);
    who->add("max_force",50);
    return("[36m������Ҿ͵����ǰ���ϼɽ����!!�����ձ޷��ʹ������!![0m\n");
    }
    else
    {
    return("[36m���ձ޷��ǲ��ܹ����ʹ������˵�!!�����ǲ�Ҫ�����������!![0m\n");
    }
}

void create()
{
    set_name("��ʮһ",({"man-eleven","man","eleven"}));
    set("title", "ϼɽ");
    set("gender", "����");
    set("age",32);
    set("attitude","friendly");
    set("long",@LONG

	ϼɽ�ɵ���--��ʮһ, ��ʱ����ڴ�, ȫ���˺�����
	��������������͸��һ�ɾ�׳֮��.........

LONG);
 
    set("combat_exp",432000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",500);
    set("kee",500);
    set("max_force",500);
    set("force_factor", 25);
    set("force",500);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("dodge",150);
    set_skill("move",150);
    set_skill("parry",150);
    set_skill("whip",120);
    set_skill("sunwhip",120);
    set_skill("force",120);
    set_skill("fireforce",120);
    map_skill("force", "fireforce");
    map_skill("whip", "sunwhip");
    map_skill("parry", "sunwhip");
    set("inquiry",([
    "ϼɽ��":"[36mϼɽ�ɵ���ѧ·��, ϵʦ������֮[���ձ޷�]![0m\n",
    "����":"[36m���Ų��ں������!!�����ұ����ڴ�û��֪��!![0m\n",
    "���ձ޷�":(: ask_whip :),
    "���":(: ask_red :),
 ]));
    setup();
    carry_object("/open/prayer/obj/ligature")->wield();
}

void greeting(object who)
{
    if( who->query_temp("kill_red") >= 2 ) 
    {
    write("    [36m�㾹Ȼɱ����ʦ��, ����Ҫ���ɱ޷�������!!��!!ϼɽ�ɴӴ���
    ����������!!�����ھ��ȸ���ƴ��!!\n");
    kill_ob(who);
    return;
    }
}

void die()
{

    object who;
    who= this_object()->query_temp("last_damage_from");
    if( who && userp(who) ) 
    {
    who->set("kill_eleven", 1);
    write("\n[36mлл��ɱ����, ����������Կ��ֵظ�ʦ����һ����!![0m\n");
    }
    ::die() ;
}
