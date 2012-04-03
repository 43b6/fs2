#include <ansi.h>
inherit NPC;

string ice_spell();
string find_hole();

void create()
{
    set_name("����",({"die soul","soul","die"}));
    set("long","����½��統��İ��ˣ��Ϲٵ�����ΪĳЩ������ܷ�������Ϊ����\n");
        set("no_kill",1);
        set("no_fight",1);
        set("no_conjure",1);
        set("inquiry",([
                "��������" : (:ice_spell:),
                "��Ѩ" : (:find_hole:),
                "�ͷ�" : "ֻҪ��������ʦ�����õķ�����һ��ʩչ��ū�����ϣ�ū�ҾͿ������»��������...\n",
        ]));
    setup();
}

void init()
{
    object me = this_player();
        string gen;

    if(me->query_temp("icestorm/ice_spell")==1) {
        if(me->query("gender")=="����") gen = "����";
        else gen = "����";
    
        write(HIC"����˵������л"+gen+"�����ٻ�����...\n\n"NOR);
                write(HIC"��Ȼū�ҵ�����ý�ţ������ǻ��Ǳ����������䡱����ס��...\n\n"NOR);
                write(HIC"ֻϣ��"+gen+"���������ף����Ҹ����ͷš�����...\n\n"NOR);
                me->set_temp("icestorm/ice_spell",2);
    }
}

string ice_spell()
{
        object me = this_player();
        
        if(me->query_temp("icestorm/ice_spell")==2)
        {
                command("say ��ֻ֪����ʦ�����ұ���֮�󣬱����һ����������һ������Ѩ��֮��...");
                me->set_temp("icestorm/ice_spell",3);
                return "�����Ǳ�����ǡ��������䡯��...";
        }
}

string find_hole()
{
        object me = this_player();
        
        if(me->query_temp("icestorm/ice_spell")==3)
        {
                me->set_temp("icestorm/ice_spell",4);
                return "��...������ת��(turn)�ҵĵ��񿴿�...";
        }
}

