#include "/open/open.h"
#include <ansi.h>
inherit F_VENDOR;

void create()
{
        set_name("������",({"yang ming teck","yang","ming","teck"}));
        set("gender", "����" );
        set("age", 35);
        set("long", @LONG
��������ҩ������ϰ壬������ĸ�ʽ����ҩ�ģ�Ӧ�о��С�
LONG
        );
        set("combat_exp",20000);
        set("nickname",HIR"ҩ������"NOR);
set("title","ר�ο�Ȯ��");
        set("attitude", "friendly");
        set_skill("dodge", 40);
set("no_lyssa",1);
        set_skill("unarmed", 20);
        set("vendor_goods", ({
        COMMON_OBJ"bandage",
"/open/marksman/obj/super_pill",
        COMMON_OBJ"pill",
        COMMON_OBJ"pill1",
        COMMON_OBJ"pill2",
"/open/doctor/pill/ff_pill",
        COMMON_OBJ"plaster",
        COMMON_OBJ"plaster1",
        COMMON_OBJ"plaster2",
        }) );
        setup();
        add_money("coin",35);
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(3) ) {
                case 0:
                say("�����¿�����˵: ��λ"+RANK_D->query_respect(ob)
                    +"����Щ���Ʋ�Ʒ��!\n");
                break;
                case 1:
                say("�����¿����ĵ�: ���ʲôҩ�Ķ��� "+RANK_D->query_respect(ob)
                    +"Ҫ����������!?\n");
                break;
                case 2:
                say("�����¸�������: ������, "+RANK_D->query_respect(ob)
                    +"Ҫ�Ļ����ҿ��������һ���!\n");
                break;
        }
}
int accept_kill(object ob)
{
 command("say ��!��ҽ����Ҳ��ɱ��������ҩ�ɾȡ�");
 command("say ������!!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say ��û�п������ڼ��Ȳ�����?����������ĵط�ȥ��");
return 0;
}
