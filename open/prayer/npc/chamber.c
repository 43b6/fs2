#include "/open/open.h"
#include "ansi.h"
inherit NPC;
inherit F_MASTER;
 
void create()
{
    set_name("������",({"chamber"}));
    set("title", "�̷���");
    set("gender", "Ů��");
    set("age",46);
    set("attitude","aggressive");
    set("long",@LONG

	�̷��ڸ�����ʹ���̵���, ֱ�����������������ܬL��
	ָʹ, ���̲б�!!�Ѿ���֪ɱ����������������������
	!!

LONG);
 
    set("combat_exp",1000);
    set("str",15);
    set("con",15);
    set("int",15);
    set("max_kee",500);
    set("kee",500);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set("chat_chance",30);   
     set("chat_msg", ({
     HIR+"������˵: �㾹���ô��̷�!!��Ҫȥ����������!!\n"+NOR,
     HIR+"������˵: ȥ����!!���ҵ�Ƥ����~~~\n"+NOR,
        }) );
    setup();
}

int accept_kill(object who)
{
        who->set_temp("�ô��̷�",1);
        command("say �ɶ�"+RANK_D->query_rude(who)+who->name()+"�ô��̷�,����!!");
        return 1;
}


