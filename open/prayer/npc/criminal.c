#include <command.h>
#include <ansi.h>
 
inherit NPC;
 
void create()
{
    set_name("�˷�",({"criminal"}));
    set("title", "���ε�");
    set("gender", "Ů��");
    set("age",36);
    set("attitude","friendly");
    set("long",@LONG

	����ŵ����ڵ��˷�, ��֪��Ϊ�λᱻ���ڴ˵�!!�����˺�
	����, Ӧ�������̺�ĺۼ���.

LONG);
 
    set("combat_exp",50);
    set("str",1);
    set("con",1);
    set("int",1);
    set("max_kee",5);
    set("kee",5);
    set("limbs",({"ͷ","��","��","��","��","��"}));

    setup();
}
int accept_kill(object who)
{
        who->set_temp("ɱ���˷�",1);
        command("say ��.."+RANK_D->query_rude(who)+who->name()+"ɱ���˷����б�Ӧ�ġ�");
        return 1;
}

int accept_fight(object who)
{
    return notify_fail("�˷�������˵��:$N���������ӻ��ܴ���?? ��Ҫ����Ц��!!");
}

void greeting(object who)
{
    if( (who->query("family/family_name") == "ʥ���") )
    {
       command("cower "+who->query("name"));
       command("say "+who->query("name")+"��ҪŰ������........����!!");
    }
    else
    {
    command("say ���߰�!!ʥ��̵��˶��Ǳ�̬ѽ!!!��ץ�����֪����.......");
    }
return;
}