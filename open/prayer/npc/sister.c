//Сʦ��
#include <command.h>
 
inherit NPC;
string ask_where()
{
    object who=this_player();
    if(who->query_temp("go_kill",1) )
    {
    who->delete_temp("go_kill");
    who->set_temp("will_kill",1);
    return("������������ݶ���ʥ���֮��..����������һ��֧���ҾͲ���˵����...\n
    �����Ϻ�ϲ������һ֧���!!\n");
    }
}

void create()
{
    set_name("Сʦ��",({"sister"}));
    set("title", "����ʫ��");
    set("gender", "Ů��");
    set("age",23);
    set("attitude","friendly");
    set("long",@LONG

        ������Ů���ɵĵ���, ������Ϊ��ʦ��½�ܽ����ı����֮��, 
        ����һλʦ������ʫԶ��������.........

LONG);
 
    set("combat_exp",122000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",500);
    set("kee",500);
    set("max_force",500);
    set("force_factor", 10);
    set("force",500);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("dodge",40);
    set_skill("move",40);
    set_skill("parry",40);
    set_skill("sword",40);
    set_skill("henma-steps",40);
    set_skill("girlsword",40);
    set_skill("holy-force",40);
    map_skill("move","henma-steps");
    map_skill("force", "fireforce");
    map_skill("sword", "girlsword");
    map_skill("dodge", "henma-steps");
    map_skill("parry", "girlsword");
    set("chat_chance",30);
    set("chat_msg", ({
        "[36m���������Ϊ�����ֻء�!!\n\n"
        "[36m�ټұ������������þ��衫[0m!!\n\n",
    }) );
    set("inquiry",([
    "��Ů��":"��Ů������ԭ��һ��С����, ���ǽ������Ǹ�������!!\n",
    "����":"�����Ҳ�֪����������!!���������彣[31m[��Խ�][0m��֪���Ƿ���ʦ��ķ������!!\n",
    "½�ܽ":"��!!�Ǹ����յ�С��, ���������Żز���!!��֪��������Ҳ[32m������[0m��..\n",
    "������":(: ask_where :),
 ]));
    setup();
}


