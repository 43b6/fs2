#include <ansi.h>
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
        set_name("����",({"cheng chong","cheng","chong"}));        set("gender", "����" );
        set("age",40);
        set("long", "������ջ���ƹ� , �������������Ų������Ʊ .\n");
        set("attitude", "friendly");
        set("combat_exp",20000);
        set("nickname",HIG"��������"NOR);
        set("dodge",50);
        set("parry",50);
        set("unarmed",50);
        set("chat_chance",20);
        set("chat_msg",({
        "���ܾ��ŵ�˵���ҿ���û��ʲôǮร���ȥ�ұ��˰ɡ�\n",
        }));

        setup();
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
say("����˵��: ��λ"+RANK_D->query_respect(ob)+"��� , ���Ե㶫���� !\n");
return;
}
int accept_kill(object ob)
{
 command("say ��ѽ!����ѽ!����Ҫ����ѽ!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say ��÷��!!��æ����Ǯ���������ˣ��߿��߿�������Ǯ��");
return 0;
}
